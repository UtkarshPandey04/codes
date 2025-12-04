import java.util.HashSet;
public class HashSetExample {
  public static void main(String[] args) {
    HashSet<Integer> hs = new HashSet<>();
    hs.add(10);
    hs.add(20);
    hs.add(30);
    hs.add(20); // duplicate, will not be added
    System.out.println(hs);
    hs.remove(20);
    System.out.println(hs);
    System.out.println("Contains 10: " + hs.contains(10));
    System.out.println("Size: " + hs.size());
    System.out.println("Is empty: " + hs.isEmpty());
    HashSet<Integer> number1=new HashSet<>();
    number1.add(10);
    number1.add(20);
    number1.add(30);
    number1.addAll(hs);
    System.out.println("number1 after addAll: "+number1);
    number1.removeAll(hs);
    System.out.println("number1 after removeAll: "+number1);
    number1.retainAll(hs);
    System.out.println("number1 after retainAll: "+number1);
    number1.clear();
    System.out.println("number1 after clear: "+number1);
  }
}
