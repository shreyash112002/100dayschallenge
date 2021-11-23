 interface Sports
{
  double score =6.0;
      void getScore();
}
class Student
{
protected int rno;
 public void setroll(int r)
 {
     rno=r;
 }
 public void grtRoll()
 {
     System.out.println("Roll no is "+rno);
 }
}
class Test extends Student
{
    protected double m1,m2;
    public void setMarks(int x,int y)
    {
        m1=x;
        m2=y;
    }
}