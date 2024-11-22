// Write a program that creates an array of integers and then uses a for loop to reverse
// the order of the elements in the array.
// Completed
public class LAB2_1 {
    public static void main(String args[]){
        int[] arr = {1,2,3,4,5,6,7};
        System.out.println("The Orignal array");
        for(int num: arr){
            System.out.print(num + " ");
        }
        System.out.println();
        System.out.println();

        int length = arr.length;
        for(int i=0;i<length/2;i++){
            int temp = arr[i];
            arr[i] = arr[length - i - 1];
            arr[length - i - 1] = temp;
        }
        System.out.println("The Reversed array");
        for(int num: arr){
            System.out.print(num + " ");
        }

    }
}
