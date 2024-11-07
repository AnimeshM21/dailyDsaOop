import java.util.Scanner;

class Stack {
    int top;
    int max;
    int[] stack;

    // Constructor to initialize the stack with a given size
    Stack(int maxSize) {
        top = -1;
        max = maxSize;
        stack = new int[max];
    }

    void push(int value) {
        if (top == max - 1) {
            System.out.println("Stack is FULL");
        } else {
            stack[++top] = value;
        }
    }

    int pop() {
        if (top == -1) {
            System.out.println("Stack is EMPTY");
            return 0;
        } else {
            return stack[top--];
        }
    }
}

public class stackInJava {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the max size of the stack: ");
        int max = sc.nextInt();

        Stack stck = new Stack(max);

        for (int i = 0; i < max; i++) {
            stck.push(i);
        }

        for (int i = 0; i < 5; i++) {
            int poppedValue = stck.pop();
            System.out.println("Popped: " + poppedValue);

        }
    }
}