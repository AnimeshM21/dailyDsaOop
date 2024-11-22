class NegativeRadiusException extends Exception {
    @Override
    public String toString() {
        return "The radius has to be positive";
    }

    @Override
    public String getMessage() {
        return "Please enter a radius greater than 0!";
    }
}

public class throwThrows {


    static double area(int r) throws NegativeRadiusException {
        if (r < 0) {
            throw new NegativeRadiusException(); 
        } else {
            return Math.PI * r * r;
        }
    }

   static int divide(int a, int b) throws ArithmeticException {
        return a / b;
    }

    public static void main(String[] args) {
 
        try {
            int p = divide(6, 0);
            System.out.println("The result is: " + p);
        } catch (Exception e) {
            System.out.println("The exception is: " + e);
        }

        try {
            double result = area(-5);
            System.out.println("Area is: " + result);
        } catch (NegativeRadiusException e) {
            System.out.println("Custom exception caught: " + e);
        }
        finally{
            System.out.println("This code is always executed");
        }
    }
}