package Polimorphism;
public class square extends rectangle {

    // default contructor
    public square() {super();}

    // parametarized contructor
    public square(String color, boolean filled,int lenght,int width) {super(color, filled, lenght,width);}
 
    // printing
    public String draw() {return super.draw();}
}