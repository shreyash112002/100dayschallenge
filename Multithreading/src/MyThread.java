public class MyThread extends Thread
{
    public void run()
    {
        for(int i=0;i<=20;i++)
        {
            System.out.println("Greetings from child thread");
        }
        System.out.println("End of child thread");
    }
}
class ThreadExtends
{
    public static void main(String[] args) {
        MyThread r= new MyThread();
        Thread t= new Thread(r);
        t.start();
        for(int i=0;i<=50;i++)
        {
            System.out.println("Main class");
        }
        System.out.println("End of main class");
    }
}