public class LAB10_add1<T> {

    public void printArray(T[] array) {
        for (T element : array) {
            System.out.print(element + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        // Object is the root class of all the objects, it can be used to refer to a variable of any class be it Integer, string or a custom class
        LAB10_add1<Object> obj = new LAB10_add1<>();
        // LAB10_add1<Integer> obj1 = new LAB10_add1<>();
        // LAB10_add1<String> obj2 = new LAB10_add1<>();

        

        Integer[] intArray = {1, 2, 3, 4, 5};
        System.out.print("Integer Array: ");
        obj.printArray(intArray);

        // obj1.printArray(intArray);

        String[] stringArray = {"Apple", "Banana", "Cherry"};
        System.out.print("String Array: ");
        obj.printArray(stringArray);

        // obj2.printArray(stringArray);
    }
}