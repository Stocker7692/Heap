#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>>q;
        for(auto it:points){
            q.push({it[0]*it[0]+it[1]*it[1],{it[0],it[1]}});
            if(q.size()>k) q.pop();
        }
        vector<vector<int>>ans;
        while(!q.empty()){
            ans.push_back({q.top().second.first,q.top().second.second});
            q.pop();
        }
        return ans;
        
    }
};