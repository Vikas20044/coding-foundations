public class ListUtils{
      public static void displayNode(ListNode head){
            if(head==null){
                  System.out.println("There is not element in List");
                  return;
            }
            ListNode temp=head;
            while(temp!=null){
                  System.out.print(temp.val+" ");
                  temp=temp.next;
            }
            System.out.println("");
      }
}