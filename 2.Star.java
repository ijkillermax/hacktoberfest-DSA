import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int N;
        Scanner in = new Scanner(System.in);
        N = in.nextInt();
        int n1 = N%2;
        if(N>=1&&N<=100){
            if((n1!=0)){
                System.out.println("weirdo");
            }
            else if((n1==0) &&(N>=2&&N<=5)){
                System.out.println("not weird");
            }
            else if((n1==0) &&(N>=6&&N<=20)){
                System.out.println("weird");
            }
            else if (N>20){
                System.out.println(" not weirdo");
            }
        }
        else{
            System.out.println("Invalid range");
        }

    }

}
