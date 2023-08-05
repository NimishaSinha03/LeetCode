class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int>q;
        sort(deck.begin(),deck.end());
        int i=0;
        while(i<deck.size()){
            q.push(i);
            i++;
        }
        vector<int>ans(deck.size(),0);
        for(int j=0;j<deck.size();j++){
            ans[q.front()]=deck[j];
            q.pop();
            q.push(q.front());
            q.pop();
        }
        return ans;
    }
};