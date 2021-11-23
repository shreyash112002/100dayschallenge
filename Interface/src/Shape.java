interface  Shape
{
    double area();
}
class Circle implements Shape
{
    private double rad;
    public Circle(double r)
    {
        rad=r;
    }
    public double area()
    {
        return(Math.PI*rad*rad);
    }
}
class Rectangle implements Shape
{
    private double l,b;
    public Rectangle(double l,double b)
    {
        this.l=l;
        this.b=b;
    }
    public double area()
    {
        return l*b;
    }
}
class UseShape
{
    public static void main(String[] args) {
        Shape s= new Circle(33.6);
        System.out.println("Area of Circle is "+s.area());
         s= new Rectangle(20,4);
        System.out.println("Area of Rectangle is "+s.area());
    }
}