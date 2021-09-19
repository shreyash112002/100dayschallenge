import java.util.Scanner;

public class AreaPerimeter {



        public static void main(String[] args) {
            float  l,b,a,p;
            Scanner sc=new Scanner(System.in);
            System.out.println("Enter length");
            l=sc.nextFloat();
            System.out.println("Enter breadth");
            b=sc.nextFloat();
            a=l*b;
            p=2*(l*b);
            System.out.println("Area is"+a+","+"Perimeter is "+p);

        }

    }


