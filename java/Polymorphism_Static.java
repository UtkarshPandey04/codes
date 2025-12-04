class EmployeePloy {
    String Employee_Name;

    void details() {
        System.out.println("Name: " + Employee_Name);
    }

    void details(int Salary) {
        System.out.println("Salary: " + Salary);
    }

    void details(String Company_Name) {
        System.out.println("Company: " + Company_Name);
    }
}

public class Polymorphism_Static {
    public static void main(String[] args) {
        EmployeePloy e = new EmployeePloy();
        e.Employee_Name = "Utkarsh Pandey";
        e.details();
        e.details(10000);
        e.details("KIET");
    }
}
