interface Institute {
    void Register();
    void Infrastructure();
    void Student();
    void Staff();

    static void StaticConcrete() {
        System.out.println("Static concrete method in interface.");
    }

    default void DefaultConcrete() {
        PrivateConcrete();
        System.out.println("Default concrete method in interface.");
    }

    private void PrivateConcrete() {
        System.out.println("Private concrete method in interface.");
    }
}

class AKTU implements Institute {
    public void Register() {
        System.out.println("AKTU is registered in AKTU.");
    }

    public void Infrastructure() {
        System.out.println("AKTU has good infrastructure.");
    }

    public void Student() {
        System.out.println("AKTU has many students.");
    }

    public void Staff() {
        System.out.println("AKTU has many staff members.");
    }
}

public class Interface {
    public static void main(String[] args) {
        Institute ins;
        ins = new AKTU();
        ins.Register();
        ins.Infrastructure();
        ins.Student();
        ins.Staff();
        Institute.StaticConcrete();
        ins.DefaultConcrete();
    }
}
