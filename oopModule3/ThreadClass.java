class myThread1 extends Thread {
    @Override
    public void run() {
        int i = 0;
        while (i < 25) {
            System.out.println("My first thread is running");
            i++;
        }
    }
}

class myThread2 extends Thread {
    @Override
    public void run() {
        int i = 0;
        while (i < 25) {
            System.out.println("My second thread is running");
            i++;
        }
    }
}

public class ThreadClass {
    public static void main(String args[]) {
        myThread1 t1 = new myThread1();
        myThread2 t2 = new myThread2();
        t1.start();
        System.out.println();
        t2.start();
    }
}