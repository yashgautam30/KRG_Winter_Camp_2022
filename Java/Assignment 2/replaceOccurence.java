import java.util.HashMap;

public class replaceOccurence {
    public static void main(String[] args) {
        String s="aaabbcdee";
        HashMap<Character, Integer> hm=new HashMap<>();
        for(int i=0;i<s.length();i++){
            if(hm.containsKey(s.charAt(i))){
                hm.put(s.charAt(i), hm.get(s.charAt(i))+1);
            }
            else hm.put(s.charAt(i), 1);
        }
        String str="";
        for(int i=0;i<s.length();i++){
            str+=hm.get(s.charAt(i));
        }
        System.out.println(str);
    }
}