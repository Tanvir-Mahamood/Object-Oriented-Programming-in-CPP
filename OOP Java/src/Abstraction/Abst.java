package Abstraction;

// Basic abstract class example

abstract class Animal {
    abstract void Sound();
    void Eat() {
        System.out.print("Animal is eating\n");
    }
}

class Dog extends Animal {
    @Override
    void Sound() {
        System.out.println("Dog barks.");
    }
}

class Cat extends Animal {
    @Override
    void Sound() {
        System.out.println("Cat meows.");
    }
}

public class Abst {
    public static void main(String[] args) {
        Dog d = new Dog();
        d.Sound();
        d.Eat();
        
        Cat c = new Cat();
        c.Sound();
        c.Eat();
        
        Animal a = new Dog();
        a.Sound();
        a.Eat();
    }
}

/*
An abstract class can contain:
- Normal (concrete) methods.
- Abstract methods.
- Constructors.
- Instance variables.
- Static methods.
- Final methods.
*/
