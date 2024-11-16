class STUDENT {
    int rollNo;
    int marks;
    public void putNum(int roll) {
        this.rollNo = roll;
    }

    public int getNum() {
        return rollNo;
    }

    public void putMarks(int mark) {
        this.marks = mark;
    }

    public int getMarks() {
        return marks;
    }
}

interface Sports {
    String getGrade();

    void putGrade(String grade);
}

class Result extends STUDENT implements Sports {
    
    String myGrade;
    public void putGrade(String grade) {
        this.myGrade = grade;
    }

    public String getGrade() {
        return myGrade;
    }
}

public class LAB7_4 {
    public static void main(String args[]) {
        Result myStudent = new Result();

        myStudent.putNum(1);
        System.out.println("The student's Roll No. is: " + myStudent.getNum());
        
        myStudent.putMarks(89);
        System.out.println("The student's Marks are: " + myStudent.getMarks());

        myStudent.putGrade("A+");
        System.out.println("The student's grade in Sports is: " + myStudent.getGrade());
    }
}
