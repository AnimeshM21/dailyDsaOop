// Add the following string processing methods to the class STUDENT:
// a) extractInitials(): A method that extracts the initials from the student's name. For
// example, if the student's name is "John Doe", this method would return "JD".
// b) removeWhitespace(): A method that removes any whitespace characters from the
// student's name. For example, if the student's name is "John Doe", this method
// would transform it to "JohnDoe".
// c) List all the student names containing a particular sub string.
// d) Sort the students alphabetically

class STUDENT {
    String firstName;
    String lastName;

    public STUDENT(String fName, String lName) {
        this.firstName = fName;
        this.lastName = lName;
    }

    String extractInitials() {
        String initials = firstName.substring(0, 1) + lastName.substring(0, 1);
        return initials;
    }

    void removeWhitespace() {
        firstName = firstName.replaceAll("\\s", "");
        lastName = lastName.replaceAll("\\s", "");
        System.out.println("Name without whitespace: " + firstName + lastName);
    }

}

public class LAB5_2 {
    public static void main(String args[]) {
        STUDENT std1 = new STUDENT("cr  ist  iano", "Ronal  do");
        STUDENT std2 = new STUDENT("LIOn  el", "me SSI");

        System.out.println("The initials are: " + std1.extractInitials());
        System.out.println("The initials are: " + std2.extractInitials());

        std1.removeWhitespace();
        std2.removeWhitespace();
    }

}
