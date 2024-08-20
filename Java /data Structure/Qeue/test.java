public class test{
    public static void main(String[] args){
        qeue q=new qeue();
        q.enqeue(12); 
        q.enqeue(24); 
        q.enqeue(30); 
        q.enqeue(60); 
        q.enqeue(40); 
        q.deqeue();
        q.deqeue();
        q.deqeue();
        q.deqeue();
        q.deqeue();
        q.enqeue(12);  
        q.enqeue(31);  
        q.enqeue(11);  
        q.enqeue(45);  
        q.enqeue(56); 
        q.deqeue();
        q.deqeue();
        q.deqeue();
        q.enqeue(24);
        q.enqeue(50);
        q.enqeue(60);
        q.deqeue();
        q.deqeue();
        q.enqeue(60);
        q.enqeue(3);
        q.enqeue(1);
        q.deqeue();
        q.print_array();
    }
    
    
}