class Solution {
public:
    bool checkPerfectNumber(int num) 
    {
        unordered_set<long long>S={6,28,496,8128,33550336,8589869056,137438691328};
        return S.count(num);
    }
};