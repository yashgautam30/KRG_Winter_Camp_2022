class sortString{
    static String sortStr(String s){
        int n=s.length();

        Character chr[]=new Character[n];
        
        for(int i=0;i<n;i++){
            chr[i]=s.charAt(i);
        }

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(chr[i]>chr[j]){
                    char c=chr[j];
                    chr[j]=chr[i];
                    chr[i]=c;
                }
            }
        }

        String str="";

        for(int i=0;i<n;i++){
            str+=(chr[i]);
        }

        return str;
    }
    public static void main(String[] args) {
        String s="dcbae";
        System.out.println("Unsorted String: "+s);
        String str=sortStr(s);
        System.out.println("Sorted String: "+str);
    }
}