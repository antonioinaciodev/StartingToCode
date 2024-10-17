package antonioInacioNeto.estoque;

import java.util.ArrayList;

public class Estoque {
    private ArrayList<Produto> produtos;

    public Estoque() {
        this.produtos = new ArrayList<>();
    }

    public void incluir(Produto p) {
        for (Produto produto : produtos) {
            if (produto.getCodigo() == p.getCodigo()) {
                return;
            }
        }
        produtos.add(p);
    }

    public void comprar(int cod, int quant, double preco) {
        Produto produto = buscarProduto(cod);
        if (produto != null) {
            try {
                produto.compra(quant, preco);
            } catch (IllegalArgumentException e) {
                System.out.println("Erro: " + e.getMessage());
            }
        }
    }

    public double vender(int cod, int quant) {
        Produto produto = buscarProduto(cod);
        if (produto != null) {
            return produto.vender(quant);
        }
        return -1;
    }

    public int quantidade(int cod) {
        Produto produto = buscarProduto(cod);
        return (produto != null) ? produto.getQuantidade() : -1;
    }

    public ArrayList<Fornecedor> fornecedores(int cod) {
        Produto produto = buscarProduto(cod);
        return (produto != null) ? produto.getFornecedores() : null;
    }

    public ArrayList<Produto> estoqueAbaixoDoMinimo() {
        ArrayList<Produto> abaixoDoMinimo = new ArrayList<>();
        for (Produto produto : produtos) {
            if (produto.estoqueAbaixoDoMinimo()) {
                abaixoDoMinimo.add(produto);
            }
        }
        return abaixoDoMinimo;
    }

    public void adicionarFornecedor(int cod, Fornecedor f) {
        Produto produto = buscarProduto(cod);
        if (produto != null) {
            produto.adicionarFornecedor(f);
        }
    }

    public double precoDeVenda(int cod) {
        Produto produto = buscarProduto(cod);
        return (produto != null) ? produto.getPrecoDeVenda() : 0.0;
    }

    public double precoDeCompra(int cod) {
        Produto produto = buscarProduto(cod);
        return (produto != null) ? produto.getPrecoDeCompra() : 0.0;
    }

    private Produto buscarProduto(int cod) {
        for (Produto produto : produtos) {
            if (produto.getCodigo() == cod) {
                return produto;
            }
        }
        return null;
    }
}