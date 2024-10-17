package antonioInacioNeto.banco;

import static org.junit.jupiter.api.Assertions.*;
import org.junit.jupiter.api.Test;

class TesteBanco {

    @Test
    void testarBanco() {
        Banco b = new Banco();
        
        Pessoa p1 = new Pessoa(123, "123");
        Pessoa p2 = new Pessoa(456, "456");

        Conta c1 = new Conta(1, p1);
        Conta c2 = new Conta(2, p2);
        
        //professor testou o método cadastrar
        b.cadastrar(c1);
        b.cadastrar(c2);
        
        //professor testou o método deposito e saque
        b.deposito(1, 101);
        assertEquals(101, b.saldo(1), 0.001);
        b.saque(1, 99, "123");
        assertEquals(2, b.saldo(1), 0.001);

        //fiz um teste de extrato da conta 1
		b.extrato(1);
        assertEquals("Credito: 101.0. Saldo: 101.0\nDebito: 99.0. Saldo: 2.0\n", b.extrato(1));
        
        //fiz um teste de transferência da conta 1 para 2
        b.transferencia(1, 2, 2, "123");
        assertEquals(0, b.saldo(1), 0.001);
        assertEquals(2, b.saldo(2), 0.001);

        //fiz um teste de extrato da conta 2 para verificar o extrato e a transferência ultilizando o própiro método
        b.extrato(2);
        assertEquals("Credito: 2.0. Saldo: 2.0\n", b.extrato(2));

        //os métodos já chamam o método pesquisa, então não fiz o teste
    }
}
