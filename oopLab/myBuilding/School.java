package myBuilding;

public class School extends Building{
    int nClass;
    String grade;

    public void setNClass(int n) {
        this.nClass = n;
    }

    public int getNClass() {
        return nClass;
    }

    public void setGrade(String m) {
        this.grade = m;
    }

    public String getGrade() {
        return grade;
    }
}


