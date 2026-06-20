class MergeList{
      public static ListNode mergeSortedList(ListNode head1, ListNode head2){
            ListNode dummy = new ListNode(0);
            ListNode temp = dummy;
            while(head1!=null && head2!=null){
                  if(head1.val <= head2.val){
                        temp.next = head1;
                        head1 = head1.next;          
                  }
                  else{
                        temp.next = head2;
                        head2 = head2.next;                      
                  }
                  temp = temp.next;
                  
            }
            if(head1!=null) temp.next = head1;

            if(head2!=null) temp.next = head2;
            return dummy.next;
            
      }

      public static void main(String[] args) {
            ListNode l1=new ListNode(0);
            ListNode tail1=l1;
            int[] arr1 = {1,2,4};
            for(int i=0; i<arr1.length; i++){
                  tail1.next = new ListNode(arr1[i]);
                  tail1=tail1.next;
            }
            ListNode l2=new ListNode(0);
            ListNode tail2=l2;
            int[] arr2 = {1,3,4};
            for(int i=0; i<arr2.length; i++){
                  tail2.next = new ListNode(arr2[i]);
                  tail2=tail2.next;
            }
            l1=l1.next;
            l2=l2.next;

            ListNode res = mergeSortedList(l1,l2);

            while(res!=null){
                  System.out.print(res.val+" ");
                  res = res.next;
            }
      }
}