interface Bike {
    int applyBrake(int decrement);
    int speedUp(int increment);
}

class Hero implements Bike {
    int speed = 50;

    @Override
    public int applyBrake(int decrement) {
        speed = speed - decrement;
        return speed;
    }

    @Override
    public int speedUp(int increment) {
        speed = speed + increment;
        return speed;
    }
}

public class Interfaces {
    public static void main(String[] args) {
        Hero heroCycle = new Hero();
        
        
        int newSpeed = heroCycle.speedUp(20);
        System.out.println("Speed after speeding up: " + newSpeed);
        
        
        newSpeed = heroCycle.applyBrake(10);
        System.out.println("Speed after applying brake: " + newSpeed);
    }
}