package Polimorphism;
public class circle extends Shape {

    //public class variables
    private double radius;

    //default contructor
    public circle(){
        super();
        radius=0;
    } 
    //parametarized contructor
    public circle(String color, boolean filled,double radius){
        super(color,filled);
        this.radius=radius;
    }
    
    //getters
    public double getradius() {return radius;}  
    
    //setters
    public void setradius(double radius) {this.radius=radius;}
 
    //abstract 
    @Override
    public double getarea() {return Math.PI*radius;}
    @Override
    public double getparameter() {return 2*Math.PI*radius;}
    
    //printing  
    public String draw() {return super.draw()+"\nradius:"+this.radius;}
}