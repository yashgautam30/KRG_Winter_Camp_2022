
class Abc {
    public static void main(String[] args) {
        // String s1="hello";
        // String s2="hella";
        // String s1= new String("hello");
        // String s2=new String("hella");
        // String s="My name is Khan";

        // System.out.println(s1.concat(" "+s2)); // concatnation

        // for(int i=0;i<s1.length();i++) // printing characters
        //     System.out.println(s1.charAt(i));

        // System.out.println(s1.compareTo(s2)); // comparing 0 when equal, + when greater and -ve when smaller. based on ascii values

        // System.out.println(s1==s2); // gives true false when similar.

        // System.out.println(s.substring(0, 12));// returns substring of the string.

        // remove duplicates,
        // remove space, 
        // reverse words, 
        // replace characters with its occurences, 
        // reverse characters, 
        // find occurence of each character,
        // longest substring without repeating characters.

        // String s=new String("Hello");
        // s.concat(" World");
        // System.out.println(s); // Hello
        
        // StringBuffer s1=new StringBuffer("Hello");
        // s1.append(" World");
        // System.out.println(s1); // Hello World
        
        
        // String s1=new String("Hello");
        // String s2=new String("Hello");
        // System.out.println(s1==s2); // false
        // System.out.println(s1.equals(s2)); // true beacause compares contents
        
        // System.out.println();
        
        // StringBuffer sb1=new StringBuffer("Hello");
        // StringBuffer sb2=new StringBuffer("Hello");
        // System.out.println(sb1==sb2); // false
        // System.out.println(sb1.equals(sb2)); // false because compares adress references
        
        // == and .equals are both used for reference comparison but in new String .equals gets overriden and used for content comparison.
        // string buffer and builder are same
        // methods in builder are non synchronised while methods of buffer are synchronised.
        
        // String s1=new String("Hello");// two objects created in scp(string constant pool) and heap and checks in scp when new created.
        // String s2="Hello"; // one object created in scp only.
        
        // final StringBuffer sb=new StringBuffer("Hello"); //mutable because final makes only variable immutable not objects 
        // sb.append(" World");
        // System.out.println(sb);
        
        // final StringBuffer sb=new StringBuffer("Hello");
        // sb=new StringBuffer("World"); // error..cannot change final variable
        // System.out.println(sb);
        
        // final StringBuffer sb=new StringBuffer("Hello");
        // sb.append(" World");
        // System.out.println(sb);

        // String Builder methods are non synchronised and not thread safe. Threads are executed one by one.
        // StringBuffer not threat safe.
    }
}