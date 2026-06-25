class SubArraySumK{
      public static int subArraySum(int[] nums, int k){
            int res = 0;
            
            for(int i=0; i<nums.length; i++){
                  int csum = 0;
                  for(int j=i; j<nums.length; j++){
                        csum+=nums[j];
                        if(csum==k) res++;
                  }
            }
            return res;

      }
      public static void main(String[] args) {
          int[] nums={1,1,1};
          int k=3;

          System.out.println(subArraySum(nums, k));




      }
}