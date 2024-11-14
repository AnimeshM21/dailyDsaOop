// a. Write a method fact to accept one integer parameter and to find the factorial of a
// given number.
// b. Using fact method, compute NCR in the main method.
class myFact {
    int fact(int n) {
        int factorial = 1;
        for (int i = 1; i < n; i++) {
            factorial = factorial * i;
        }
        return factorial;
    }
}

public class LAB1_3 {
    public static void main(String args[]) {
        myFact myFactorial = new myFact();
        System.out.println("The factorial is: " + myFactorial.fact(5));

        int n = 9;
        int r = 5;
        int nMr = (n - r);

        int factN = myFactorial.fact(n);
        int factR = myFactorial.fact(r);
        int factNmR = myFactorial.fact(nMr);

        int nCr = factN / (factR * factNmR);
        System.out.println("9c5 is: " + nCr);
    }
}
