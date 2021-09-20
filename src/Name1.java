
    import java.util.Scanner;

    class Name1
    {
        public static void main(String[] args)
        {
            String name; //String Object reference is created(stack)
            Scanner sc=new Scanner(System.in);

            System.out.print("Enter your name ");
            name=sc.next();


            System.out.println("Your name is "+name);
        }
    }

