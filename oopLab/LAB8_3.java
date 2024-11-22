class seatFilledException extends Exception {
    public seatFilledException(String message) {
        super(message);
    }
}

class STUDENT {
    String firstName;
    String lastName;
    String yearOfJoining;
    int regNo;

    public STUDENT(String fName, String lName, String year, int reg) {
        this.firstName = fName;
        this.lastName = lName;
        this.yearOfJoining = year;
        this.regNo = reg;
    }
}

public class LAB8_3 {
    public static void main(String args[]){
        STUDENT std = new STUDENT("Cristiano", "Ronaldo", "1990",90);
        try{
            if(std.regNo > Integer.parseInt(std.yearOfJoining.substring(2,4) + "25")){
            
                throw new seatFilledException("This seat is full");
            }
            }catch (seatFilledException e){
                System.out.println("Exception caught: " + e.getMessage());
            } finally{
                System.out.println("his code is running");
            }
    

    }
}
