import java.util.HashMap;
class TwoSum{
      public static int[] twoSum(int[] nums,int target){
            int[] result = new int[2];
            HashMap<Integer,Integer> seen = new HashMap<>();
            for(int i=0; i<nums.length; i++){
                  int num = target - nums[i];

                  if(seen.containsKey(num)){
                        result[0] = seen.get(num);
                        result[1] = i;
                        break;
                  }

                  seen.put(nums[i],i);
            }

            return result;
      }

      public static void main(String[] args) {
          int[] nums={2,3,15,6};

          int[] res = twoSum(nums, 9);

          for(int x : res) System.out.print(x+" ");


      }
}