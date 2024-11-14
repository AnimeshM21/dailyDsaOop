class STUDENT {

    String sname;
    int[] marksArray;
    int total;
    int average;

    public STUDENT() {
        sname = "Unknown";
        marksArray = new int[]{0, 0, 0, 0, 0};
        total = 0;
        average = 0;
    }

    public STUDENT(String name, int[] marks) {
        sname = name;
        marksArray = marks;
        compute();
    }

    void compute() {
        total = 0;
        for (int mark : marksArray) {
            total += mark;
        }
        average = total / marksArray.length;
    }

    void display() {
        System.out.println("Student Name: " + sname);
        System.out.println("Marks:");
        for (int mark : marksArray) {
            System.out.print(mark + " ");
        }
        System.out.println();
        System.out.println("Total Marks: " + total);
        System.out.println("Average Marks: " + average);
    }
}

public class LAB4_1 {
    public static void main(String[] args) {
        STUDENT student1 = new STUDENT();
        student1.display();

        int[] marks = {90, 85, 88, 92, 75};
        STUDENT student2 = new STUDENT("name", marks);
        student2.display();
    }
}