package antonioInacioNeto.banco;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class TesteBanco {

	@Test
	void testarCadastroDeContasJaCadastradas() {
		Banco b = new Banco();
		
		Pessoa p1 = new Pessoa(123, "123");
		Pessoa p2 = new Pessoa(456, "456");

		Conta c1 = new Conta(1, p1);
		Conta c2 = new Conta(1, p2);
		
		b.cadastrar(c1);
		b.cadastrar(c2);
		
		b.deposito(1, 101);
		assertEquals(101, b.saldo(1), 0.001);
		b.saque(1, 99, "123");
		assertEquals(2, b.saldo(1), 0.001);
	}
	
	@Test
	void testarSaquesEDepositos() {
		Banco b = new Banco();
		
		Pessoa p1 = new Pessoa(123, "123");
		Pessoa p2 = new Pessoa(456, "456");

		Conta c1 = new Conta(1, p1);
		Conta c2 = new Conta(2, p2);
		
		b.cadastrar(c1);
		b.cadastrar(c2);
		
		b.deposito(1, 101);
		assertEquals(101, b.saldo(1), 0.001);
		b.saque(1, 99, "123");
		assertEquals(2, b.saldo(1), 0.001);
	}

	@Test
	void testarSaquesEDepositosContasInexistentes() {
		Banco b = new Banco();
		
		Pessoa p1 = new Pessoa(123, "123");
		Pessoa p2 = new Pessoa(456, "456");

		Conta c1 = new Conta(1, p1);
		Conta c2 = new Conta(2, p2);
		
		b.cadastrar(c1);
		b.cadastrar(c2);
		
		b.deposito(11, 101);
		assertEquals(-9999999, b.saldo(11), 0.001);
		b.saque(11, 99, "123");
		assertEquals(-9999999, b.saldo(11), 0.001);
	}
	@Test
	void testarSaldoContaInexistente() {
		Banco b = new Banco();
		
		Pessoa p1 = new Pessoa(123, "123");
		Pessoa p2 = new Pessoa(456, "456");

		Conta c1 = new Conta(1, p1);
		Conta c2 = new Conta(2, p2);
		
		b.cadastrar(c1);
		b.cadastrar(c2);
		
		b.deposito(1, 101);
		assertEquals(-9999999, b.saldo(11), 0.001);
	}
	
	@Test
	void testarTransferencia() {
		Banco b = new Banco();
		
		Pessoa p1 = new Pessoa(123, "123");
		Pessoa p2 = new Pessoa(456, "456");

		Conta c1 = new Conta(1, p1);
		Conta c2 = new Conta(2, p2);
		
		b.cadastrar(c1);
		b.cadastrar(c2);
		
		b.deposito(1, 101);
		b.transferencia(1, 2, 100, "123");
		assertEquals(1, b.saldo(1), 0.001);
		assertEquals(100, b.saldo(2), 0.001);
		
		b.transferencia(2, 3, 50, "456");
		assertEquals(100, b.saldo(2), 0.001);

		b.transferencia(5, 2, 50, "456");
		assertEquals(100, b.saldo(2), 0.001);
		
		b.transferencia(2, 1, 100, "123");
		assertEquals(100, b.saldo(2), 0.001);
   }
	
	@Test
	void testarExtrato() {
		Banco b = new Banco();
		
		Pessoa p1 = new Pessoa(123, "123");

		Conta c1 = new Conta(1, p1);
		
		b.cadastrar(c1);
		
		b.deposito(1, 101);
		b.saque(1, 90, "123");
		b.saque(1, 10, "123");
		b.deposito(1, 9);
		assertEquals(10, b.saldo(1), 0.001);
		String extrato = "Credito: 101.0. Saldo: 101.0\n"
				+ "Debito: 90.0. Saldo: 11.0\n"
				+ "Debito: 10.0. Saldo: 1.0\n"
				+ "Credito: 9.0. Saldo: 10.0\n";
		assertEquals(extrato, b.extrato(1));
		
		assertEquals("", b.extrato(11));

	}

}
