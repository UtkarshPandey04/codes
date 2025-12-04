import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
public class HashMapExample {
  public static void main(String[] args) {
    HashMap<Integer, String> hm = new HashMap<>();
    hm.put(1, "One");
    hm.put(2, "Two");
    hm.put(3, "Three");
    hm.put(4, "Four");
    hm.put(2, "Two Updated"); // duplicate key, will update value
    System.out.println(hm);
    hm.remove(3);
    System.out.println(hm);
    System.out.println("Contains Key 1: " + hm.containsKey(1));
    System.out.println("Contains Value 'Four': " + hm.containsValue("Four"));
    System.out.println("Size: " + hm.size());
    System.out.println("Is empty: " + hm.isEmpty());
    //iterate
    for (Integer key : hm.keySet()) {
      System.out.println("Key: " + key + ", Value: " + hm.get(key));
    }
    Iterator<Map.Entry<Integer, String>> it = hm.entrySet().iterator();
    while (it.hasNext()) {  
      Map.Entry<Integer, String> entry = it.next();
      System.out.println("Key: " + entry.getKey() + ", Value: " + entry.getValue());
    }
  }
}
