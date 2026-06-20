class MergeArray{

      public static int[] mergeSortedArray(int[] nums1, int m, int[] nums2, int n){
            

            int idx = m+n-1;
            m--;
            n--;
            while(m>=0 && n>=0){
                  if(nums1[m]>=nums2[n]) nums1[idx--] = nums1[m--];

                  else nums1[idx--] = nums2[n--];
            }

            return nums1;
      }
      public static void main(String[] args) {
          int[] n1= {1,2,3,0,0,0}, n2= {2,5,6};

          int m = 3, n =3 ;

          int[] res = mergeSortedArray(n1, m, n2, n);

          for(int x : res){
            System.out.println(x+" ");
          }
      }
}