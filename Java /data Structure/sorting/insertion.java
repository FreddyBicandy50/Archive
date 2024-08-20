public class insertion{
    public static void main(String[] args){ 
       int[] array = {70, 30, 20, 50, 60, 10, 40}; 
       for (int i=1; i<array.length; i++)
            for(int j=i; j>0; j--)
                if(array[j]<array[j-1]){
                    int temp=array[j];
                    array[j]=array[j-1];
                    array[j-1]=temp;
                }else{break;}

        for(int i=0; i<array.length; i++) System.out.println(array[i]);
        
    }
}