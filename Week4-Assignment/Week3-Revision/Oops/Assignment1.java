

class Car{
    String color;
    String model;
    int year;

    void displayDetails(){
        System.out.println("Car Model:"+model);
        System.out.println("Car Color:"+color);
        System.out.println("Car Year:"+year);

     
    }

}
public class Assignment1 {
    public static void main(String[] args) {
        Car car1 = new Car();
        car1.color = "Red";
        car1.model = "Toyota";
        car1.year = 2020;

        Car car2 = new Car();
        car2.color = "Blue";
        car2.model = "Honda";
        car2.year = 2019;

        car1.displayDetails();
        System.out.println("--------------");
        car2.displayDetails();
    }
}
