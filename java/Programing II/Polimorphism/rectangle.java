package Polimorphism;

public class rectangle extends Shape {
    
    //public class variables
    private int lenght,width;

    //default contructor
    public rectangle() {
        super();
        lenght=0;
        width=0;
    } 
    //parametarized contructor
    public rectangle(String color, boolean filled, int lenght,int width) {
        super(color, filled);
        this.lenght = lenght;
        this.width = width;
    }

    //getters
    public int getlength() {return lenght;}
    public int getwidth() {return width;}

    //setters
    public void setlenght(int lenght) {this.lenght = lenght;}
    public void setwidth(int width) {this.width = width;}

    //abstract
    @Override
    public double getarea() {return lenght*width;}

    @Override
    public double getparameter() {return 2 *(lenght+width);}

    //printing 
    public String draw() {return super.draw() + "\nlenght:" + this.lenght+ "\nwidth:" + this.width;}

}