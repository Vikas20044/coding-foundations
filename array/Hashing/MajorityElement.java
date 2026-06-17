import java.util.HashMap;

public class MajorityElement{
      public static int majorityElement(int[] arr){
            HashMap<Integer,Integer> seen = new HashMap<>();


            for(int i=0; i<arr.length; i++){
                  seen.put(arr[i], seen.getOrDefault(arr[i], 0) + 1);

                  if(seen.get(arr[i])>arr.length/2){
                        return arr[i];
                  }
                  

            }
            return 0;


      }
      public static void main(String[] args) {
            int[] a = {2,2,1,1,1,2,2};

            System.out.println(majorityElement(a));
          
      }
}