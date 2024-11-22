
class myThread extends Thread {
    public myThread(String name){
        super(name);
    } 
    public void run() {
        System.out.println("This is the run method for: " + this.getName());
    }
}
    
        public class threadPriorities {
            public static void main(String args[]) {
                myThread thr = new myThread("1Ronaldo");
                myThread thr2 = new myThread("2Cristiano");
                myThread thr3 = new myThread("3Messi");
                myThread thr4 = new myThread("4Lionel");
                myThread thr5 = new myThread("5Neymar");

                thr.setPriority(9);
                thr2.setPriority(10);
                thr3.setPriority(7);
                thr4.setPriority(8);
                thr5.setPriority(6);
               
                thr.start();
                thr2.start();
                thr3.start();
                thr4.start();
                thr5.start();
                
                
            }

        }

    