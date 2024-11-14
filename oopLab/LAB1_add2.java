Write a method findSum to find the sum of digits of a number.
public class LAB1_add2 {
    
    // Method to find the sum of digits of a number
    public static int findSum(int number) {
        int sum = 0;
        while (number != 0) {
            sum += number % 10;  // Add the last digit to sum
            number /= 10;        // Remove the last digit
        }
        return sum;
    }

    public static void main(String[] args) {
        int number = 1234;  // Example number
        int result = findSum(number);
        System.out.println("The sum of digits is: " + result);
    }
}
