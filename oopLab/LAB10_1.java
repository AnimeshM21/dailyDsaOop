class myGeneric<T1, T2> {
    private T1 t1;
    private T2 t2;
    int[] arr;

    public myGeneric(int[] myArray, T1 myT1, T2 myT2) {
        this.arr = myArray;
        this.t1 = myT1;
        this.t2 = myT2;
    }

    public void setT1(T1 myT1) {
        this.t1 = myT1;
    }

    public T1 getT1() {
        return t1;
    }

    public void setT2(T2 myT2) {
        this.t2 = myT2;
    }

    public T2 getT2() {
        return t2;
    }

    public void exchange(int[] myArray, Integer val1, Integer val2) {
        int index1 = -1, index2 = -1;

        for (int i = 0; i < myArray.length; i++) {
            if (myArray[i] == val1) {
                index1 = i;
            }
            if (myArray[i] == val2) {
                index2 = i;
            }
        }

        if (index1 == -1 || index2 == -1) {
            System.out.println("One or both values were not found in the array.");
            return;
        }

        int temp = myArray[index1];
        myArray[index1] = myArray[index2];
        myArray[index2] = temp;
    }
}

public class LAB10_1 {
    public static void main(String[] args) {
        int[] myArray = {1, 2, 3, 4, 5};
        myGeneric<Integer, String> obj = new myGeneric<>(myArray, 3, "hello");

        System.out.print("Before exchange: ");
        for (int num : obj.arr) {
            System.out.print(num + " ");
        }
        System.out.println();

        obj.exchange(obj.arr, 3, 5);

        System.out.print("After exchange: ");
        for (int num : obj.arr) {
            System.out.print(num + " ");
        }
    }
}