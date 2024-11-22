// Create a method max( ) that has three integer parameters x, y, and z, and it returns the
// largest of the three. Do it two ways: once using an if-else-if ladder and once using
// nested if statements.
// Completed
class maximum {
    int max(int x, int y, int z) {
        if (x > y && x > z) {
            return x;
        } else if (y > z) {
            return y;
        } else {
            return z;
        }
    }
}

public class LAB1_1 {
    public static void main(String args[]) {
        maximum result = new maximum();
        int maximumValue = result.max(2, 7, 4);
        System.out.println("The maximum value is: " + maximumValue);
    }
}