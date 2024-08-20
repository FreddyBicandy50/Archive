package Polimorphism;
//import modules
import java.rmi.UnexpectedException;
import java.util.Scanner;

public class draw {
    public static void main(String[] args) throws UnexpectedException {
        //define object variables
        Scanner input=new Scanner(System.in);
        Shape array[]=new Shape[3];

        //fill the array
        for (int i=0; i<array.length; i++) {
            //user choice
            System.out.print("1.Circle\n2.Rectangle\n3.Triangle\n4.Cylinder\n5.Square\nChoose Draw options:");
            int choice=input.nextInt();

            switch (choice){
                case 1:
                    System.out.println("Circle:");
                    array[i]=new circle("Blue",true,3.5); 
                    break;
                case 2:
                    System.out.println("Rectangle:");
                    array[i]=new rectangle("Red",false,5,4); 
                    break;
                    case 3:
                    System.out.println("Triangle:");
                    array[i]=new triangle("blue",true,3,5); 
                    break;
                case 4:
                    System.out.println("Square:");
                    array[i]=new square("blue",true,10,8); 
                    break;
                case 5:
                    System.out.println("Cylinder:");
                    array[i]=new cylinder("blue",true,5.2,6); 
                    break;
                default:
                    throw new UnsupportedOperationException("INVALID!");   
            }
            choice=0;
        }

        //printing array
        for (int j=0; j<array.length;j++) {
            System.out.println("\n\nArray["+j+"]");
            
            //ask what shape in array index
            if (array[j] instanceof circle){ 
                System.out.println("Circle");
                System.out.println(array[j].draw()+"\narea:"+array[j].getarea()+"\nparemeter:"+array[j].getparameter());
            }

            else if(array[j] instanceof cylinder){
                //getting Volume methode by down casting from shape to cylinder shape
                System.out.println("Cylinder");
                cylinder getvolume=(cylinder)array[j];
                System.out.println(array[j].draw()+"\nvolume:"+ getvolume.Volume());
            }
            
            else if(array[j] instanceof rectangle){
                System.out.println("Rectangle");
                System.out.println(array[j].draw()+"\narea:"+array[j].getarea()+"\nparemeter:"+array[j].getparameter());
            }

            else if(array[j] instanceof triangle){
                System.out.println("Triangle");
                System.out.println(array[j].draw()+"\narea:"+array[j].getarea());
            }
            
            else if(array[j] instanceof square){
                System.out.println("Square");
                System.out.println(array[j].draw()+"\narea:"+array[j].getarea());
            }
        }
        
        input.close();
    } 


}