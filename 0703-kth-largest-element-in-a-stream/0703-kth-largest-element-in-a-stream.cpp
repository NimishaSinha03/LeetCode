class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>pq;
    int j;
    KthLargest(int k, vector<int>& nums) {
        j=k;
        for( auto i:nums){
            pq.push(i);
        
        if(pq.size()>k) pq.pop();
    }
    }
    int add(int val) {
        pq.push(val);
        if(pq.size()>j)pq.pop();
            return pq.top();
    }
};
/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */