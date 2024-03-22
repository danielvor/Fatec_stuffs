public class main {
    public static void main(String[] args) {
        System.out.println("Aula sobre herança com Java");
        Pessoa p = new Pessoa();
        p.setNome("Daniel Rodrigues");
        System.out.println("Nome: " + p.getNome());

        PessoaFisica pf = new PessoaFisica();
        pf.setCpf("123.456.789-00");
        System.out.println("CPF: " + pf.getCpf());
    }
}
