// This class only has the get and set function for x
class Parent {
    int x;

    public void setX(int x) {
        this.x = x;
    }

    public int getX() {
        return x;
    }

    void display() {
        System.out.println("Parent class display method");
    }
}

// This class has the get and set function for both x and y
class child extends Parent {
    int y;

    public void setY(int y) {
        this.y = y;
    }

    public int getY() {
        return y;
    }
    void display() {
        System.out.println("Child class display method");
    }
}

public class inheritanceBasics {
    public static void main(String args[]) {
        Parent obj1 = new Parent();
        child obj2  = new child();

        obj1.setX(10);
        obj1.getX();
        obj1.display();

        obj2.setX(990);
        obj2.getX();
        obj2.setY(1090);
        obj2.getY();
        obj2.display();
    }
}
