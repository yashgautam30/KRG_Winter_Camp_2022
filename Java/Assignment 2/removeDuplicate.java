import java.util.*;

public class removeDuplicate {
    public static void main(String[] args) {
        String s="Hellooo";
        Set<Character> st=new HashSet<Character>();
        for(int i=0;i<s.length();i++){
            st.add(s.charAt(i));
        }
        Iterator it=st.iterator();
        while(it.hasNext()){
            System.out.print(it.next());
        }
    }   
}