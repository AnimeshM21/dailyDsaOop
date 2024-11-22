package myBuilding;
import myBuilding.Phone;

public class SmartPhone extends Phone implements Phone.Callable {
    public SmartPhone(int memory, String bName) {
        super(memory, bName);
    }

    @Override
    public void audioCall(String cellNum) {
        System.out.println("Making an audio call from no: " + cellNum + " from a phone of brand: " + brand + " Smart Phone");
    }

    @Override
    public void videoCall(String cellNum) {
        System.out.println("Making a video call from no: " + cellNum + " from a phone of brand: " + brand + " Smart Phone");
    }
}
