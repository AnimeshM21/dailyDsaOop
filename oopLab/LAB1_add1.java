// a. Write a method isPrime to accept one integer parameter and to check whether that
// parameter is prime or not.
// b. Using this method, generate first N prime numbers in the main method.
public class LAB1_add1 {

    static int isPrime(int num) {
        if (num < 1) {
            return 0;
        }
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                return 0;
            }
        }
        return 1;
    }

    public static void main(String args[]) {
        int[] arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 11 };
        System.out.println("The Prime no. in the array are: ");
        for (int num : arr) {
            if (isPrime(num) == 1) {
                System.out.println(num);
            }
        }
    }
}
