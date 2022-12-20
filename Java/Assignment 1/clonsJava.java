// package Assignment-2;

class Abc implements Cloneable{
    int i=10;
    public Object clone() throws CloneNotSupportedException{
        return super.clone();
    }
}
class clonsJava implements Cloneable{
    public static void main(String[] args) throws CloneNotSupportedException {
        Abc a=new Abc();
        Abc b=(Abc)a.clone();
        System.out.println(a.i);
        System.out.println(b.i);
    }
}