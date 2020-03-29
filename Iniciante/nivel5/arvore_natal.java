import java.util.Scanner;

public class Main {
    Scanner input = new Scanner(System.in);
    public void ler() {
        int n = 0;
        n = input.nextInt();
        int[][] medidas = new int[n][3];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 3; j++)
               medidas[i][j] = input.nextInt();

        }

        for(int i = 0; i < n; i++)
            System.out.println(sim_ou_nao(medidas[i], n));
    }
    String sim_ou_nao(int[] medidas, int n) {
       	 if((medidas[0] >= 200 && medidas[0] <= 300) && medidas[1] >= 50 && medidas[2] >= 150) {
            	return "Sim";
        }
        return "Nao";

    }

    public static void main(String[] args) {
	Main main = new Main();
	main.ler();
    }
}

