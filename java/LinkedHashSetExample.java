import java.util.LinkedHashSet;
public class LinkedHashSetExample {
  public static void main(String[] args) {
    LinkedHashSet<Integer> lhs = new LinkedHashSet<>();
    lhs.add(10);
    lhs.add(20);
    lhs.add(30);
    lhs.add(20); // duplicate, will not be added
    System.out.println(lhs);
    lhs.remove(20);
    System.out.println(lhs);
    System.out.println("Contains 10: " + lhs.contains(10));
    System.out.println("Size: " + lhs.size());
    System.out.println("Is empty: " + lhs.isEmpty());
    LinkedHashSet<Integer> number1=new LinkedHashSet<>();
    number1.add(10);
    number1.add(20);
    number1.add(30);
    number1.addAll(lhs);
    System.out.println("number1 after addAll: "+number1);
    number1.removeAll(lhs);
    System.out.println("number1 after removeAll: "+number1);
    number1.retainAll(lhs);
    System.out.println("number1 after retainAll: "+number1);
    number1.clear();
    System.out.println("number1 after clear: "+number1);  
  }
}
