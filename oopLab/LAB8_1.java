class pushException extends Exception {
    public pushException(String message) {
        super(message);
    }
}

class popException extends Exception {
    public popException(String message) {
        super(message);
    }
}

class Stack {
    int[] stackArr;
    int top;

    public Stack(int n) {
       stackArr = new int[n];
       top = -1;
    }

    public void push(int value) throws pushException {
        if (top == stackArr.length - 1) {
            throw new pushException("The stack is full");
        }
        stackArr[++top] = value;
    }

    public int pop() throws popException {
        if (top == -1) {
            throw new popException("The stack is empty");
        }
        return stackArr[top--];
    }

    public void display() throws popException {
        if (top == -1) {
            throw new popException("The stack is empty");
        }
        int temp = top;
        while (temp != -1) {
            System.out.println("Stack Element: " + stackArr[temp]);
            temp--;
        }
    }
}

public class LAB8_1 {
    public static void main(String[] args) {
        Stack stack = new Stack(3);

        try {
            System.out.println("Displaying stack contents:");
            stack.display();
        } catch (popException e) {
            System.out.println("Exception caught: " + e.getMessage());
        }

        try {
            stack.push(10);
            stack.push(20);
            stack.push(30);
            System.out.println("\nDisplaying stack contents after pushing elements:");
            stack.display();
            System.out.println("\nTrying one more push:");
            stack.push(40);

        } catch (pushException | popException e) {
            System.out.println("Exception caught: " + e.getMessage());
        }
    }
}
