package Abstraction;

interface Animal2 {
    void sound();
    void eat();
}

class Dog2 implements Animal2 {

    @Override
    public void sound() {
        System.out.println("Dog barks.");
    }

    @Override
    public void eat() {
        System.out.println("Dog eats meat.");
    }
}

class Cat2 implements Animal2 {

    @Override
    public void sound() {
        System.out.println("Cat meows.");
    }

    @Override
    public void eat() {
        System.out.println("Cat eats fish.");
    }
}

public class Intfs {

    public static void main(String[] args) {

        Dog2 d = new Dog2();
        d.sound();
        d.eat();

        Cat2 c = new Cat2();
        c.sound();
        c.eat();
    }
}

/*
Interface has:
- Abstract method: Must be implemented by concrete classes
- default method: Has a method body; can be inherited or overridden
- static method: Belongs to the interface
- private method: Helper method inside the interface
- Variables: Implicitly public static final
*/
