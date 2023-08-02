class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        int count=0;
        // vector<int>v;
        sort(special.begin(),special.end());
        // for(int i=bottom;i<=top;i++){
        //     if(i!=special[j])count++;
        //     else {v.push_back(count);j++;count=0;}
        // }
        // return *max_element(v.begin(),v.end());
        for(int i=0;i<special.size();i++){
            if(i==0)count=max(count,special[i]-bottom);
           else  count=max(count,special[i]-special[i-1]-1);
        }
        count=max(count,top-special[special.size()-1]);
        return count;
    }
};