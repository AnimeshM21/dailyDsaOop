
class NonIntResultException extends Exception {
    int n;
    int d;

    NonIntResultException(int i, int j) {
        n = i;
        d = j;
    }

    public String toString() {
        return "Result of " + n + " / " + d + " is non-integer.";
    }
}

class CustomExceptDemo {
    public static void main(String args[]) {
        // Here, numer contains some odd values.
        int numer[] = {4, 8, 18, 32, 64, 127, 256, 512};
        int denom[] = {2, 0, 4, 6, 0, 8};

        for (int i = 0; i < numer.length; i++) {
            try {
                if ((numer[i] % 2) != 0) {
                    throw new NonIntResultException(numer[i], denom[i]);
                }
                System.out.println(numer[i] + " / " + denom[i] + " is " + numer[i] / denom[i]);
            } catch (ArithmeticException exc) {
                // Catch the exception for division by zero
                System.out.println("Can't divide by Zero!");
            } catch (ArrayIndexOutOfBoundsException exc) {
                // Catch the exception for array index out of bounds
                System.out.println("No matching element found.");
            } catch (NonIntResultException exc) {
                // Catch the custom non-integer result exception
                System.out.println(exc);
            }
        }
    }
}
