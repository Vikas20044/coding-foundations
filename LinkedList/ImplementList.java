class ImplementList{
      public static ListNode createNode(int val,ListNode head){
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
      public static void displayNode(ListNode head){
            if(head==null){
                  System.out.println("List is empty");
                  return;

            }
            ListNode temp=head;
            while(temp!=null){
                  System.out.print(temp.val+" ");
                  temp=temp.next;
            }

      }
      public static void main(String[] args) {
            ListNode head=null;

            //Create Node    
            head=createNode(10,head);
            head=createNode(20,head);
            head=createNode(30,head);
            head=createNode(40,head);
            head=createNode(50,head);


            //display
            displayNode(head);

      
      }
}