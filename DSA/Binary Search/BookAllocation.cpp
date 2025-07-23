#include <bits/stdc++.h>
//code won't run(as copied from my codestudio).Just look at the concept.
//Painter's partition is same as book allocation. totally same concept.

bool isPossibleSolution(int n, int m, vector<int> time,long long mid){
	long long sum=0;
	long long k=1;
	for(long long i=0;i<=m-1;i++){
		if((sum+time[i])<=mid){
			sum+=time[i];
		}
		else{
			k++;
            if (k > n || time[i] > mid) {
                return false;
            }
            sum=time[i];
		}
	}
	return true;
}

long long binarySearch(int n, int m, vector<int> time,long long p){
	long long start=0;
	long long end=p;
	long long ans=-1;
	while(start<=end){
		long long mid=start+(end-start)/2;
		if(isPossibleSolution(n,m,time,mid)){
			ans=mid;
			end=mid-1;
		}
		else{
			start=mid+1;
		}

	}
	return ans;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
	long long p=accumulate(time.begin(),time.end(),(long long)0);

	return binarySearch(n,m,time,p);
}