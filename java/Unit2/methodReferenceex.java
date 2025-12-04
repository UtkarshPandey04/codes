package Unit2;
import java.util.Arrays;
import java.util.List;
class studentDemo{
  public static void showDetails(int n){
    System.out.println(n);
  }
}
public class methodReferenceex {
  public static void main(String[] args) {
    List<Integer> numbers=Arrays.asList(1,2,3,4,5,6,7,8,9);
    //numbers.forEach(n->studentDemo.showDetails(n));
    numbers.forEach(studentDemo::showDetails);




  }
}

List<Integer> squares=numbers.stream().map(n->n*n).collect(Collectors.toList());
    System.out.println(squares);
    List<Integer> squares=numbers.stream().map(n->n*n).collect(Collectors.toList());
    System.out.println(squares);