package antonioInacioNeto.banco;

import static org.junit.jupiter.api.Assertions.*;
import org.junit.jupiter.api.Test;

class TestarPessoa {

    @Test
    void testarPessoa() {
        Pessoa p1 = new Pessoa(123, "123");
        Conta c1 = new Conta(1, p1);

        //teste de setSenha da classe pessoa
        p1.setSenha("456");
        assertEquals("456", p1.getSenha());

        //teste de setConta da classe pessoa
        p1.setConta(c1);
        assertEquals(c1, p1.getConta());

        //teste de setCpf da classe pessoa
        p1.setCpf(456);
        assertEquals(456, p1.getCpf());

        //teste de setNome da classe pessoa
        p1.setNome("Pessoa1");
        assertEquals("Pessoa1", p1.getNome());
    }
}
