// Inheritance:
// Create a class Animal with a method sound(). Create subclasses Dog and Cat that override the sound() method to make specific sounds.

class Animal{
    void sound(){
        System.out.println("Animal makes a sound");
    }
}
class Dog extends Animal{
    @Override
    void sound(){
        System.out.println("Dog barks");
    }
}
class Cat extends Animal{
    @Override
    void sound(){
        System.out.println("Cat meows");
    }
}
public class Assignment1 {
    public static void main(String[] args) {
        Animal myDog = new Dog();
        Animal myCat = new Cat(); 
        myDog.sound(); 
        myCat.sound(); 
    }
}

