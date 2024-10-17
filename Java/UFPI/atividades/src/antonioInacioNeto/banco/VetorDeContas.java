package antonioInacioNeto.banco;

public class VetorDeContas {

	private Conta contas[] = new Conta[10];
	private int pos = 0;
	
	public void cadastrar(Conta c) {
		Conta outra = pesquisar(c.getNumero());
		if (outra == null) {
		  contas[pos++] = c;
		} else {
			System.out.println("Conta já cadastrada.");
		}
	}

	public Conta pesquisar(int num) {
		for (int i = 0; i < pos; i++) {
			if (contas[i].getNumero() == num) {
				return contas[i];
			}
		}
		return null;
	}
}
