package antonioInacioNeto.banco;

public class Pessoa {
	
	private int cpf;
	private String nome;
	private String senha;
	private Conta conta;
	
	public Pessoa(int numCpf, String passwd) {
		cpf = numCpf;
		senha = passwd;
	}
	
	public String getSenha() {
		return senha;
	}

	public void setSenha(String senha) {
		this.senha = senha;
	}

	public Conta getConta() {
		return conta;
	}

	public void setConta(Conta conta) {
		this.conta = conta;
	}
	
	public int getCpf() {
		return cpf;
	}
	
	public void setCpf(int cpf) {
		this.cpf = cpf;
	}
	
	public String getNome() {
		return nome;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
}
