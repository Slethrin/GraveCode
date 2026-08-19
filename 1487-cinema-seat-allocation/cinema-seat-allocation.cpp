class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& v) {
        unordered_map<int,vector<int>> m ;
        int ans =0 ;
        vector<vector<int>> allowed ={{2,3,4,5},{4,5,6,7},{6,7,8,9}};
        for(int i =0;i<v.size();i++){
            m[v[i][0]].push_back(v[i][1]);
        }
        vector<int> ind ;
        for(auto x :m){
            ind.push_back(x.first);
            vector<int> d = x.second;
            unordered_map<int,int> t;
            for(int i =0;i<d.size();i++){
                t[d[i]]++;
            }
            int first = 0 ;
            for(int i =0;i<3;i++){
                int f =0;
                for(int j=0;j<4;j++){
                    if(t.find(allowed[i][j])!=t.end()){
                        f=1;
                        break;
                    }
                }
                if(f==0){
                    if(i<2){
                        i++;
                    }
                    
                    cout<<x.first<<" ";
                    ans++;
                }
            }
        }
        ind.push_back(0);
        ind.push_back(n+1);
        sort(ind.begin(),ind.end());
        for(int i =1;i<ind.size();i++){
            ans+=(ind[i]-ind[i-1]-1)*2;
        }
        return ans ;
    }
};