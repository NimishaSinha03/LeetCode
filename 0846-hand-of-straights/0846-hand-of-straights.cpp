class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int gs) {
        int n=hand.size();
        if(n%gs!=0)return false;
        // sort(hand.begin(),hand.end());
        priority_queue<int, vector<int>,greater<>>pq;
        unordered_map<int, int>m;
        for(auto x:hand)m[x]++;
        for(auto p:m)pq.push(p.first);
        while(!pq.empty()){
            int top=pq.top();
            for(int i=top;i<top+gs;i++){
                if(m.find(i)==m.end())return false;
                m[i]--;
                if(m[i]==0){
                    // if(i!=pq.top()) return false;
                    pq.pop();
                }
            }
        }
        return true;
        
    }
};