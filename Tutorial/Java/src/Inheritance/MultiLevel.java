package Inheritance;

// class Person {}
// class Student extends Person {}

class GraduateStudent extends Student {
    String thesisArea;
    GraduateStudent(String name, int age, int roll, String thesisArea) {
        super(name, age, roll);
        this.thesisArea = thesisArea;
    }
    void displayInfo() {
        System.out.println("Name: " + name + ", Age: " + age + ", Roll: " + roll + " Thesis: " + thesisArea);
    }
}

public class MultiLevel {
    public static void main(String[] args) {
        GraduateStudent gs = new GraduateStudent("Charlie", 25, 202, "Deep Learning in AI");
        gs.displayInfo();
    }
}
