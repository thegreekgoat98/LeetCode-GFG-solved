class SmallestInfiniteSet {
public:
    set<int>S;
    SmallestInfiniteSet() 
    {
        for(int i=1;i<=1001;++i)
            S.insert(i);
    }
    
    int popSmallest() 
    {
        int smallest=*S.begin();
        S.erase(smallest);
        
        return smallest;
    }
    
    void addBack(int num) 
    {
        S.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */