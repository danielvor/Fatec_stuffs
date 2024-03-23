class Movie{
	String titulo;
	String genero;
	int duracao;

	void tocar(){
		System.out.println("Exibindo o filme");
	}
}

public class MovieTestDrive{
	public static void main(String args[]){
		movie one = new Movie();	
		one.titulo = "Privacidade hackeada";
		one.genero = "Documentario";
		one.duracao = 120;

		movie two = new Movie();	
		two.titulo = "O jogo da imitação";
		two.genero = "Ação";
		two.duracao = 120;

		one.tocar();
		System.out.println("Titulo do filme: " + one.titulo);
		System.out.println("Titulo do filme: " + one.titulo);
		System.out.println("Titulo do filme: " + one.titulo);

		System.out.println("Titulo do filme: " + one.titulo);
		System.out.println("Titulo do filme: " + one.titulo);
		System.out.println("Titulo do filme: " + one.titulo);
	};
}