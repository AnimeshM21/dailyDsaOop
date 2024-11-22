package myBuilding;
import myBuilding.Phone;

public class BasicPhone extends Phone implements Phone.Callable {
    public BasicPhone(int memory, String bName) {
        super(memory, bName);
    }

    @Override
    public void audioCall(String cellNum) {
        System.out.println("Making an audio call from no: " + cellNum + " from a phone of brand: " + brand);
    }

    @Override
    public void videoCall(String cellNum) {
        System.out.println("Can't make a video call on a Basic Phone");
    }
}
