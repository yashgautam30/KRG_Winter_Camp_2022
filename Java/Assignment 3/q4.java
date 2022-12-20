interface Furniture {
    public void stressTest();
    public void fireTest();
}

abstract class Chair implements Furniture {
    public abstract String chairType();
}

abstract class Table implements Furniture {
    public abstract String tableType();
}

class MetalChair extends Chair {
    public void stressTest() {
        // statements
    }
    public void fireTest() {
        // statements
    }
    public String chairType(){
        return "MetalChair";
    }
}

class MetalTable extends Table {
    public void stressTest() {
        // statements
    }
    public void fireTest() {
        // stataments
    }
    public String tableType() {
        return "MetalTable";
    }
}

class WoodenChair extends Chair {
    public void stressTest() {
        //statements
    }
    public void fireTest() {
        //statements
    }
    public String chairType(){
        return "WoodenChair";
    }
}

class WoodenTable  extends Table{
    public void stressTest() {
        // statements
    }
    public void fireTest() {
        // statements
    }
    public String tableType() {
        return "WoodenTable";
    }
}

public class q4 {
    public static void main(String[] args){
        MetalChair mc= new MetalChair();
        MetalTable mt= new MetalTable();
        WoodenChair wc= new WoodenChair();
        WoodenTable wt= new WoodenTable();

        System.out.println(mc.chairType());
        System.out.println(mt.tableType());
        System.out.println(wc.chairType());
        System.out.println(wt.tableType());

    }
}