#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	long long  sn = (n* (n+1) )/2; 
	long long  s2n = (n* (n+1) * ((2*n)+1))/6;
	long long  s = 0;
	long long  s2 =0;
	int x = -1, y = -1;
	for ( int i = 0 ; i < n ; i++){
		s+= arr[i];
		s2+= (long long)arr[i]*(long long)arr[i];
	}
	long long  val1 = s-sn; //x-y
	long long  val2 = (s2-s2n)/val1;
	
	 x = (val1+val2)/2;
	 y = x - val1;
    
	return {(int)y, (int)x};
}
