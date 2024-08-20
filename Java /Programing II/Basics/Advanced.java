package Basics;


import java.util.Scanner;

public class Advanced {
    public static void main(String[] args) {
        // single line comment
        /* Multi line */
        arrays();
    }

    public static void arrays() {
        int arrays[]=new int[6];
        for (int i=0;i<6;i++) arrays[i]=i;
        Scanner input=new Scanner(System.in);
        int arr[]=new int[input.nextInt()];
        for (int i=0;i<arr.length;i++) arr[i]=i;
        for (int i=0;i<arr.length;i++) System.out.println(arr[i]);
        input.close();
    }   
}