import java.util.Stack;
public class StackExample {
  //stack -pop,push,peek,search
  Stack<Integer> st=new Stack<>();
  st.push(10);
  st.push(20);
  st.push(30);
  st.pop();
  System.out.println(st.peek());
  System.out.println(st.search(20));
  System.out.println(st);
  
}

