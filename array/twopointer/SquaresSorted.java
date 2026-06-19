class SquaresSorted{
      public static int[] squaresSorted(int[] nums){
            int[] result = new int[nums.length];
            int l=0,r=nums.length-1;
            int idx=r;
      
            while(l<=r){
                  if(Math.abs(nums[r])>=Math.abs(nums[l]))  result[idx--] = nums[r]*nums[r--];

                  else result[idx--] = nums[l]*nums[l++];
            }
        

            return result;
      }
      public static void main(String[] args) {
          int[] n = {-4,-1,0,3,10};
          int[] res = squaresSorted(n);

          for(int x: res){
            System.out.println(x+" ");
          }
      }
}