interface Series {
    int getNext();

    void reset();

    void setStart(int start);
}

class byTwo implements Series {
    private int start;
    private int current;

    @Override
    public void setStart(int start) {
        this.start = start;
        this.current = start;
        
    }

    @Override
    public void reset() {
        this.current = start;
    }

    @Override
    public int getNext() {
        current += 2;
        return current;
    }
}

public class LAB7_3 {
    public static void main(String args[]) {
        byTwo item = new byTwo();

        item.setStart(0);

        System.out.println("New series starting from 0 with +2 update: ");
        for (int i = 0; i < 7; i++) {
            System.out.println(item.getNext());
        }

        item.reset();
        System.out.println("New series starting from 0 with +2 update after reseting: ");
        for (int i = 0; i < 7; i++) {
            System.out.println(item.getNext());
        }

        item.setStart(10);
        System.out.println("New series starting from 0 with +2 update: ");
        for (int i = 0; i < 7; i++) {
            System.out.println(item.getNext());
        }
    }
}
