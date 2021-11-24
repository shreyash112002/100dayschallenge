class EvenNumber extends Thread
{
    public void run()
    {
        for(int i=1;i<100;i+=2)
        {
            System.out.println(i);
        }
    }
}
class OddNumber extends Thread
{
    public void run()
    {
        for(int i=1;i<=100;i+=2)
        {
            System.out.println(i);
        }
    }
}
class MultiThreads
{
    public static void main(String[] args) {
        OddNumber o=new OddNumber();
        Thread t1= new Thread(o);
        EvenNumber e= new EvenNumber();
        Thread t2= new Thread(e);
        t1.start();
        t2.start();

    }
}