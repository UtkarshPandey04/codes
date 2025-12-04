package Unit2;

public class FunctionalInterface {
  public static void main(String[] args) {
    Bird b=()->{
      
    }














    Consumer<Employee> giveBonus=(e)->e.salary+=5000;
    Employee emp=new Employee();
    emp.salary=10000;
    Consumer<Employee> show=(e)->
    System.out.println(e.salary);
    giveBonus.andThen(show).accept(emp);
    System.out.println(emp.salary);
    Employee.forEach










    Function<Integer,Integer> Sqauare=n->n*n;

    System.out.println(Sqauare.apply(5));
    
  }

}
