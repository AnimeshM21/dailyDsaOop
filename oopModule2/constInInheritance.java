class base{
    base(){
        System.out.println("I am a Base constructor");
    }

    base(int a){
        System.out.println("I am an overloaded constructor: "+ a);
    }
        int x;

        int getX(){
            return x;
        }
        void setX(int x){
            this.x = x;
        }
    
}

class derived extends base {
    derived(){
        
        System.out.println("I am a derived constructor");
    }

    derived(int c,int v){
        super(0);
        System.out.println("This is a derived overloaded constructor" + c + " " + v);
    }
    int y;

    int getY(){
        return y;
    }
    void setY(int y){
        this.y = y;
    }
}



public class constInInheritance {
    public static void main(String args[]){

        base obj = new base();
        derived obj2  = new derived(4,5);
        
}
}
