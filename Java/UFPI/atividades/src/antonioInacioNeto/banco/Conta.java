package antonioInacioNeto.banco;


public class Conta {
	
	private int numero;
	private double saldo;
	private String extrato = "";
    private Pessoa dono;
	
	public Pessoa getDono() {
		return dono;
	}

	public void setDono(Pessoa dono) {
		this.dono = dono;
	}

	public Conta (int n, Pessoa p) {
		if (p.getConta() != null) {
			System.out.println("Essa pessoa já possui conta!");
			System.exit(1);
		}
		numero = n;
		dono = p;
		dono.setConta(this);
	}
	
	public int getNumero() {
		return numero;
	}
	
	public String getExtrato() {
		return extrato;
	}
	
	public double getSaldo() {
		return saldo;
	}

	void credito(double val) {
		if (val > 0) {
		  saldo = saldo + val;
		  extrato = extrato + "Credito: " + val + ". Saldo: " + saldo + "\n";
		} else {
			System.out.println("Valor invalido.");
		}
	}
	
	boolean debito(double val, String senha) {
		if (val > 0) {
			if (dono.getSenha() == senha) {
			  if (val <= saldo) {
			    saldo = saldo - val;
			    extrato = extrato + "Debito: " + val + ". Saldo: " + saldo + "\n";
                return true;
			  }
			}
		}
		return false;
	}
}
