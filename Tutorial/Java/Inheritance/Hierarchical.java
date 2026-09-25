package Inheritance;

// class Person {}
// class Student extends Person {}
class Teacher extends Person {
    String subject;

    Teacher(String name, int age, String subject) {
        super(name, age);
        this.subject = subject;
    }

    void displayInfo() {
        System.out.println("Name: " + name + ", Age: " + age + ", Sunject: " + subject);
    }
}

public class Hierarchical {
    public static void main(String[] args) {
        Student s = new Student("Alice", 20, 101);
        Teacher t = new Teacher("Bob", 35, "Mathematics");
        
        s.displayInfo();
        t.displayInfo();
    }
}
