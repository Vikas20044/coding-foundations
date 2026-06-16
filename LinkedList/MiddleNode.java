public class MiddleNode{

    public static ListNode middleNode(ListNode head){
        ListNode slow = head;
        ListNode fast= head;
        while(fast!=null && fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
        return slow;

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
        ListNode head=null;
        int[] arr = {1,2,3,4,5};
        for(int i=0; i<arr.length; i++){
            head=insertAtEnd(arr[i],head);
        }
        ListNode temp = middleNode(head);
        while(temp!=null){
            System.out.println(temp.val);
            temp=temp.next;
        }
    }
}