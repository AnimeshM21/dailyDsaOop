class Box{
    double width;
    double height;
    double depth;

    Box(double w,double h, double d){
        width = w;
        depth =d;
        height = h;
    }

   

    Box(Box obj)
    {
        width = obj.width;
        height = obj.height;
        depth = obj.depth;
    }
    double volume(){
        return width * height * depth;

    }
}

class BoxDemo1 {
    public static void main(String args[]){
            Box mybox1 = new Box(7,9,8);
            Box cloneBox = new Box(mybox1);

            double vol;
            
            vol = mybox1.volume();  
            System.out.println("Volume of cuboid is " + vol);

            

            vol = cloneBox.volume();
            System.out.println("Volume of clone cuboid is " + vol);
        }
}
