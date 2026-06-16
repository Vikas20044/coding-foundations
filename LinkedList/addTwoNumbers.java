public class addTwoNumbers{
      public static ListNode addNumber(ListNode l1, ListNode l2){
            ListNode dummy =new ListNode(0);

            ListNode tail = dummy;
            int carry=0;

            while(l1!=null || l2!=null || carry==1){
                  int sum = carry;

                  if(l1!=null){
                        sum+=l1.val;
                        l1=l1.next;
                  }
                  if(l2!=null){
                        sum+=l2.val;
                        l2=l2.next;
                  }

                  carry =sum/10;
                  sum%=10;

                  tail.next = new ListNode(sum);
                  tail = tail.next;
            }
            return dummy.next;
      }
            

      public static ListNode insertAtEnd(int val,ListNode head){
            ListNode newNode = new ListNode(val);
            if(head==null){
                  head=newNode;
                  return head;
            }
            ListNode temp=head;
            while(temp.next!=null){
                  temp=temp.next;
            }
            temp.next=newNode;
            return head;

      }
    public static void main(String[] args) {
        ListNode l1=null;
        int[] arr1 = {9,9,9,9,9,9,9};
        for(int i=0; i<arr1.length; i++){
            l1=insertAtEnd(arr1[i],l1);
        }
        ListNode l2=null;
        int[] arr2 = {9,9,9,9};
        for(int i=0; i<arr2.length; i++){
            l2=insertAtEnd(arr2[i],l2);
        }
        ListNode res = addNumber(l1, l2);

        while(res!=null){
            System.out.print(res.val+" ");
            res=res.next;
        }

        
    }
}