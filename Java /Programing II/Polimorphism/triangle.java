package Polimorphism;

public class triangle extends Shape {

    // public class variables
    private int base,height;

    // default contructor
    public triangle() {
        super();
        base=0;
        height=0;
    }

    // parametarized contructor
    public triangle(String color, boolean filled, int base,int height) {
        super(color, filled);
        this.base=base;
        this.height=height;
    }

    // getters
    public double getbase() {return base;}
    public double getheight() {return height;}

    // setters
    public void setbase(int base) {this.base = base;}
    public void setheight(int height) {this.height=height;}

    // abstract
    @Override
    public double getarea() {return base*height;}

    @Override
    public double getparameter() {throw new UnsupportedOperationException("triangle has no parameter");}
    

    // printing
    public String draw() {return super.draw() + "\nbase:" + this.base + "\nheight" + this.height;}
}