public class LinkedList{
      public static class ListNode{
            public int val;
            public ListNode next;
            public ListNode(int val){
                  this.val=val;
                  this.next = null;
            }
            
      }
      public static ListNode createNode(int[] arr){
            if(arr.length == 0) return null;

            ListNode head = new ListNode(arr[0]);
            ListNode cur=head;
            for(int i=1; i<arr.length; i++){
                  cur.next = new ListNode(arr[i]);
                  cur = cur.next;

            }
            return head;
      }
      public static void printList(ListNode head){
            ListNode cur= head;

            while(cur!=null){
                  System.out.println(cur.val+" ");
                  cur=cur.next;
            }
      }
}
