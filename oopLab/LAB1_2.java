// a. Write a method reverse to accept one integer parameter and to return the reversed
// digits of accepted number
// b. Using this method, check whether the inputted number is palindrome or not.
// Completed

class myClass {
    int reverse(int num) {
        int reversed = 0;
        while (num != 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num = num / 10;
        }
        return reversed;
    }
}

public class LAB1_2 {
    public static void main(String args[]) {
        int number = 1221;
        myClass myNum = new myClass();
        if (myNum.reverse(number) == number) {
            System.out.println("This is a palindrome");
        } else {
            System.out.println("This is not a palindrome");
        }

    }
}
