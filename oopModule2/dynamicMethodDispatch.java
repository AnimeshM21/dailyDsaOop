class A {
    void m1() {
        System.out.println("This is class A's method 1");
    }
}

class B extends A {
    void m1() {
        System.out.println("This is class B's method 1");
    }
}

class C extends B {
    void m1() {
        System.out.println("This is class C's method 1");
    }
}

public class dynamicMethodDispatch {
    public static void main(String args[]) {
        A objA = new A();
        B objB = new B();
        C objC = new C();

        objA.m1();
        objB.m1();
        objC.m1();
    }
}