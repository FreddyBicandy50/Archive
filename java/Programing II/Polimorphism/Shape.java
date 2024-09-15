package Polimorphism;
abstract class Shape {
    //public class variables
    private String color;
    private boolean filled;

    //default contructor
    public Shape(){
        color="";
        filled=false;
    } 
    //parametarized contructor
    public Shape(String color,boolean filled){
        this.color=color;
        this.filled=filled;
    }
    

    //getters
    public String getcolor() {return color;} 
    public boolean getfilled() {return filled;} 

    //setters
    public void setcolor(String color) {this.color=color;} 
    public void setcolor(boolean filled) {this.filled=filled;} 
    
    //abstract
    public abstract double getarea();
    public abstract double getparameter();
    
    //print
    public String draw(){return "color:"+this.color+"\nfilled:"+this.filled;}

}



