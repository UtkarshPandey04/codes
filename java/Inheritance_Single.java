class Employee {
    String name;
    int id;
    String org;

    void EmployeeDetails() {
        System.out.println("Details are: " + name + " " + id + " " + org);
    }
}

class Faculty extends Employee {
    String department;
    String subject;

    void FacultyDetails() {
        System.out.println("Details are: " + department + " " + subject);
    }
}

public class Inheritance_Single {
    public static void main(String[] args) {
        Faculty x = new Faculty();
        x.id = 101;
        x.name = "Utkarsh";
        x.org = "KIET";
        x.department = "CSEAIML";
        x.subject = "JAVA";

        x.EmployeeDetails();
        x.FacultyDetails();
    }
}