
public class handlingSpecificExceptions {
    public static void main(String args[]) {
        int i = 99;
        int j = 3;
        int p = 0;
        int[] myarray = new int[3];
        myarray[0] = 1;
        myarray[1] = 2;
        myarray[2] = 3;
        try {
            int k = i / j;
            System.out.println("The result for i/j is : " + k);
            // int q = i / p;
            // System.out.println("The result is: " + q);
            int r = myarray[3];
            System.out.println("The index I want is:" + r);

        } catch (ArithmeticException ae) {
            System.out.println("Failed to divide because some values are not compatible");
            System.out.println(ae);
        } catch (IndexOutOfBoundsException ib) {
            System.out.println("Failed to find the index you entered because some values are not compatible");
            System.out.println(ib);
        } catch (Exception e) {
            System.out.println("Some other exception occured!");
            System.out.println(e);
        }
        System.out.println("");
        System.out.println("End of Program");
    }
}
