class Stack {
    int MAX = 10;
    int top;
    int[] stack = new int[MAX];

    void initStack() {
        top = -1;
    }

    int isEmpty() {
        if (top == -1) {
            System.out.println("The stack is empty");
            return 1;
        }
        return 0;
    }

    int isFull() {
        if (top == MAX - 1) {
            System.out.println("The stack is full");
            return 1;
        }
        return 0;
    }

    void push(int value) {
        if (isFull() == 1) {
            return;
        }
        stack[++top] = value;
        System.out.println(value + " pushed to stack");
    }

    int pop() {
        if (isEmpty() == 1) {
            return -1; // return -1 to indicate stack is empty
        }
        int value = stack[top];
        top--;
        System.out.println(value + " popped from stack");
        return value;
    }

    void display() {
        if (isEmpty() == 1) {
            return;
        }
        System.out.println("Elements in the stack:");
        for (int i = 0; i <= top; i++) {
            System.out.print(stack[i] + " ");
        }
        System.out.println();
    }
}

public class LAB3_4 {
    public static void main(String[] args) {
        Stack stack = new Stack();
        stack.initStack();

        stack.push(10);
        stack.push(20);
        stack.push(30);
        stack.push(40);

        stack.display();

        stack.pop();
        stack.display();
    }
}