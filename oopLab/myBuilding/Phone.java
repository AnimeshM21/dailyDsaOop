package myBuilding;

public class Phone {
    String brand;
    int memoryCap;

    public Phone(int memory, String bName) {
        this.brand = bName;
        this.memoryCap = memory;
    }

    interface Callable {
        void audioCall(String cellNum);
        void videoCall(String cellNum);
    }
}




