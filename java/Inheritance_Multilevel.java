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

class ResearchFaculty extends Faculty {
    String shift;

    void ResearchFacultyDetails() {
        System.out.println("Details are: " + shift);
    }
}

public class Inheritance_Multilevel {
    public static void main(String[] args) {
        ResearchFaculty x = new ResearchFaculty();
        x.id = 101;
        x.name = "Utkarsh";
        x.org = "KIET";
        x.department = "CSEAIML";
        x.subject = "JAVA";
        x.shift = "A";

        x.EmployeeDetails();
        x.FacultyDetails();
        x.ResearchFacultyDetails();
    }
}