package Abstraction;

interface Vehicle {
    int MAX_SPEED = 120;
    void start();
    default void stop() { // can be overriden later
        System.out.println("Vehicle stopped.");
    }

    static void info() {
        System.out.println("This is a vehicle interface.");
    }
}

class Car implements Vehicle {
    @Override
    public void start() {
        System.out.println("Car started.");
    }
}

class Aeroplane implements Vehicle {
    @Override
    public void start() {
        System.out.println("Started flying.");
    }
    
    @Override
    public void stop() {
        System.out.println("Landed.");
    }
}

public class Intfs2 {
    public static void main(String[] args) {
        Car c = new Car();
        c.start();
        c.stop();

        System.out.println(Vehicle.MAX_SPEED);
        Vehicle.info();
        
        Aeroplane a = new Aeroplane();
        a.start();
        a.stop();
    }
}
