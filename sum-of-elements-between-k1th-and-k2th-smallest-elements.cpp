#include<bits/stdc++.h>
using namespace std;

long long findKthSmallest(long long nums[], long long N,  long long k) {
        priority_queue<long long>q;
        for(long long i=0;i<N;i++){
            q.push(nums[i]);
            if(q.size()>k) q.pop();
        }
        return q.top();
        
    }
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        // Your code goes here
        long long  x = findKthSmallest(A,N,K1);
        long long y = findKthSmallest(A,N,K2);
        long long ans=0;
        for(long long i=0;i<N;i++){
            if(A[i]>x && A[i]<y){
                ans+=A[i];
            }
        }
        return ans;
        
    }