class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int size=arr.size()/2;
        int count=0;
        priority_queue<int>q;
        map<int ,int>mp;
        for(auto it:arr)mp[it]++;
        for(auto i:mp)q.push(i.second);
        while(!q.empty()){
            auto top=q.top();
            q.pop();
            if(size>0){size-= top;
            count++;}
            else break;
        }
        return count;
    }
};