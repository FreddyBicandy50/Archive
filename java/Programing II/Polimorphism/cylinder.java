package Polimorphism;
public class cylinder extends circle {

    // public class variables
    private int height;

    // default contructor
    public cylinder() {
        super();
        height=0;
    }

    // parametarized contructor
    public cylinder(String color, boolean filled,double radius,int height) {
        super(color, filled, radius);
        this.height=height;
    }

    // getters
    public int getheight() {return this.height;}

    // setters
    public void setheight(int height) {this.height=height;}

    // abstract 
    public double Volume() {return super.getarea()*height;}

    @Override
    public double getparameter() {
        System.out.println("triangle has no parameter");
        return -1;
    }

    // printing
    public String draw() {
        return super.draw() + "\nheight:" + this.height;
    }
}