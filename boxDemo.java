class Box{
    double width;
    double height;
    double depth;

}


public class boxDemo {
    public static void main(String args[]){
        Box newBox = new Box();
        double volume;
        newBox.width = 10;
        newBox.height = 200;
        newBox.depth = 15;
        volume = newBox.width * newBox.height * newBox.depth;
        System.out.println("Volume of the Box is "+volume);
    }

    
    
}
