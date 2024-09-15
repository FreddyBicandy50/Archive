package OOP;
public class person {
    
    private int id,Age;
    private String fn,ln,Address;
    //default auto constructor
    public person(){
        id=0;
        fn=" ";
        ln=" ";
        Age=0;
        Address=" ";
    }

    
    //default manuall constructor
    public person(int id,String fn,String ln,int Age,String Address){
        this.id=id;
        this.fn=fn;
        this.ln=ln;
        this.Age=Age;
        this.Address=Address;
    }

    //getters
    public int getid() {return id;}
    public String getfn() {return fn;}
    public String getln() {return ln;}
    public int getAge() {return Age;}
    public String getAddress() {return Address;}
    

    //Setters
    public void setid(int id) {this.id = id;}
    public void setfn(String fn) {this.fn =fn;}
    public void setln(String ln) {this.ln =ln;}
    public void setAge(int Age) {this.Age = Age;}
    public void setAddress(String Address) {this.Address =Address;}
   
    //printing
    public void print(){
        System.out.println("id:"+id+"\nfirstname:"+fn+"\nlastname:"+ln+"\nAge:"+Age+"\nAddress:"+Address);
    }
    
    
    
}
