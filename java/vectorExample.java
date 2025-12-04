import java.util.Vector;

public class vectorExample{
  public static void main(String[] args) {
    Vector<String> vec = new Vector<>();
    vec.add("A");
    vec.add("B");
    vec.add("C");
    vec.add("D");
    System.out.println(vec);

    vec.add(1,"E");
    System.out.println(vec);

    System.out.println(vec.get(3));
    System.out.println(vec.set(1,"F"));
    System.out.println(vec);

    vec.remove(2);
    System.out.println(vec);

    System.out.println((vec.contains("A")));

    System.out.println(vec.size());
    System.out.println(vec.capacity());
    vec.addAll(vec);
    vec.clear();
    System.out.println(vec);

    
  
  }
}