public class Methods {
    // New Method
    static int myMethod(int x, int y) {
        int z;
        if (x > y) {
            z = x - y;
        } else {
            z = y - x;
        }
        return z;
    }

    public static void main(String args[]) {

        int a = 44;
        int b = 7;
        int c = myMethod(a, b);
        // if (a > b) {
        // System.out.println(a - b);
        // } else {
        // System.out.println(b - a);
        // }

        int a1 = 59;
        int b1 = 71;
        int c1 = myMethod(a1, b1);
        // if (a1 > b1) {
        // System.out.println(a1 - b1);
        // } else {
        // System.out.println(b1 - a1);
        // }
        System.out.println(c);
        System.out.println(c1);
    }
}
