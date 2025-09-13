//Create a class Shape with a method area(). Create subclasses Circle and Rectangle that override the area() method to calculate the area of their respective shapes.
class Shape{
    void area(){
        System.out.println("Calculating area of shape");
    }
}
class Circle extends Shape{
    double radius;
    Circle(double radius){
        this.radius = radius;
    }
    @Override
    void area(){
        double area = Math.PI * radius * radius;
        System.out.println("Area of Circle: " + area);
    }
}
class Rectangle extends Shape{
    double length, width;
    Rectangle(double length, double width){
        this.length = length;
        this.width = width;
    }
    @Override
    void area(){
        double area = length * width;
        System.out.println("Area of Rectangle: " + area);
    }
}
public class Assignment1 {
    public static void main(String[] args) {
        Shape myCircle = new Circle(5.0);
        Shape myRectangle = new Rectangle(4.0, 6.0);
        myCircle.area();
        myRectangle.area();
    }
}