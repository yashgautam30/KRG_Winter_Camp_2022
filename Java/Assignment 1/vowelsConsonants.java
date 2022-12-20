// package Assignment-2;

public class vowelsConsonants {

    static void check(String s){
        
        int n=s.length();
        int cons=0;
        int vowels=0;

        for(int i=0;i<n;i++){
            char c=s.charAt(i);
            if(c>=97 && c<=122){
                if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') vowels++;
                else cons++;
            }
        }
        System.out.println("Vowels: "+vowels+" Consonants: "+cons);
    }
    public static void main(String[] args) {
        String s="aeiouhg123@#";
        check(s);
    }
}
