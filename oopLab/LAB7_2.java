import myBuilding.Maximum;

public class LAB7_2 {
    public static void main(String[] args) {
        Maximum maxObj = new Maximum();

        System.out.println("Max of 10, 20, 30: " + maxObj.max(10, 20, 30));
        System.out.println("Max of 10.5, 20.5, 30.5: " + maxObj.max(10.5f, 20.5f, 30.5f));

        int[] array = {1, 2, 3, 4, 5};
        System.out.println("Max of array {1, 2, 3, 4, 5}: " + maxObj.max(array));

        int[][] array2D = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        System.out.println("Max of 2D array: " + maxObj.max(array2D));
    }
}
// Completed