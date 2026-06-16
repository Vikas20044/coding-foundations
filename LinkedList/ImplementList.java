class ImplementList{
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

      public static ListNode insertAtBeg(int val,ListNode head){
            ListNode newNode = new ListNode(val);
            if(head==null){
                  head=newNode;
                  return head;
            }
            newNode.next=head;
            head=newNode;
            return head;
      }
      public static void main(String[] args) {
            ListNode head=null;

            //Create Node    
            head=insertAtEnd(10,head);
            head=insertAtEnd(20,head);
            head=insertAtEnd(30,head);
            head=insertAtEnd(40,head);
            head=insertAtEnd(50,head);


            //display
            ListUtils.displayNode(head);
            head=insertAtBeg(5, head);
            ListUtils.displayNode(head);
      
      }
}