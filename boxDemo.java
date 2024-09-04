class Box{
    double width;
    double height;
    double depth;
    void volume(){
        System.out.println("Volume of the Box is "+width*height*depth);
    }
    void setDim(double w, double h,double d){
        width =w;
        height = h;
        depth = d;

    }

}


public class boxDemo {
    public static void main(String args[]){
        Box newBox1 = new Box();
        Box newBox2 = new Box();
        newBox1.setDim(10, 20, 15);
        newBox2.setDim(3, 6, 9);
        newBox1.volume();
        newBox2.volume();
        
       
        
        

    }
    /*Box b1 = new Box();
    Box b2 = b1;
    here b2 is assigned to b1 object, but no separate space is allocated to b2. b2 is a reference to the same memory location as of b1.
 */
    
 /*Constructors have no return type, not even void. This is because the implicit return type of a class’ constructor is the class type itself. It is the constructor’s job to initialize the internal state of an object so that the code creating an instance will have a fully initialized, usable object immediately.
 */
    
}
