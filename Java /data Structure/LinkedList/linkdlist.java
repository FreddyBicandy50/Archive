 public class linkdlist{
      static class Node {
        int data;
        Node prev;
        Node next;

        Node(int d) {
            data = d;
            prev = null;
            next = null;
        }
    }

    public static void main(String[] args) {
        Node head = null;

        head = appendFirst(head, 1);
        head = appendFirst(head, 2);
        head = appendLast(head, 3);
        head = appendLast(head, 4);

         System.out.println("NEXT:");
        while (true) {
            System.out.println(head.data);
            if (head.next!=null) head = head.next;
            else break;
        }

        System.out.println("PERV:");
        while (true) {
            System.out.println(head.data);
            if(head.prev!=null)head = head.prev;
            else break;
        }
    }

    public static Node appendLast(Node head, int number) {
        Node newNODE = new Node(number);
        if (head == null) {
            head = newNODE;
        } else {
            Node current = head;
            while (current.next != null) {
                current = current.next;
            }
            current.next = newNODE;
            newNODE.prev = current;
        }

        return head;
    }

    public static Node appendFirst(Node head, int number) {
        Node newNODE = new Node(number);
        if (head == null) {
            head = newNODE;
        } else {
            newNODE.next = head;
            head.prev = newNODE;
            head = newNODE;
        }
        return head;
    }
}