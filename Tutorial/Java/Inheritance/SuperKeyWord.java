package Inheritance;

class Person2 {
    String name = "Person\n";

    public Person2() {
        System.out.print("Parent Class Default Constructor\n");
    }
    public Person2(String name) {
        this.name = name;
        System.out.print("Parent Class Parameterized Constructor\n");
    }
    public void display() {
        System.out.print(name);
    }
}

class Employee extends Person2 {
    String name = "Employee\n";

    public Employee() {
        super("Rana"); // Calls Person(String name)
        System.out.print(name);
    }

    @Override
    public void display() {
        super.display(); // Call parent class method
        System.out.print(name); 
        System.out.print("Hi! " + super.name); // Access parent class field using super
    }
}

public class SuperKeyWord {
    public static void main(String[] args) {
        Employee emp = new Employee();
        emp.display();
    }
}
