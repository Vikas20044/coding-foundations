class TwoSumII{
      public static int[] twoSumII(int[] nums, int target){
            int[] res = new int[2];
            int l=0,r=nums.length-1;
            while(l<r){
                  if(nums[l]+nums[r]==target){
                        res[0]=l;
                        res[1]=r;
                        return res;
                  }
                  if((nums[l]+nums[r])>target) r--;
                  else l++;
            }
            return res;
      }
      public static void main(String[] args) {
            int[] n ={2,7,11,15};
            int[] res =twoSumII(n,9);
            for(int x: res) System.out.print(" "+x);
            
      }
}