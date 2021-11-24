 class Star extends Thread
{
    public void run()
    {
        for(int i=1;i<=7;i++)
        {
            System.out.println("*");
        }
        try
        {
            Thread.sleep(120);
        }
        catch(Exception e)
        {

        }
    }
}
class Slash extends Thread
{
    public void run()
    {
        int i;
        for(i=1;i<=7;i++)
        {
            System.out.print("/");
            try
            {
                Thread.sleep(200);
            }
            catch(Exception e)
            {

            }
        }
    }
}
 class MultiStarSlash {
     public static void main(String[] args) {
         Star st = new Star();
         Thread t1 = new Thread(st);

         Slash sl = new Slash();
         Thread t2 = new Thread(sl);

         st.start();
         sl.start();
     }
 }
