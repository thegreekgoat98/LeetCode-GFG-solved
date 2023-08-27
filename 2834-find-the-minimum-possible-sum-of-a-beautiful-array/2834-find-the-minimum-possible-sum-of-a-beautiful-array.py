class Solution(object):
    def minimumPossibleSum(self, n, target):
        """
        :type n: int
        :type target: int
        :rtype: int
        """
        arr=set()
        val=1
        while len(arr)<n:
            rem=target-val
            if rem not in arr:
                arr.add(val)
            val+=1
        
        return sum(arr)
        