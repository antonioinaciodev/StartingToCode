package antonioInacioNeto.banco;

public class Banco {

	private NoDaListaDeContas contas = new NoDaListaDeContas();	
	
	public void cadastrar(Conta c) {
		contas.cadastrar(c);
	}
	
	public void saque(int num, double val, String senha) {
		Conta c = contas.pesquisar(num);
		if (c != null) {
			c.debito(val, senha);
		}
	}
	
	public void deposito(int num, double val) {		
		Conta c = contas.pesquisar(num);
		if (c != null) {
		  c.credito(val);
		}
	}
	
	public String extrato(int num) {
		Conta c = contas.pesquisar(num);
		if (c != null) {
		  return c.getExtrato();
		}
		return "";
	}
	
	public double saldo(int num) {
		Conta c = contas.pesquisar(num);
		if (c != null) {
		  return c.getSaldo();
		}
		return -9999999;
	}
	

	
	public void transferencia(int num1, int num2, double val, String senha) {
		Conta c1 = contas.pesquisar(num1);
		Conta c2 = contas.pesquisar(num2);
		if (c1 != null && c2 != null) {
			if (c1.debito(val, senha)) {
			  c2.credito(val);
			}
		}
	}
}
