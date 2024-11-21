import myBuilding.Building;
import myBuilding.House;
import myBuilding.School;

public class LAB7_1 {
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