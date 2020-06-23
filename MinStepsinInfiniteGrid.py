class Solution:
    # @param A : list of integers
    # @param B : list of integers
    # @return an integer
    def coverPoints(self, A, B):
        n=len(A)
        ans=0
        for i in range(n-1):
            ans=ans+max(abs(A[i]-A[i+1]),abs(B[i]-B[i+1]));
        return ans    
            
