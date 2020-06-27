class Solution {
    
    int start = 0;
    int maxLen = -1;
    
    public String longestPalindrome(String s) {
        
        if(s.length()<2) return s;
        
        for(int i=0; i<s.length(); i++){
            findP(s,i,i);
            findP(s,i,i+1);
        }
        return s.substring(start,start+maxLen);
    }
    
    public void findP(String s, int j, int k){
        while((j>=0)&&(k<=s.length()-1)&&(s.charAt(j) == s.charAt(k))){
            j--;
            k++;
        }
        int len = k-j-1;
        if(len>maxLen){
            maxLen = Math.max(maxLen,len);
            start=j+1;
        }
    }
}
