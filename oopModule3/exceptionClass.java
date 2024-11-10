import java.util.Scanner;

class newException extends Exception {
    @Override
    public String toString() {
        return "I am toString";
    }

    public String getMessage() {
        return "I am getMessage";
    }
}

class maxAge extends Exception {
    @Override
    public String toString() {
        return "This is beyond the max age";
    }

    public String getMessage() {
        return "Enter the correct value for age";
    }
}

public class exceptionClass {
    public static void main(String args[]) {
        int a;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        if (a < 101) {
            try {
                throw new maxAge();
            } catch (Exception e) {
                System.out.println(e.getMessage());
                System.out.println(e.toString());
                // e.printStackTrace();
            }
            finally{
                System.out.println("This code is always executed");
            }
        }
    }
}
