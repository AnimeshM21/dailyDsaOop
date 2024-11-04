class Employee {
    private int id;
    private String name;

    public Employee() {
        id = 1;
        name = "Shyam";
    }

    public String getName() {
        return name;
    }

    public int getId() {
        return id;
    }

    public void setName(String n) {
        this.name = n;
    }

    public void setId(int i) {
        this.id = i;
    }
}

public class constructors {
    public static void main(String args[]) {
        Employee emp = new Employee();

        // emp.setName("Your Name");
        // emp.setId(55);

        System.out.println(emp.getName());
        System.out.println(emp.getId());
    }
}
