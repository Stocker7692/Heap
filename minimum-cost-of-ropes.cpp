#include<bits/stdc++.h>
using namespace std;

long long minCost(long long arr[], long long n) {
        // Your code here
       
        priority_queue<long long,vector<long long>,greater<long long>>q;
        for(int i=0;i<n;i++){
            q.push(arr[i]);
        }
        long long cost=0;
        while(q.size()>1){
            long long  a = q.top();
            q.pop();
            long long  b = q.top();
            q.pop();
            cost+=a+b;
            q.push(a+b);
        }
        return cost;
        
    }