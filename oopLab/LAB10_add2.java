class largest<T extends Comparable<T>>{
T x;
T y;
T z;

public largest(T num1,T num2,T num3){
    this.x = num1;
    this.y = num2;
    this.z = num3;
}

public T maximum(){
    if(x.compareTo(y)>0 && y.compareTo(z)>0){
        return x;
    }else if(y.compareTo(z)>0){
        return y;
    }else{
        return z;
    }
}

}
public class LAB10_add2 {
    public static void main(String args[]){

        largest<Integer> obj1 = new largest<>(5,9,3);
        System.out.println("The laregst number is: " + obj1.maximum());

        largest<String> obj2 = new largest<>("Hello","name","and welcome");
        System.out.println("The laregst is: " + obj2.maximum());
    }
}
