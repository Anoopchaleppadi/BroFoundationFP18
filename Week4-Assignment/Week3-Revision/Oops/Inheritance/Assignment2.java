//Create a class Vehicle with attributes like speed and fuelType. Create subclasses Car and Bike that inherit from Vehicle and add additional attributes.
class Vehicle{
    int speed;
    String fuelType;

    void displayDetails(){
        System.out.println("Vehicle Speed:"+speed);
        System.out.println("Vehicle Fuel Type:"+fuelType);
    }
}
class Car extends Vehicle{
    String model;
    int year;   
    @Override
    void displayDetails(){
        super.displayDetails();
        System.out.println("Car Model:"+model);
        System.out.println("Car Year:"+year);
    }
}
class Bike extends Vehicle{
    String type; 
    @Override
    void displayDetails(){
        super.displayDetails();
        System.out.println("Bike Type:"+type);
    }
}
public class Assignment2 {
    public static void main(String[] args) {
        Car car1 = new Car();
        car1.speed = 120;
        car1.fuelType = "Petrol";
        car1.model = "Toyota";
        car1.year = 2020;
        System.out.println("Car Details:");
        car1.displayDetails();
        System.out.println("--------------");
        Bike bike1 = new Bike();
        bike1.speed = 100;
        bike1.fuelType = "Diesel";
        bike1.type = "Sports";
        System.out.println("Bike Details:");
        bike1.displayDetails();
    }
}