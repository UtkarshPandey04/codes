abstract class College {
    abstract void Register();
    abstract void Infrastructure();
    abstract void Student();
    abstract void Staff();
    void medicalFaculty() {
        System.out.println("Medical Faculties are optional.");
    }
}

class KIET extends College {
    void Register() {
        System.out.println("KIET is registered in AKTU.");
    }

    void Infrastructure() {
        System.out.println("KIET has good infrastructure.");
    }

    void Student() {
        System.out.println("KIET has many students.");
    }

    void Staff() {
        System.out.println("KIET has many staff members.");
    }

    void medicalFaculty() {
        System.out.println("KIET has a medical faculty.");
    }
}

public class Abstraction {
    public static void main(String[] args) {
        College cg;
        cg = new KIET();
        cg.Register();
        cg.Infrastructure();
        cg.Student();
        cg.Staff();
        cg.medicalFaculty();
    }
}
