class Box{
    double width;
    double height;
    double depth;
    
    Box(double w,double h,double d){
        System.out.println("Constructor usage in JAVA");
        width = w;
        depth =d;
        height = h;
    }
    double volume(){
       return width*height*depth;

    }
}


public class constructor {
    public static void main(String args[]){
        double vol1,vol2;
        Box newBox1 = new Box(2,3,45);
        Box newBox2 = new Box(19,18,33);

        vol1 = newBox1.volume();
        System.out.println("Volume of the Box is "+vol1);
        vol2 = newBox2.volume();
        System.out.println("Volume of the Box is "+vol2);
    
        
        
       
        
        

    }

    
 /*Constructors have no return type, not even void. This is because the implicit return type of a class’ constructor is the class type itself. It is the constructor’s job to initialize the internal state of an object so that the code creating an instance will have a fully initialized, usable object immediately.
 */
    
}
