import oopLab.myBuilding.House;
import oopLab.myBuilding.School;

class Building {
    int sqFoot;
    int stories;

    void setFoot(int sq) {
        this.sqFoot = sq;
    }

    int getFoot() {
        return sqFoot;
    }

    void setStories(int floors) {
        this.stories = floors;
    }

    int getStories() {
        return stories;
    }
}

class School extends Building {
    int nClass;
    String grade;

    void setNClass(int n) {
        this.nClass = n;
    }

    int getNClass() {
        return nClass;
    }

    void setGrade(String m) {
        this.grade = m;
    }

    String getGrade() {
        return grade;
    }
}

class House extends Building {
    int nBedroom;
    int nBath;

    void setBed(int bedroom) {
        this.nBedroom = bedroom;
    }

    int getBed() {
        return nBedroom;
    }

    void setBath(int bath) {
        this.nBath = bath;
    }

    int getBath() {
        return nBath;
    }
}

public class LAB6_4 {
    public static void main(String args[]) {

        Building building = new Building();
        School mySchool = new School();
        House myHouse = new House();

        building.setFoot(10);
        building.setStories(8);
        System.out.println("Building Square Footage: " + building.getFoot());
        System.out.println("Building Stories: " + building.getStories());

        mySchool.setFoot(5000);
        mySchool.setStories(3);
        mySchool.setNClass(20);
        mySchool.setGrade("High School");
        System.out.println("School Square Footage: " + mySchool.getFoot());
        System.out.println("School Stories: " + mySchool.getStories());
        System.out.println("Number of Classes: " + mySchool.getNClass());
        System.out.println("Grade Level: " + mySchool.getGrade());

        myHouse.setFoot(2000);
        myHouse.setStories(2);
        myHouse.setBed(4);
        myHouse.setBath(3);
        System.out.println("House Square Footage: " + myHouse.getFoot());
        System.out.println("House Stories: " + myHouse.getStories());
        System.out.println("Number of Bedrooms: " + myHouse.getBed());
        System.out.println("Number of Bathrooms: " + myHouse.getBath());
    }
}
// Completed