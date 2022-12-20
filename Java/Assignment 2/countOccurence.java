import java.util.HashMap;
import java.util.*;

public class countOccurence {
    public static void main(String[] args) {
        String s="aabbcdee";
        HashMap<Character, Integer> hm=new HashMap<>();
        for(int i=0;i<s.length();i++){
            if(hm.containsKey(s.charAt(i))){
                hm.put(s.charAt(i), hm.get(s.charAt(i))+1);
            }
            else hm.put(s.charAt(i), 1);
        }
        for(Map.Entry e: hm.entrySet()){
            System.out.println(e.getKey()+": "+e.getValue());
        }
        // System.out.println(hm);
    }
}