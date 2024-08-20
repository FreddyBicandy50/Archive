public class Selection{
    public static void main(String[] args){ 
       int[] array = {5, 3, 1, 4, 8, 6}; 
        for (int i=0; i<array.length; i++){
            for(int j=i+1; j<array.length; j++){
                if(array[i]>array[j]){
                    int temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
        }
        for(int i=0; i<array.length; i++) System.out.println(array[i]);
         
    }
}