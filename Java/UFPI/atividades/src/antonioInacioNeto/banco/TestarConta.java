package antonioInacioNeto.banco;

import static org.junit.jupiter.api.Assertions.*;
import org.junit.jupiter.api.Test;

class TestarConta {

    @Test
    void testarConta() {
        Pessoa p1 = new Pessoa(123, "123");
        Conta c1 = new Conta(1, p1);
        
        //teste de setDono da classe conta
        c1.setDono(p1);
        assertEquals(p1, c1.getDono());

        //teste de credito da classe conta
        c1.credito(50);
        assertEquals(50, c1.getSaldo(), 0.001);

        //teste de debito da classe conta
        c1.debito(25, "123");
        assertEquals(25, c1.getSaldo(), 0.001);

        //teste de getExtrato da classe conta
        c1.getExtrato();
        assertEquals("Credito: " + 50.0 + ". Saldo: " + 50.0 + "\nDebito: " + 25.0 + ". Saldo: " + 25.0 + "\n", c1.getExtrato());

        //teste de getNumero da classe conta
        c1.getNumero();
        assertEquals(1, c1.getNumero());
    }
}
