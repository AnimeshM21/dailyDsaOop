public class MethodOverloading {
    int Addition(int x, int y, int z) {
        return x + y + z;
    }

    int Addition(int x, int y) {
        return x + y;
    }

    String Addition(String x, String y) {
        return x + y;
    }

    public static void main(String args[]) {
        // MethodOverloading Examples

        MethodOverloading obj = new MethodOverloading();

        int num1 = obj.Addition(1, 2, 4);
        int num2 = obj.Addition(1, 2);
        String str = obj.Addition("Hello", " World");

        System.out.println("Method-> Addition of 3 numbers: " + num1);
        System.out.println("Method-> Addition of 2 numbers: " + num2);
        System.out.println("Method-> Addition of 2 strings: " + str);
    }
}
