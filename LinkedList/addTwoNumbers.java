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

      public static void main(String[] args) {
            ListNode l1=new ListNode(0);
            ListNode tail1=l1;
            int[] arr1 = {9,9,9,9,9,9,9};
            for(int i=0; i<arr1.length; i++){
                  tail1.next = new ListNode(arr1[i]);
                  tail1=tail1.next;
            }
             ListNode l2=new ListNode(0);
            ListNode tail2=l2;
            int[] arr2 = {9,9,9,9};
            for(int i=0; i<arr2.length; i++){
                  tail2.next = new ListNode(arr2[i]);
                  tail2=tail2.next;
            }
            l1=l1.next;
            l2=l2.next;
            ListNode res = addNumber(l1, l2);

            while(res!=null){
                  System.out.print(res.val+" ");
                  res=res.next;
            }
      
      }
    
}