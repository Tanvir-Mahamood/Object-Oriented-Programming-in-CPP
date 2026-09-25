package Abstraction;

interface Walkable {
    void walk();
}

interface Swimmable {
    void swim();
}

// Concrete class implementing both interfaces
class Duck implements Walkable, Swimmable {
    @Override
    public void walk() {
        System.out.println("The duck is walking.");
    }

    @Override
    public void swim() {
        System.out.println("The duck is swimming.");
    }
}

public class MultipleInheritance {
    public static void main(String[] args) {
        Duck duck = new Duck();
        duck.walk();
        duck.swim();
    }
}

