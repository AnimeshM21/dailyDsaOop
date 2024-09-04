class Box{
    double width;
    double height;
    double depth;

}


public class boxDemo {
    public static void main(String args[]){
        Box newBox1 = new Box();
        Box newBox2 = new Box();
        double volume1;
        double sum;
        newBox1.width = 10;
        newBox1.height = 200;
        newBox1.depth = 15;
        newBox2.width = 10;
        newBox2.height = 20;
        newBox2.depth = 15;
        volume1 = newBox1.width * newBox1.height * newBox1.depth;
        sum = newBox2.width + newBox2.height + newBox2.depth;
        System.out.println("Volume of the Box is "+volume1);
        System.out.println("Sum of the Box is "+sum);
    }
    /*Box b1 = new Box();
    Box b2 = b1;
    here b2 is assigned to b1 object, but no separate space is allocated to b2. b2 is a reference to the same memory location as of b1.
 */
    
    
}
