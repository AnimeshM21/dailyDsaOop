package myBuilding;

public class Building {
    int sqFoot;
    int stories;

    public void setFoot(int sq) {
        this.sqFoot = sq;
    }

    public int getFoot() {
        return sqFoot;
    }

    public void setStories(int floors) {
        this.stories = floors;
    }

    public int getStories() {
        return stories;
    }
}
