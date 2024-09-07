interface A {
    // Nested interface declaration
    public interface NestedIf {
        boolean isNotNegative(int x);
    }

    // A regular method in the outer interface
    void doSomething();
}

class B implements A.NestedIf {
    // Implementing the NestedIf interface method
    public boolean isNotNegative(int x) {
        return x >= 0; // Return true if x is non-negative
    }

    // Implementing the method from the outer interface A
    public void doSomething() {
        System.out.println("Doing something in class B.");
    }
}

public class C1 {
    public static void main(String args[]) {
        A.NestedIf nif = new B();  // Instantiate B using the nested interface type

        if (nif.isNotNegative(10)) {
            System.out.println("10 is not negative");
        }
        if (!nif.isNotNegative(-12)) {
            System.out.println("This won't be displayed");
        }
    }
}
