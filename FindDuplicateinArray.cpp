public class Solution {
    // DO NOT MODIFY THE ARGUMENTS WITH "final" PREFIX. IT IS READ ONLY
    public int repeatedNumber(final int[] A) {
        HashSet<Integer>map=new HashSet<>();
        for(int i:A)
        {
            if(!map.contains(i))
            {
                map.add(i);
            }
            else{
                return i;
            }
        }
        return -1;
    }
}
