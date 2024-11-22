// Add the following string processing methods to the class Employee:
// a) formatEmployeeName(): A method that formats the employee's name by
// capitalizing the first letter of each word and converting the remaining letters to
// lowercase. For example, if the employee's name is "JOHN DOE", this method
// would transform it to "John Doe".
// b) generateEmail(): A method that generates an email address for the employee
// based on their name. For example, if the employee's name is "John Doe", this
// method would generate an email address like "jdoe@example.com".

class EMPLOYEE {
    String firstName;
    String lastName;
    String email;

    EMPLOYEE(String fName, String lName) {
        this.firstName = fName;
        this.lastName = lName;
        this.email = generateEmail();
    }

    void formatEmployeeName() {
        String newFname = firstName.substring(0, 1).toUpperCase() + firstName.substring(1).toLowerCase();
        String newLname = lastName.substring(0, 1).toUpperCase() + lastName.substring(1).toLowerCase();
        System.out.println("The formatted name is: " + newFname + " " + newLname);
    }

    String generateEmail() {
        String myEmail = firstName.substring(0, 1).toLowerCase() + lastName.toLowerCase() + "@example.com";
        return myEmail;
    }

    void displayEmployeeDetails() {
        formatEmployeeName();
        System.out.println("The email is: " + email);
    }
}

public class LAB5_1 {
    public static void main(String args[]) {
        EMPLOYEE emp = new EMPLOYEE("CRISTIANO", "ronalDO");
        emp.displayEmployeeDetails();
    }
}