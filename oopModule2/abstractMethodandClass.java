abstract class standard {
    public int a;

    public void standard() {
        System.out.println("I am a contructor of Class Standard");
    }

    abstract void greet();
    abstract void greet2();
}

class orignal extends standard {
    @Override
    void greet() {
        System.out.println("Good Morning!!");
    }

    void greet2() {
        System.out.println("Good afternoon!!");
    }
}

public class abstractMethodandClass{
    public static void main(String args[]){
        orignal ori = new orignal();
        
        ori.greet();
        ori.greet2();

    }
}