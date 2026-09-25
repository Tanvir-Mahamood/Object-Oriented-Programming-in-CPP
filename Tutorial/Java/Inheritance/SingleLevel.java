package Inheritance;

class Person {
    String name;
    int age;

    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
    void welcome() {
        System.out.println("Welcome " + name);
    }
}

class Student extends Person {
    int roll;

    Student(String name, int age, int roll) {
        super(name, age);
        this.roll = roll;
    }

    void displayInfo() {
        System.out.println("Name: " + name + ", Age: " + age + ", Roll: " + roll);
    }
}

public class SingleLevel {
    public static void main(String[] args) {
        Person person = new Person("Alice", 30);
        person.welcome();

        Student student = new Student("Bob", 20, 101);
        student.displayInfo();
        student.welcome();
    }
}

