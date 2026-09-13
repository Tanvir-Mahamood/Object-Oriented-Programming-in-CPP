package pac1;

public class First {
    public static void main(String[] args) {
        System.out.print("From Class First\n");
    }
    
    public static void displayPublic() {
        System.out.print("Public method: accessible from anywhere (any class, any package)\n");
    }
    
    static void displayDefault() {
        System.out.print("Default method: accessible only within the package\n");
    }
    
    protected static void displayProtected() {
        System.out.print("Protected method: accessible in the same package or in subclasses across packages\n");
    }
    
    private static void displayPrivate() {
        System.out.print("Private method: accessible only within the same class\n");
    }
}
