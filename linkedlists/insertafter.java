class ListNode{ 
    int item;
    ListNode next;
    
    public ListNode(int item, ListNode next)
    {
        this.item = item;
        this.next = next;
        
    }
    public ListNode(int item)
    {
        this(item,null);
    }
    
    public void insertAfter(int item)
    {
        next = new ListNode(item,next);
        
    }
 
}

public class JavaApplication {

   
    public static void main(String[] args) {
       ListNode l1 = new ListNode(10,new ListNode(20,new ListNode(6)));
       l1.insertAfter(40);
       l1.insertAfter(34);

 
    }
    
}
