package Basics;
import OOP.person;

public class Student extends person {
 
    private String Major;

    // default auto constructor
    public Student() {
        super();
        Major=" "; 
    }

    // default manuall constructor
    public Student(int id,String fn,String ln,int Age,String Address,String Major) {
        super(id,fn,ln,Age,Address);
        this.Major= Major;
    }

    // getters
    public String getMajor() {return Major;}  
  
    // Setters
    public void setid(String Major) {this.Major = Major;}
    

    // printing
    public void print() {
        super.print();
        System.out.println("Major:" + Major);
    }

}
