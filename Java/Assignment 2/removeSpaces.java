public class removeSpaces {
    public static void main(String[] args) {
        String s="Hello World, How are you?";
        String target=" ";
        s=s.replaceAll(target, "");
        System.out.println(s);
    }
}