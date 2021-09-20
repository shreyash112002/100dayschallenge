
    import java.util.Scanner;
    public class Season {
        public static void main(String[] args) {
            int month;
            Scanner sc=new Scanner(System.in);
            month=sc.nextInt();
            switch(month)
            {
                case 1 : case 2 : case 11 : case 12 :
                System.out.println("Winter season");
                break;
                case 3 : case 4 : case  5 : case 6 :
                System.out.println("Summer season");
                break;
                case 7 : case 8 : case  9 : case 10 :
                System.out.println("Rainy season");
                break;
                default :
                    System.out.println("Invalid input");
                    break;


            }
        }
    }

