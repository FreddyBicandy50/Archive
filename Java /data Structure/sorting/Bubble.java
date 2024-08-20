public class Bubble{
    public static void main(String[] args){ 
       int[] array = {5, 3, 1, 4, 8, 6}; 
        for (int i=0; i<array.length; i++) 
            for(int j=1; j<array.length-i; j++) 
                if(array[j-1]>array[j]){
                    int temp=array[j-1];
                    array[j-1]=array[j];
                    array[j]=temp;
                }  
        for(int i=0; i<array.length; i++) System.out.println(array[i]);
         
    }
}