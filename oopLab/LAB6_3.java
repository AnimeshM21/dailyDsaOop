class Person{
    private String name;
    private String dob;

    void setName(String myName){
        this.name = myName;
    }
    void getName(){
        System.out.println("My name is: " + name);
        
    }

    void setDOB(String date){
        this.dob = date;
    }
    void getDOB(){
        System.out.println("My DOB is: " + dob);
       
    }
}

class College extends Person{
    private int GPA;
    private String grad;

    void setGPA(int myGPA){
        this.GPA = myGPA;
    }
    void getGPA(){
        System.out.println("and My GPA is: " + GPA);
    }

    void setGrad(String gradDate){
        this.grad = gradDate;
    }
    void getGrad(){
        System.out.println("and My grad Date is: " + grad);
    }
}

public class LAB6_3 {
    public static void main(String args[]){
        College p1 = new College();
        College p2 = new College();

        p1.setName("Animesh");
        p1.getName();

        p2.setName("AniM");
        p2.getName();

        
    }
}
// Completed