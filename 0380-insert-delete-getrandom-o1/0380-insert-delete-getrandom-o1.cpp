class RandomizedSet {
public:
    vector<int>v;
    unordered_map<int,int>mp;
    RandomizedSet() {
        
    }
    
    bool insert(int val) 
    {
        if(mp.find(val)!=mp.end()) //if present
            return false;
        //if not present
        v.push_back(val);
        mp[val]=v.size()-1;
        return true;
    }
    
    bool remove(int val) 
    {
        if(mp.find(val)==mp.end()) //if not present
            return false;
        
        //if present
        mp[v.back()]=mp[val];
        swap(v.back(),v[mp[val]]);
        v.pop_back();
        mp.erase(val);
        return true;
        
        
    }
    
    int getRandom() 
    {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */