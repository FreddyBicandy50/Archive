package OOP;
import java.util.Scanner;

import Basics.Student;
public class PersonTest {
    public static void main (String[]args){
        //Calling OOP Classes
        Scanner input=new Scanner(System.in); 

        //PERSON FILLING INFO  
        int id=500,Age=21;   
        String Firstname="Freddy",Lastname="Bicandy",Address="Lebanon";
        
        //PRINTING person After change 
        System.out.println("PRINTING PRESON"); 
        person fill_info=new person(id,Firstname,Lastname,Age,Address);
        fill_info.print(); 
        

        // Change PERSON ID using setter
        System.out.print("enter your ID AGAIN: "); 
        id=input.nextInt();
        fill_info.setid(id); 
        System.out.println("\n\nAFTER CORRECTION");
        fill_info.print();
        
        
        
       //Student INFO 
        input.nextLine();
        System.out.print("\nEnter your Major:"); 
        Student student_fill=new Student(id,Firstname,Lastname,Age,Address,input.nextLine());
        student_fill.print();
        
        input.close();
    }
}
