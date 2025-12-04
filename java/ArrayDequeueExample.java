import java.util.ArrayDeque;
public class ArrayDequeueExample {
  public static void main(String[] args) {
    ArrayDeque<String> ad = new ArrayDeque<>();
    ad.add("A");
    ad.add("B");
    ad.add("C");
    ad.addFirst("D");
    ad.addLast("E");

    ad.offer("F");
    ad.offerFirst("G");
    ad.offerLast("H");
    // access element
    System.out.println("first element(peek): "+ ad.peek());
    System.out.println("first element(peekfirst): "+ ad.peekFirst());
    System.out.println("last element(peeklast): "+ ad.peekLast());

    // remove element
    System.out.println("removed element(remove): "+ ad.remove());
    System.out.println("removed element(removefirst): "+ ad.removeFirst());
    System.out.println("removed element(removelast): "+ ad.removeLast());
    System.out.println("removed element(poll): "+ ad.poll());
    System.out.println("removed element(pollfirst): "+ ad.pollFirst());

    System.out.println("Dequeue after removals:");
    System.out.println(ad);
  }
}

