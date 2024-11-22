public class GenericSwap {
    // Generic method to swap two elements in an array
    public static <T> void exchange(T[] array, int index1, int index2) {
        if (index1 < 0 || index1 >= array.length || index2 < 0 || index2 >= array.length) {
            System.out.println("Invalid indices provided.");
            return;
        }

        T temp = array[index1];
        array[index1] = array[index2];
        array[index2] = temp;
    }

    public static void main(String[] args) {
        // Example 1: Swapping elements in an Integer array
        Integer[] intArray = {1, 2, 3, 4, 5};
        System.out.println("Before swap (Integer):");
        for (Integer num : intArray) {
            System.out.print(num + " ");
        }
        System.out.println();

        exchange(intArray, 1, 3);

        System.out.println("After swap (Integer):");
        for (Integer num : intArray) {
            System.out.print(num + " ");
        }
        System.out.println();

        // Example 2: Swapping elements in a String array
        String[] strArray = {"apple", "banana", "cherry", "date"};
        System.out.println("\nBefore swap (String):");
        for (String str : strArray) {
            System.out.print(str + " ");
        }
        System.out.println();

        exchange(strArray, 0, 2);

        System.out.println("After swap (String):");
        for (String str : strArray) {
            System.out.print(str + " ");
        }
    }
}