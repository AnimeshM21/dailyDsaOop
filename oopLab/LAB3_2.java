// Define a class EMPLOYEE having following members: Ename, Eid, Basic, DA,
// Gross_Sal, Net_Sal and following methods:
// i) read(): to read N employee details
// ii) display(): to display employee details
// iii) ompute_net_sal(): to compute net salary
class EMPLOYEE{
    String eName;
    int eID;
    int basic;
    double DA;
    double grossSal;
    double netSal;

    void read(String name,int id,int myBasic){
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
public class LAB3_2 {
    public static void main(String args[]){
        EMPLOYEE emp = new EMPLOYEE();
        
        emp.read("Name",10001,100000 );
        emp.compute();
        emp.display();
    }
}
