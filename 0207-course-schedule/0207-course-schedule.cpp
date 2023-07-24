class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int>ans;
        queue<int>q;
        vector<int>v[n];
        vector<int>indeg(n,0);
        for(auto it:pre){ 
            v[it[0]].push_back(it[1]);
            indeg[it[1]]++;
        }
        for(int i=0;i<n;i++){
            if(indeg[i]==0)q.push(i);
        }
        while(!q.empty()){
            int front=q.front();
            ans.push_back(front);
            q.pop();
            for(auto it:v[front]){
                indeg[it]--;
                if(indeg[it]==0)q.push(it);
            }
            
        }
        return ans.size()==n;
    }
    };
// };i blew up into smithereens 
// and spew my tiny symphonies 
// all up and a city street 
// while tryna put my mind at ease 
// like finishing this melody 
// this feels like a neccessity
// this could be the death of me
// or may be just a better me
// now come on bring the timpannies 
// and take a shot of hennesy
// i know i am not there mentally
// but you could be the remdy
// so let  me play my voilin for you