public class insertionOfSortList{
      public static ListNode insertionSortList(ListNode head){
         
            ListNode dummy =new ListNode(-101);
            ListNode tmp = dummy;

            ListNode temp = head;
            while(temp!=null){
                  int cur = temp.val;
                  while(tmp!=null){
                        if(cur>=tmp.val && tmp.next==null){
                              ListNode newNode = new ListNode(cur);
                              newNode.next = tmp.next;
                              tmp.next=newNode;
                              break;

                        }

                        if(cur>=tmp.val && cur<tmp.next.val){
                              ListNode newNode = new ListNode(cur);
                              newNode.next = tmp.next;
                              tmp.next=newNode;
                              break;

                        }
                        tmp = tmp.next;
                  }
                  temp = temp.next;
                  tmp = dummy;
            
            }
            return dummy.next;
            

            
      }

      public static void main(String[] args) {
            int[] arr = {2,1,3,4};
          ListNode head = new ListNode(0);
          ListNode tail = head;
          for(int i=0; i<arr.length; i++){
            tail.next=new ListNode(arr[i]);
            tail = tail.next;
          }
          head = head.next;
         
          ListNode head1 = insertionSortList(head);
          while(head1!=null){
            System.out.print(head1.val+" ");
            head1=head1.next;
          }

      }
    
}