class TestSleepMethod1 extends Thread{

    public void run(){
        Thread which;
        for(int i=0;i<=100;i++){
            which=Thread.currentThread();

            if(which.getName().equals("Thread-0")) {
                i=i+2;
                try{
                    Thread.sleep(1000);
                }
                catch(InterruptedException e)
                {
                    System.out.println(e);
                }
                System.out.println(i+"  "+which.getName()+" Priority "+which.getPriority());
            }
            if(which.getName().equals("Thread-1")) {
                i = i + 1;
                try{
                    Thread.sleep(200);
                }
                catch(InterruptedException e)
                {
                    System.out.println(e);
                }
                System.out.println(i+"  "+which.getName()+" Priority "+which.getPriority());
            }


        }
    }
    public static void main(String args[]){
        TestSleepMethod1 t1=new TestSleepMethod1();
        TestSleepMethod1 t2=new TestSleepMethod1();

        t1.start();
        t2.start();
    }
}
