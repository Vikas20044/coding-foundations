import java.util.HashSet;
class EqualSum{
      public static boolean findSubarrays(int[] nums) {
            HashSet<Integer> seen = new HashSet<>();

            for(int i=1; i<nums.length; i++){
                  int num = nums[i]+nums[i-1];

                  if(seen.contains(num)) return true;

                  seen.add(num);

            }

            return false;
      }

      public static void main(String[] args) {
          int[] nums={4,2,4};


          System.out.print(findSubarrays(nums)+" ");


      }
}