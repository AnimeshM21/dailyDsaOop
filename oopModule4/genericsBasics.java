class myGeneric<T1, T2> {
    int value;
    private T1 t1;
    private T2 t2;

    public myGeneric(int val, T1 myT1, T2 myT2) {
        this.value = val;
        this.t1 = myT1;
        this.t2 = myT2;
    }

    public void setValue(int val) {
        this.value = val;
    }

    public int getValue() {
        return value;
    }

    public void setT1(T1 myT1) {
        this.t1 = myT1;
    }

    public T1 getT1() {
        return t1;
    }

    public void setT2(T2 myT2) {
        this.t2 = myT2;
    }

    public T2 getT2() {
        return t2;
    }

}

public class genericsBasics {
    public static void main(String args[]) {
        myGeneric <String,Integer> obj = new myGeneric<>(24,"hello", 77);

        System.out.println("T1: " + obj.getT1());
        System.out.println("T2: " + obj.getT2());
        System.out.println("Value: " + obj.getValue());

    }
}
