package OOP;
import java.util.Scanner;
public class TestOOP{
    public static void main (String[] args){ 
        Scanner input=new Scanner(System.in);
        OOP object=new OOP();
        int res=object.area(input.nextInt());
        object.print(res);
                
        OOP students_array[]=new OOP[5];
        OOP s;
        String name,lastname;
        int age;
        for(int i=0 ; i<3; i++){
            s=new OOP();
            System.out.println("Enter your name:");
            name=input.nextLine();
            System.out.println("Enter your lastname:");
            lastname=input.nextLine();
            System.out.println("Enter your age:");
            age=input.nextInt();

            s.First_name=name;
            s.Last_name=lastname;
            s.Age=age;
            students_array[i]=s; 
        }
        
        for(int i=0 ; i<3; i++){
            students_array[i].print_student_info();
        }    
        
        
        input.close();
    }
}