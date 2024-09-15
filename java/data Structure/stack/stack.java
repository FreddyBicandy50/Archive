public class stack {
    private final int size;
    private int top;
    private int stack[];

    public stack() {
        size = 5;
        top = -1;
        stack = new int[size];
    }

    public void push(int number) {
        if (top == size-1) System.out.println("Stack Overflow!");
        else stack[++top] = number;
      
    }

    public void pop() {
        if (top < 0) System.out.println("Stack is empty!");
        else stack[top--] = 0;
    }

    public void top() {
        if (top<0) System.out.println("Stack is empty!");
        else System.out.println(stack[top]);
    }

    public void size() {
        int temp=top;
        temp++;
        System.out.println("Size:"+temp++);
        }
}
