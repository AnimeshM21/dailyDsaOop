class myThreadRunnable1 implements Runnable {
    public void run() {
        System.out.println("Implementing a Thread-1 using the Runnable interface");
    }
}

class myThreadRunnable2 implements Runnable {
    public void run() {
        System.out.println("Implementing a Thread-2 using the Runnable interface");
    }
}

public class RunnableInterface {
    public static void main(String args[]) {
        myThreadRunnable1 t1 = new myThreadRunnable1();
        myThreadRunnable2 t2 = new myThreadRunnable2();

        Thread thread1 = new Thread(t1, "Messi");
        Thread thread2 = new Thread(t2, "Lionel");

        thread1.start();
        System.out.println();
        thread2.start();

        System.out.println("The name of the first thread is: " + thread1.getName());
        System.out.println("The name of the second thread is: " + thread2.getName());
    }
}
