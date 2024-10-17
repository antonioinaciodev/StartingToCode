package antonioInacioNeto.estoque;

import java.util.ArrayList;

public class Produto {
    private int codigo;
    private String descricao;
    private double precoCompra;
    private double precoVenda;
    private double lucro;
    private int quantidade;
    private int estoqueMinimo;
    private ArrayList<Fornecedor> fornecedores;

    public Produto(int cod, String desc, int min, double lucro) {
        this.codigo = cod;
        this.descricao = desc;
        this.estoqueMinimo = min;
        this.lucro = lucro;
        this.quantidade = 0;
        this.precoCompra = 0.0;
        this.precoVenda = 0.0;
        this.fornecedores = new ArrayList<>();
    }

    public void compra(int quant, double val) {
        if (quant <= 0 || val <= 0) {
            throw new IllegalArgumentException("Quantidade e valor de compra devem ser positivos.");
        }

        this.precoCompra = (this.quantidade * this.precoCompra + quant * val) / (this.quantidade + quant);
        this.quantidade += quant;
        this.precoVenda = this.precoCompra * (1 + this.lucro);
    }

    public double vender(int quant) {
        if (quant <= 0) {
            return -1;
        }
        if (quant > this.quantidade) {
            return -1;
        }

        double valorVenda = quant * this.precoVenda;
        this.quantidade -= quant;
        return valorVenda;
    }

    public boolean estoqueAbaixoDoMinimo() {
        return this.quantidade < this.estoqueMinimo;
    }

    public void adicionarFornecedor(Fornecedor fornecedor) {
        if (!this.fornecedores.contains(fornecedor)) {
            this.fornecedores.add(fornecedor);
        }
    }

    public ArrayList<Fornecedor> getFornecedores() {
        return this.fornecedores;
    }

    public double getPrecoDeVenda() {
        return this.precoVenda;
    }

    public double getPrecoDeCompra() {
        return this.precoCompra;
    }

    public int getQuantidade() {
        return this.quantidade;
    }

    public int getCodigo() {
        return this.codigo;
    }
}
