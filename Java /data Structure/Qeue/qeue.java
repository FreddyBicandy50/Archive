public class qeue {

    int rear=-1,front=-1,temprear;
    int array[];
    public qeue(){
        this.array= new int[5];  
    }

    public void enqeue(int number) { 
        //check if rear is still in range 
            //if yes check also the next move if empty
        if(rear+1<=array.length-1 && array[rear+1]!=0){
            rear=temprear; //go back to last index
            System.out.println("Array is full");
            return;
        }  
        //check if we are at the begening
        if(front == -1)front++;
        if (rear == -1) {
            array[0] = number;
            rear++;
        } 
        else {
            if (rear+1 <= array.length - 1) {
                rear++;
                array[rear] = number;
            }else{
                temprear=rear; 
                rear=-1;
                enqeue(number);
            }
        } 
        temprear=rear;
    } 
    public void deqeue(){ 
        if(front!=-1){ 
            array[front]=0;
            if(rear==front){
                front=-1;
                rear=-1;
                return;
            }
            if(front==array.length-1) front=0;
            else front++;
        }
    }    

     public void print_array(){ 
        if(rear==-1 && front==-1){
            System.out.println("array is empty!");
        }else{
             System.out.println("\nfront="+"["+front+"]="+array[front]);
             System.out.println("rear"+"["+rear+"]="+array[rear]);
        }
    } 
}
