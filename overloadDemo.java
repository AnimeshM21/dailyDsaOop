public class overloadDemo {
    int testing(){
        System.out.println("No parameters!! I'm chilling!!");
    }
    int testing(int a){
        System.out.println("One parameter!!"+a+"I'm working!!");
    }
    int testing(int a, int b){
        System.out.println("Two parameters!!" +a+ " " +b+ "I'm working!!");
    } 
}

class overLoad{
    public static void main(String args[]){
        double res1,res2,res3;
        overloadDemo ob1 = new overloadDemo();
        res1 = ob1.testing();
        res2 =ob1.testing(2);
        res3= ob1.testing(3,4);

    }
}
