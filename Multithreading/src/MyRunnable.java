public class MyRunnable implements Runnable
{
    public void run()
    {
     for(int i=1;i<=500;i++)
     {
         System.out.println("Greeting from Child thread");
     }
        System.out.println("End of child Thread");
    }
}
 class ThreadImplements
{
    public static void main(String[] args) {
        MyRunnable r= new MyRunnable();
        Thread t= new Thread(r);
        t.start();
        for(int i=1;i<=500;i++)
        {
            System.out.println("Greetings from main thread");
        }
        System.out.println("End of main thread");
    }
}