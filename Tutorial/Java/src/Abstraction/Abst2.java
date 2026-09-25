package Abstraction;

// Abstract class with constructor and variables

abstract class Shape {
    String color;

    Shape(String color) {
        this.color = color;
        System.out.println("Shape constructor called.");
    }

    abstract double area();

    void displayColor() {
        System.out.println("Color: " + color);
    }
}

class Circle extends Shape {
    double radius;

    Circle(String color, double radius) {
        super(color);
        this.radius = radius;
    }

    @Override
    double area() {
        return Math.PI * radius * radius;
    }
}

public class Abst2 {
    public static void main(String[] args) {
        Circle c = new Circle("Red", 5);
        c.displayColor();
        System.out.println("Area: " + c.area());
    }
}