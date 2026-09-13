package pac2;

class Book {
    String title;
    String author;
    Double price;
    
    Book(String title) {
        this(title, "Unknown");
    }
    Book(String title, String author) {
        this(title, author, 0.0);
    }
    Book(String title, String author, double price) {
        this.title = title;
        this.author = author;
        this.price = price;
    }
    
    void displayInfo() {
        System.out.println("Title: " + title + ", Author: " + author + ", Price: " + price);
    }
}

public class ConstructorChaining {
    public static void main(String[] args) {
        Book b1 = new Book("Java Basics");
        b1.displayInfo();

        Book b2 = new Book("Effective Java", "Joshua Bloch");
        b2.displayInfo();

        Book b3 = new Book("Clean Code", "Robert C. Martin", 45.50);
        b3.displayInfo();
    }
}
