public class addTwoNumbers{
      public static ListNode addNumber(ListNode l1, ListNode l2){
            ListNode head=null;
            boolean flag=false;
            ListNode t1=l1,t2=l2;
            int add;
            while(t1!=null && t2!=null){
                  if(flag){
                        add = t1.val + t2.val+1;
                                             
                  }
                  else{
                        add = t1.val+t2.val;
                  }
                  
                  if(add>9){
                        flag=true;
                        add=add%10;
                        head=insertAtEnd(add, head);
                       
                  }
                  else{
                        head=insertAtEnd(add, head);
                        flag=false;
                  }
                  t1=t1.next;
                  t2=t2.next;
            }
            while(t1!=null){
                  add=t1.val;
                  if(flag){
                        add=add+1;
                        if(add>9){
                              flag=true;
                              add=add%10;
                              head=insertAtEnd(add, head);
                        }
                        else{
                              head=insertAtEnd(add, head);
                              flag=false;
                        }
                  }
                  else{
                        head=insertAtEnd(add, head);
                  }
                  
                  t1=t1.next;

            }
            while(t2!=null){
                  add=t2.val;
                  if(flag){
                        add=add+1;
                        if(add>9){
                              flag=true;
                              add=add%10;
                              head=insertAtEnd(add, head);
                        }
                        else{
                              head=insertAtEnd(add, head);
                              flag=false;
                        }
                  }
                  else{
                        head=insertAtEnd(add, head);
                  }
                  
                  t2=t2.next;
            }
            if(t1==null && t2==null && flag==true){
                  head=insertAtEnd(1, head);
            }
            return head;


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