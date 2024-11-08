
public class nestedTryCatch {
    public static void main(String args[]) {

        int[] myarray = new int[3];
        int a = 5;
        int b = 0;

        myarray[0] = 1;
        myarray[1] = 2;
        myarray[2] = 3;
        try {
            System.out.println("This is an example code");
            int c = a / b;
            System.out.println("This is my world" + c);
            try {
                int r = myarray[2];
                System.out.println("The value I wanted is: " + r);
            }

            catch (IndexOutOfBoundsException ib) {
                System.out.println("Exception in Level 2");
                System.out.println("Failed to find the index you entered because some values are not compatible");
                System.out.println(ib);
            }
        } catch (Exception e) {
            System.out.println("Exception in Level 1");
            System.out.println("Some other exception occured!");
            System.out.println(e);
        }

        System.out.println("");
        System.out.println("End of Program");
    }
}
