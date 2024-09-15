public class test {
    public static void main(String[] args) {
        Tree tree=new Tree();
        tree.insert(20);
        tree.insert(10); 
        tree.insert(5); 
        tree.insert(30); 
        tree.insert(25); 
        tree.insert(60);  
        tree.insert(90); 
        tree.insert(11);  
        tree.insert(3); 
        tree.insert(1); 
        tree.insert(2);  
        
       // tree.rn_preorder();
        tree.delete(5);
    }
}