import java.util.Scanner;
class STUDENT{
    int totalMarks;
    int average;

    public STUDENT(){
        this.totalMarks = 0;
        this.average = 0;
    }

    void compute(int total){
        this.totalMarks = total;
        average = totalMarks/5;
    }

    void display(){
        System.out.println("The total marks are: " + totalMarks);
        System.out.println("The average marks are: " + average);
    }
}

class scienceStudent extends STUDENT{
    int myTotal;
    int myAverage;
    private int practicalMarks;
    public scienceStudent(){
        Scanner sc = new Scanner(System.in);
        System.out.println("the practical marks are: ");
        this.practicalMarks  = sc.nextInt();
    }
   

    @Override
    void compute(int total){
        this.myTotal = total + practicalMarks;
        this.myAverage = myTotal/6;
    }
    void displayWithPractical(){
        System.out.println("The practical marks are: " + practicalMarks);
        System.out.println("The total marks are: " + myTotal);
        System.out.println("The average marks are: " + myAverage);
    }
}

class artStudent extends STUDENT{
private String electiveSub;

public artStudent(){
        Scanner sc1 = new Scanner(System.in);
        System.out.println("the elective subject is: ");
        this.electiveSub  = sc1.nextLine();
}

void display(){
    System.out.println("The elective subject is: " + electiveSub);
}

}

public class LAB6_1 {
    public static void main(String args[]){
        STUDENT std = new STUDENT();
        std.compute(70);
        std.display();
        scienceStudent std2 = new scienceStudent();

        std2.compute(70);
        std2.displayWithPractical();

        artStudent std3 = new artStudent();
        std3.display();
    }
}
