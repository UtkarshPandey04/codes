public class Static {
    int id;
    static String org;

    static {
        org = "KIET";
    }

    void Details(){
        System.out.println(id + " " + org);
    }
    
    static void StaticDetails() {
        System.out.println(org);
    }

    public static void main(String[] args) {
        Static x = new Static();
        x.id = 101;
        x.Details();
        StaticDetails();
        
        Static y = new Static();
        y.id = 102;
        y.Details();
        StaticDetails();
    }
}
