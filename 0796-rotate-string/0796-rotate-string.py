class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        if len(s)!=len(goal):
            return False;
        s=s*2
        print(s)
        return goal in s
    

    # https://www.youtube.com/watch?v=6fFWixNh4rg  --> 2nd method