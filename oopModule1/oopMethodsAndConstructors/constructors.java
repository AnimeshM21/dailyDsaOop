class Employee {
    private int id;
    private String name;

    // public Employee() {
    //     id = 1;
    //     name = "Shyam";
    // }

    public Employee(String myname, int myid) {
        id = myid;
        name = myname;
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
        Employee emp = new Employee("Animesh",1);

        // emp.setName("Your Name");
        // emp.setId(55);

        System.out.println(emp.getName());
        System.out.println(emp.getId());
    }
}
