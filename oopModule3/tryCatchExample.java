public class tryCatchExample {
    public static void main(String args[]) {
        int a = 8000;
        int b = 20;
        int c = 0;
        // compiler will try and execute the code in the try block if an exception
        // occurs then it goes to the catch block
        try {
            int d = a / b;
            // int e = a/c;
            System.out.println("The result is: " + d);
            // System.out.println("The result is: " + e);
        } catch (Exception e) {
            System.out.println("Failed to divide because: ");
            System.out.println(e);
        }finally{
            System.out.println("This code is always executed");
        }
    }
}
