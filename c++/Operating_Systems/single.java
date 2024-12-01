public class single {

    public static void main(String[] args) {
        // Create an array with a size of 3000
        int[] myNum = new int[3000];
        int search=3000;
        
        for (int i = 0; i < myNum.length; i++) {
            myNum[i] = i + 1;
        }

        // Print the array elements
        for (int i = 0; i < myNum.length; i++) {
            if(myNum[i]==search)
                System.out.println("num=" + myNum[i]);
        }
    }
}
