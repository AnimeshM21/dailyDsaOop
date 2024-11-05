class standard {
    public int a;

    public int returnone() {
        return 1;
    }

    void method2() {
        System.out.println("I am a method 2 of standard class");
    }
}

class orignal extends standard {
    @Override
    void method2() {
        System.out.println("I am a method 2 of orignal class");
    }

    void method3() {
        System.out.println("I am a method 3 of orignal class");
    }
}

public class methodOverriding {
    public static void main(String args[]) {
        standard std = new standard();
        std.returnone();
        std.method2();

        orignal ori = new orignal();
        ori.method2();
        ori.method3();

    }
}
