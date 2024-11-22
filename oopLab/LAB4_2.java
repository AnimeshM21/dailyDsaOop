
class EMPLOYEE{
    String eName;
    int eID;
    int basic;
    double DA;
    double grossSal;
    double netSal;

    public EMPLOYEE(){
        eName = "Name";
        eID = 00000;
        basic = 0000000;
        DA = 00;
        grossSal = 00;
        netSal = 00;
    }
    public EMPLOYEE(String name,int id,int myBasic){
        eName = name;
        eID = id;
        basic = myBasic;
    }

    void compute(){
        DA = basic * 0.52;
        grossSal = basic + DA; 
        netSal = 0.3 * grossSal;
    }

    void display(){
        System.out.println("The Name of the employee is: " + eName);
        System.out.println("The ID of the employee is: " + eID);
        System.out.println("The BASIC SALARY of the employee is: " + basic);
        System.out.println("The DA of the employee is: " + DA);
        System.out.println("The GROSS SALARY of the employee is: " + grossSal);
        System.out.println("The NET SALARY of the employee is: " + netSal);
    }
}

public class LAB4_2 {
    public static void main(String args[]){
        EMPLOYEE emp = new EMPLOYEE();
        emp.display();
        EMPLOYEE emp2 = new EMPLOYEE("Name",10001,100000);
        
        emp.compute();
        emp.display();
    }
}

