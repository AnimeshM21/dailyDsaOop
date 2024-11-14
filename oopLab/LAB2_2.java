// Write a program that creates an integer array of length N, fills the array with the
// sequence of values (from 1 to N) using a for loop, and then loops through the array
// printing out the values. Use a for-each style for loop to print out the values.
import java.util.Scanner;
public class LAB2_2 {
    public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] arr = new int[n];
    
    
    for(int i=1;i<=n;i++){
        arr[i-1] = i;
    }

    for(int num:arr){
        System.out.print(num + " ");
    }
}
}