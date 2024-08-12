class KthLargest {
public:
    int K;
    priority_queue<int, vector<int>,greater<int>>pq;
    KthLargest(int k, vector<int>& nums){
        K=k;
        for(auto&it:nums){
            pq.push(it);
            if(pq.size()>k)
                pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
            if(pq.size()>K)
                pq.pop();
        
        return pq.top();
    }
    
    //https://www.youtube.com/watch?v=3Bge5OCcXUk ---> legend as always
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */