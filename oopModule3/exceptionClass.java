import java.util.Scanner;
class newException extends Exception{
    @Override
    public String toString(){
        return super.toString() + "I am toString";
    }

    public String getMessage(){
        return super.getMessage() + "I am getMessage";
    }
}
public class exceptionClass {
    public static void main(String args[]){
        int a; 
        Scanner sc  = new Scanner(System.in);
        6
        a = sc.nextInt();
        if(a<101){
            try{
                throw new newException();
            }
            catch(Exception e){
                System.out.println(e.getMessage());
            }
        }
    }
}
