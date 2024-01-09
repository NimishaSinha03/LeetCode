// class Solution {
// public:
//     int maxCount(vector<int>& banned, int n, int maxSum) {
//         int count=0;
//         int sum=0;
//         int k=1;
//         sort(banned.begin(),banned.end());
//         for(int i=0;i<n;i++){
//             if(k!=banned[i]&&sum<=maxSum){
//                 // k++;
//                 sum+=k;
//                 count++;
//             }
//             k++;
//         }
//         return count;
//     }
// };

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
         //in the que it is not mentioned that "banned" array contains distinct elements or not so I made a map for it
        map<int, int> mp; 
        int sum = 0;
        int count = 0;
        
        for(auto it : banned) mp[it]++;
        
        for(int i=1; i<=n; i++){
            //for every int from 1-n we'll check whether it is in banned array or not & it's sum less than maxSum or not
            if((mp.find(i) == mp.end()) && sum+i <= maxSum){
                sum += i;
                count++;
            }
        }
        return count;
    }
};