// Generic class to find the largest of three values

import java.io.ObjectInputValidation;

class Largest<T extends Comparable<T>> { // Restrict T to Comparable
    T x;
    T y;
    T z;

    public Largest(T num1, T num2, T num3) {
        this.x = num1;
        this.y = num2;
        this.z = num3;
    }

    public T maximum() {
        T max = x; // Assume x is the largest
        if (y.compareTo(max) > 0) {
            max = y;
        }
        if (z.compareTo(max) > 0) {
            max = z;
        }
        return max;
    }
}

public class LAB10_add2 {
    public static void main(String[] args) {
        // Example with Integers
        Largest<Object> obj1 = new Largest<>(5, 9, 3);
        System.out.println("The largest number is: " + obj1.maximum());

        // Example with Strings
        Largest<Object> obj2 = new Largest<>("Hello", "name", "welcome");
        System.out.println("The largest string is: " + obj2.maximum());
    }
}