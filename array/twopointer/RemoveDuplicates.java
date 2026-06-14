class RemoveDuplicates{
    static int removeDuplicates(int[] nums){
        int idx=2;
        if(nums.length<2) return nums.length;
 
        for(int i=2; i<nums.length; i++){
            if(nums[i]!=nums[idx-2]){
                nums[idx++]=nums[i];
              
            }
            
        }


        return idx;
    }
    public static void main(String[] args) {
        int[] n={0,0,0,1,1,1,1,2,2,3,3};
        System.out.println(removeDuplicates(n));
    }
}