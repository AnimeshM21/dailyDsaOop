class myThread extends Thread {
    // The name parameter here is a name for the Thread that can be used later
    public myThread(String name) {
        super(name);
    }

    public void run() {

        System.out.println("This is the run method!!");

    }
}

public class threadConstructors {
    public static void main(String args[]) {
        myThread thr = new myThread("Ronaldo");
        myThread thr2 = new myThread("Cristiano");

        thr.start();
        thr2.start();

        System.out.println("The id of the thr Thread is: " + thr.getId());
        System.out.println("The name of the thr Thread is: " + thr.getName());

        System.out.println("The id of the thr2 Thread is :" + thr2.getId());
        System.out.println("The name of the thr2 Thread is: " + thr2.getName());
    }

}
