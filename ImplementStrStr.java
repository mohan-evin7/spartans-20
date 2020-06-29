public class Solution {
    // DO NOT MODIFY THE LIST. IT IS READ ONLY
    public int strStr(final String A, final String B) {
        if(B.isEmpty())
        return -1;
        if(A.isEmpty()&&B.isEmpty())
        {
            return -1;
        }
        if(A.length()<B.length())
        return -1;
        int n1=A.length();
        int n2=B.length();
        for(int i=0;i<n1-n2+1;i++)
        {
            if(A.substring(i,i+n2).equals(B))
            {
                return i;
            }
        }
        return -1;
        
    }
}
