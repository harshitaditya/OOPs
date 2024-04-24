import java.util.*;

class A {
    public void logic1() {
        System.out.println("It is non static function.");

    }

    static public void logic2() {
        System.out.println("It is Static Function");
    }
}

public class Encapsulation_code2 {
    public static void main(String args[]) {
        A obj = new A();
        obj.logic1();
        A.logic2();

    }

}
