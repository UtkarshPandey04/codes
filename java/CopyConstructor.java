public class CopyConstructor {
   int id;
   String name;

   CopyConstructor(int id, String name) {
      this.id = id;
      this.name = name;
   }

   CopyConstructor(CopyConstructor s) {
      id = s.id;
      name = s.name;
   }

   void printInfo() {
      System.out.println("Details are: " + id + " " + name);
   }

   public static void main(String[] args) {
      CopyConstructor cc = new CopyConstructor(100, "Utkarsh");
      cc.printInfo();

      // CopyConstructor cc1;
      // cc1= cc;
      // cc1.id= 101;
      // cc1.printInfo();
      // cc.printInfo();

      CopyConstructor cc2 = new CopyConstructor(cc);
      cc2.id = 101;
      cc2.printInfo();
      cc.printInfo();
   }
}