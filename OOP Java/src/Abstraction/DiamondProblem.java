package Abstraction;

interface Camera {
    default void turnOn() {
        System.out.println("Camera lens opening.");
    }
}

interface Phone {
    default void turnOn() {
        System.out.println("Phone screen lighting up.");
    }
}

class Smartphone implements Camera, Phone {
    // Conflict resolution is mandatory here
    @Override
    public void turnOn() {
        System.out.println("Smartphone powering up.");
        Camera.super.turnOn(); 
    }
}


public class DiamondProblem {
    public static void main(String[] args) {
        Smartphone sphone = new Smartphone();
        sphone.turnOn();
    }
}
