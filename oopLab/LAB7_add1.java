import myBuilding.Phone;
import myBuilding.SmartPhone;
import myBuilding.BasicPhone;

public class LAB7_add1 {
    public static void main(String args[]) {
        BasicPhone bPhone = new BasicPhone(50, "APPLE");
        SmartPhone sPhone = new SmartPhone(90, "Samsung");

        bPhone.audioCall("9999");
        bPhone.videoCall("9989");
        System.out.println("\n");
        sPhone.audioCall("88888");
        sPhone.videoCall("33333");
    }
}
// Completed