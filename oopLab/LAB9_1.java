// Create a class by extending Thread Class to print a multiplication table of a number
// supplied as parameter. Create another class Tables which will instantiate two objects
// of the above class to print multiplication table of 5 and 7.
class myTable extends Thread {
    int x;

    public myTable(int x) {
        this.x = x;
    }

    @Override
    public void run() {
        System.out.println("Multiplication Table of " + x + ":");
        for (int i = 1; i <= 10; i++) {
            System.out.println(x + " * " + i + " = " + (x * i));
        }
        System.out.println();
    }
}

public class LAB9_1 {
    public static void main(String[] args) {
        myTable t1 = new myTable(5);
        myTable t2 = new myTable(7);

        t1.start();
        // t1.join(); This is used to execute the threads sequentially

        
        t2.start();
        // t2.join(); This is used to execute the threads sequentially

    }
}