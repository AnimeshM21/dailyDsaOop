   
interface A{
    public interface NestedIf{
        boolean isNotNegative(int x);
    }
    void doSomething();

}
class B implements A.NestedIf{
    public boolean isNotNegative(int x){
        return x<0?false:true;
    }
}
public class C{
    public static void main(String args[]){
        A.NestedIf nif = new B();
        if(nif.isNotNegative(10))
            System.out.println("10 is not negative");
        if(nif.isNotNegative(-12))
            System.out.println("This won't be displayed");
    }
}


