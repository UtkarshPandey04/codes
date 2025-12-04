public class Constructor {
    int id;
    String name;

    Constructor() {

    }

    // Constructor() {
    // id= 100;
    // name= "Utkarsh Pandey";
    // }

    void printInfo() {
        System.out.println("Details are: " + id + " " + name);
    }

    public static void main(String[] args) {
        Constructor c1 = new Constructor();
        c1.printInfo();
    }
}