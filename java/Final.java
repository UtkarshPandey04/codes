final public class Final {
    int id;
    final String org = "KIET";

    final void Details(){
        System.out.println("From First Class: " + id + " " + org);
    }

    public static void main(String[] args) {
        Final x = new Final();
        x.id = 101;
        // x.org = "ABES";
        x.Details();
    }
}

// class Check extends Final {
//     void Details(){
//         System.out.println("From Check: " + id + " " + org);
//     }

//     public static void main(String[] args) {
//         Check x = new Check();
//         x.Details();
//     }
// }