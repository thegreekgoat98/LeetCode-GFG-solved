class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        mp = dict()
        s1_words = s1.split(" ")
        for word in s1_words:
            if word in mp:
                mp[word] += 1
            else:
                mp[word] = 1
        
        s2_words = s2.split(" ")
        for word in s2_words:
            if word in mp:
                mp[word] += 1
            else:
                mp[word] = 1
        
        result = list()
        for word, freq in mp.items():
            if freq == 1:
                result.append(word)
                
        return result
                