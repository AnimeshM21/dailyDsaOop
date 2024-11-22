// Write a method findSum to find the sum of digits of a number.
// Completed
public class LAB1_add2 {
    
    public static int findSum(int number) {
        int sum = 0;
        while (number > 0) {
            sum += number % 10;  // Add the last digit to sum
            number /= 10;        // Remove the last digit
        }
        return sum;
    }

    public static void main(String[] args) {
        int number = 3523;
        int result = findSum(number);
        System.out.println("The sum of digits is: " + result);
    }
}
