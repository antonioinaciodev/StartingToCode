package antonioInacioNeto.estoque;

import static org.junit.Assert.*;

import java.util.ArrayList;
import java.util.Date;

import org.junit.Test;

public class TestesEstoqueResumido {
	
	@Test
	public void produtosAbaixoDoEstoqueMinimo() {
		Estoque estoque = new Estoque();
		Fornecedor forn1 = new Fornecedor(48, "Nestle");
		Fornecedor forn2 = new Fornecedor(19, "Ambev");
		Produto prod1 = new Produto(12, "Sorvete", 5, 1);
		Produto prod2 = new Produto(15, "Cerveja", 5, 1);
		Produto prod3 = new Produto(18, "Cerveja Pilsen", 5, 1);

		estoque.incluir(prod1);
		estoque.incluir(prod2);
		estoque.incluir(prod3);
		estoque.comprar(12, 3, 5);
		estoque.comprar(15, 1, 10);
		estoque.comprar(18, 5, 8);
		ArrayList<Produto> produtosAbaixoDoMinimo = estoque.estoqueAbaixoDoMinimo();
		assertEquals(2, produtosAbaixoDoMinimo.size() );
	}
	
	@Test
	public void compraItens() {
		Estoque estoque = new Estoque();
		Fornecedor forn1 = new Fornecedor(48, "Nestle");
		Produto prod1 = new Produto(12, "Sorvete", 5, 0.5);
		estoque.incluir(prod1);
		estoque.comprar(12, 10, 4);
		estoque.comprar(12, 20, 7);
		assertEquals(6, estoque.precoDeCompra(12), 0.0001);
		assertEquals(9, estoque.precoDeVenda(12), 0.0001);
		assertEquals(30, estoque.quantidade(12));
	}
	
	@Test
	public void compraItensProdutoNaoIncluido() {
		Estoque estoque = new Estoque();
		estoque.comprar(12, 10, 4);
		assertEquals(-1, estoque.quantidade(12));
	}
	
	@Test
	public void compraQuantidadeNegativaDeItens() {
		Estoque estoque = new Estoque();
		Fornecedor forn1 = new Fornecedor(48, "Nestle");
		Produto prod1 = new Produto(12, "Sorvete", 5, 1);
		estoque.incluir(prod1);
		estoque.comprar(12, -10, 4);
		assertEquals(0, estoque.quantidade(12));
	}

	
	@Test
	public void vendeQuantidadeNegativaDeItens() {
		Estoque estoque = new Estoque();
		Fornecedor forn1 = new Fornecedor(48, "Nestle");
		Produto prod1 = new Produto(12, "Sorvete", 5, 1);
		estoque.incluir(prod1);
		estoque.comprar(12, 10, 4);
		estoque.vender(12, -5);
		assertEquals(10, estoque.quantidade(12));	
	}

	
	@Test
	public void quantidadeProdutoNaoIncluido() {
		Estoque estoque = new Estoque();
		int retorno = estoque.quantidade(0);
		assertEquals(-1, retorno);
	}
	
	@Test
	public void verificaFornecedorProduto() {
		Estoque estoque = new Estoque();
		Fornecedor forn1 = new Fornecedor(48, "Nestle");
		Fornecedor forn2 = new Fornecedor(49, "Kibon");
		Fornecedor forn3 = new Fornecedor(50, "Quick");
		Produto prod1 = new Produto(12, "Sorvete", 5, 1);
		estoque.incluir(prod1);
		estoque.adicionarFornecedor(12, forn1);
		estoque.adicionarFornecedor(12, forn2);
		estoque.adicionarFornecedor(12, forn3);
		ArrayList<Fornecedor> forns = estoque.fornecedores(12);
		assertEquals(3, forns.size());

	}
}