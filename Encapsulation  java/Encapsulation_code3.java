
import java.util.*;

class A {
    private int a = 10;
    int b = 20;
    static int c = 30;

    public void logic1() {// Non static function access both static and non static data.
        System.out.println("Non static function: " + a + " " + b);
    }

    static public void logic2() {// Static function can access only static data.
        System.out.println("Static Function: " + c);

    }

}

public class Encapsulation_code3 {
    public static void main(String args[]) {
        A obj = new A();
        obj.logic1();// non static function called by object name.
        A.logic2(); // here we call the static function by class name.
    }

}
