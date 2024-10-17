package antonioInacioNeto.banco;

public class NoDaListaDeContas {
	
	private Conta conta = null;
	private NoDaListaDeContas prox = null;
	
	public void cadastrar(Conta c) {
		if (prox == null) {
			conta = c;
			prox = new NoDaListaDeContas();
		} else {
			prox.cadastrar(c);
		}
	}

	public Conta pesquisar(int num) {
		if (prox == null) {
			return null;
		}
		if (conta.getNumero() == num) {
			return conta;
		} else {
			return prox.pesquisar(num);
		}
	}
}
