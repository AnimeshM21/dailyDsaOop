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
    C(){
        System.out.println("Mishra");
    }
    void m1() {
        System.out.println("This is class C's method 1");
    }
    void m2(){
        System.out.println("Animesh");
    }
}

public class dynamicMethodDispatch {
    public static void main(String args[]) {
        A objA = new C();
        // B objB = new B();
        C objC = new C();

        // objA.m2();

        // objB.m1();
        objC.m1();
    }
}