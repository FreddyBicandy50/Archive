package OOP;
import java.util.Scanner;
public class OOP {
    String First_name,Last_name;
    int Age;
    Scanner input=new Scanner(System.in);
    public int area(int side){
        return side*side;
    }
    
    public void print(int a){
        System.out.println(a);
    }
    
    
    public String Students_info(){
      
        
        return First_name+" "+Last_name;
    }
    
    public int Student_Age(){
        System.out.print("Enter Student Age:");
        Age = input.nextInt();
        return Age;
    }
    
    public void print_student_info(){
        System.out.println("student Firstname:"+ First_name+" Lastname:"+Last_name+"\nAge:"+Age);
    }






    
}
