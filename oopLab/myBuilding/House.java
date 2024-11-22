package myBuilding;


public class House extends Building{
    int nBedroom;
    int nBath;

    public void setBed(int bedroom) {
        this.nBedroom = bedroom;
    }

    public int getBed() {
        return nBedroom;
    }

    public void setBath(int bath) {
        this.nBath = bath;
    }

    public int getBath() {
        return nBath;
    }
}
