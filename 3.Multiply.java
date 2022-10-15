import java.util.Scanner;
/*
Developed By Ishan Jogalekar
Calculate power to numbers without math package
 */
public class no_multiply {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter base value:");
        int a = sc.nextInt();
        System.out.println("Enter power value:");
        int b = sc.nextInt();
        int temp = b;
        int c=1;
        int d =2;
        for (; temp != 0; --temp) {
            c *=d;
        }
        int e = a*c;
        System.out.println(a+"^"+b+"= "+e);
    }
}
