package antonioInacioNeto.banco;

public class UsoDeConta {

	public static void main(String[] args) {
		
		Pessoa p1 = new Pessoa(123, "password");
		p1.setNome("Pedro");
		
		Pessoa p2 = new Pessoa(456, "password");
		p2.setNome("Raimundo");
		
		Conta c = new Conta(1, p1);
		Conta c1 = new Conta(2, p2);
		Conta c2 = c1;
		
		c.credito(100);
		c.credito(-100);
		c.debito(-10, "password");
		c.debito(10, "password");
		
		c1.credito(101);
		c2.debito(101, "passwd");
				
		System.out.println("Dono: " + c.getDono().getNome() + ". Conta: " + c.getNumero() + ".\n" + c.getExtrato() );
		System.out.println("Dono: " + c1.getDono().getNome() + ". Conta: " + c1.getNumero() + ".\n" + c1.getExtrato() );
	}
}
