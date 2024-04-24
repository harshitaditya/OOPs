
import java.util.*;

class student {
    private int id; // Non-static data
    String name;
    int age;
    int roll;

    public void set(int id, String name, int age, int roll) {// member function this is also called non-static
                                                             // function,instance function.
        this.id = id;
        this.name = name;
        this.age = age;
        this.roll = roll;
    }

    public void get() {
        System.out.println("id: " + id);
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Roll: " + roll);
    }

}

public class Encapsulation_code1 {
    public static void main(String args[]) {
        student s1 = new student();
        s1.set(1, "Aditya", 19, 12);
        s1.get();
        student s2 = new student();
        s2.set(2, "Anurag", 17, 2);
        s2.get();
    }

}
