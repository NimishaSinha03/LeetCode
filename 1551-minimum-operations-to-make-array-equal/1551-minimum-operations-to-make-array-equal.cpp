class Solution {
public:
    int minOperations(int n) {
        vector<int>v;
        int sum=0;
        for(int i=0;i<n;i++){
            v.push_back((2*i)+1);
            sum+=v[i];
        }
        int avg=sum/n;
        int ans=0;
        for(int i=0;i<n;i++){
            if((avg-v[i])<0)break;
            ans+=avg-v[i];
        }
        return ans;
    }
};