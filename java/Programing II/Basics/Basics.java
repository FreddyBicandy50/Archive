package Basics;

import java.util.Scanner;
public class Basics{
    public static void main (String [] args){
        // single line comment
        /* Multi line*/
        datatypes_input();
        conditions_loops();
    } 
    public static void datatypes_input(){
        Scanner input = new Scanner(System.in);

        System.out.print("enter a number:");
        int integer=input.nextInt();
        
        System.out.print("enter your name:");
        String Multi_char = input.nextLine(); 
        
        System.out.print("enter a string of 3 characters:");
        char interval_string = input.nextLine().charAt(3); 
        
        System.out.print("enter a decimal number:");
        float float_number = input.nextFloat();

        System.out.print("enter a double decimal number:");
        double double_number = input.nextDouble();
        
        System.out.print("enter a boolean value:");
        boolean bool = input.nextBoolean(); 
        
        System.out.print("enter a character value:");
        char character = input.next().charAt(0);
        
        System.out.println("integer:"+integer+"\nString:"+Multi_char+"\nChar 3 "+interval_string+"\nfloat:"+float_number+"\ndouble_number:"+double_number+"\nbool:"+bool+"\ncharacter:"+character);
      
        input.close();
    }
    public static void conditions_loops(){

        Scanner input = new Scanner(System.in);
        int number;
        do{ 

            System.out.print("enter a number >4:");
            number=input.nextInt();            
            if(number<=4) 
                System.out.println("number should be >4");

        }while(number<=4);


        boolean flag=true;
        while(flag){
            
            if (flag){
                System.out.println("even numbers");
                for (int i = 1; i <= number; i++)
                    if (i % 2 == 0)
                        System.out.print(i + ",");
                flag=false;
            }

            if (!flag) {
                System.out.println("\nodd numbers");
                for (int i = 1; i <= number; i++)
                    if (i % 2 != 0)
                        System.out.print(i+",");
            }
            System.out.print("\n");
        }
        input.close();
    }
}