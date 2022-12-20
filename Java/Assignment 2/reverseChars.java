public class reverseChars {
    public static void main(String[] args) {
        String s="Hello World";
        // StringBuilder sb=new StringBuilder();
        // sb.append(s);
        // sb.reverse();
        // System.out.println(sb);
        String str="";
        for(int i=0;i<s.length();i++){
            char c=s.charAt(i);
            str=c+str;
        }
        System.out.println(str);
    }   
}
