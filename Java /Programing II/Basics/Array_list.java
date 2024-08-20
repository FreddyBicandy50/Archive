package Basics;

import java.util.Scanner;
import java.util.ArrayList;

public class Array_list {
 
    public static void main(String[] args){
        ArrayList<Integer> A = new ArrayList<>(), B = new ArrayList<>(), C = new ArrayList<>(), D = new ArrayList<>(), F = new ArrayList<>();
        
        Scanner input=new Scanner(System.in);
        int nogrades=0,number;
        while (true){
            number = input.nextInt();
            if (number == -1){
                System.out.println("Exiting...");
                break;
            }else if (number < 0 || number > 100)
                System.out.println("Invalid Grade");
            else{
                if (number>=90)
                    A.add(number);
                else if(number>=80)
                    B.add(number);
                else if(number>=70)
                    C.add(number);
                else if(number>=60)
                    D.add(number);
                else 
                    F.add(number);
            } 
            nogrades++;
        } 
        System.out.println("Total number of grades="+nogrades);
        System.out.println("number of A="+A.size());
        System.out.println("number of B="+B.size());
        System.out.println("number of C="+C.size());
        System.out.println("number of D="+D.size());
        System.out.println("number of F="+F.size());
        System.out.print("The A grades are:");
        for (int i : A) {
            System.out.print(i+",");
        }
        input.close();
    } 
    
}
