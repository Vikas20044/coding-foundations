public class insertionMiddle{
      public static ListNode insertNode(ListNode head,int x){
            if(head==null) return head;
            ListNode temp = head;
            while(temp!=null){
                  if(temp.val==x){
                        ListNode node = new ListNode(10);
                        node.next = temp.next;
                        temp.next = node;
                        break;
                  }
                  temp = temp.next;
            }
            return head;

      }
      public static ListNode insertBeg(ListNode head) {
          ListNode newnode = new ListNode(10);
          if(head==null){
            head = newnode;
            return head;
          }
          newnode.next = head;
          head = newnode;
          return head;

      }
      public static void main(String[] args) {
          int[] arr = {4,2,1,3};
          ListNode head = new ListNode(0);
          ListNode tail = head;
          for(int i=0; i<arr.length; i++){
            tail.next=new ListNode(arr[i]);
            tail = tail.next;
          }
          head = head.next;
          head = insertNode(head, 3);
          ListNode temp = head;
          while(head!=null){
                  System.out.print(head.val+" ");
                  head = head.next;

          }
          temp = insertBeg(temp);
          while(temp!=null){
            System.out.print(temp.val+" ");
            temp = temp.next;
          }

          
      }
}