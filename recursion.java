class Factorial{
    long fact(long n){
        long result;
        if(n==1){
            return 1;
        }
        result = fact(n-1)*n;
        return result;
    }
}

class recursion{
    public static void main(String args[]){
        Factorial f = new Factorial();
        System.out.println("Factorial of 3 is "+f.fact(3));
        System.out.println("Factorial of 4 is "+f.fact(4));
        System.out.println("Factorial of 121 is "+f.fact(121));
    }
}