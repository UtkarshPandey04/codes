import java.util.Arrays;
public class SortingDemo {
  public static void main(String[] args) {
    //use sort function
    int[] arr = {5, 3, 8, 1, 2};
    java.util.Arrays.sort(arr);
    for (int num : arr) {
      System.out.print(num + " ");
    }
    System.out.println();
  }
}
