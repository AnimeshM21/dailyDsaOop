// Define a Class STUDENT having following Members: sname, marks_array, total, avg and
// provide the following methods:
// i) assign(): to assign initial values to the STUDENT object
// ii)display(): to display the STUDENT object
// iii) compute(): to Compute Total, Average marks

class STUDENT{
    
String sname;
int[] marksArray;
int total;
int average;

void assign(String name, int[] marks){
    sname = name;
    marksArray = marks;
}

void compute(){
    total = 0;
    for(int mark:marksArray){
        total+=mark;
    }
    average = total / marksArray.length;
}

void display(){
    System.out.println("The student's name is: " + sname);
    for(int mark:marksArray){
        System.out.println("The student's marks are: " + mark);
    }
    
    System.out.println("The student's total Marks is: " + total);
    System.out.println("The student's average marks are: " + average);
} 

}

public class LAB3_1 {
    public static void main(String args[]){
        STUDENT std = new STUDENT();
        int[] mymarks = {27,40,33,36,37};
        std.assign("Name",mymarks );
        std.compute();
        std.display();
    }
}
