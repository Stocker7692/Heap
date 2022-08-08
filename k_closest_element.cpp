#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>q;
        for(int i=0;i<arr.size();i++){
            q.push({abs(x-arr[i]),arr[i]});
            if(q.size()>k) q.pop();
        }
        vector<int>v;
        while(!q.empty()){
            v.push_back(q.top().second);
            q.pop();
        }
        sort(v.begin(),v.end());
        return v;
        
    }
};