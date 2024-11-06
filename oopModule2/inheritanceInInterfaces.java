interface Sample1 {
    void meth1();

    void meth2();
}

interface Sample2 extends Sample1 {
    void meth3();

    void meth4();
}

class MyClass implements Sample2 {
    @Override
    public void meth1() {
        System.out.println("This is Method 1");
    }

    @Override
    public void meth2() {
        System.out.println("This is Method 2");
    }

    @Override
    public void meth3() {
        System.out.println("This is Method 3");
    }

    @Override
    public void meth4() {
        System.out.println("This is Method 4");
    }
}

// Only an interface can extend an interface, while a class can implement it.
public class inheritanceInInterfaces {
    public static void main(String args[]) {
        MyClass mc = new MyClass();

        mc.meth1();
        mc.meth2();
        mc.meth3();
        mc.meth4();
    }
}