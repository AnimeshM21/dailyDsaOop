import java.lang.reflect.Array;

class throwDemo{
public static void main(String args[]){
try {
    Rethrow.genExeception();

}
catch (ArrayIndexOutOfBoundsException exc){ 
    System.out.println("Fatal error - program terminated.");
    
}
}}