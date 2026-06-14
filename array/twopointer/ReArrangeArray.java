class ReArrangeArray{
      static int[] reArrangeArray(int[] nums){
            int[] result = new int[nums.length];
            int p=0,n=1;
            for(int i=0; i<nums.length; i++){
                  if(nums[i]>0){
                        nums[p]=nums[i];
                        p+=2;
                  }
                  else{
                        nums[n]=nums[i];
                        n+=2;
                  }
            }
            

            
            return result;
      }
      public static void main(String[] args) {
          int[] nums={3,1,-2,-5,2,-4};
          int[] res=reArrangeArray(nums);
          for(int x: res){
            System.out.print(x+" ");
          }

      }
}