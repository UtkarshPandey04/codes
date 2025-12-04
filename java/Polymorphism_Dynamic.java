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

class Faculty extends EmployeePloy {
    void details() {
        super.details();
        System.out.println("Welcome Everyone.");
    }
}

public class Polymorphism_Dynamic {
    public static void main(String[] args) {
        Faculty f = new Faculty();
        f.Employee_Name = "Utkarsh Pandey";
        f.details();
    }
}
