/*

				Name: Gourav Singh
				https://www.linkedin.com/in/gouravsingh2580/


*/


#include <bits/stdc++.h>

using namespace std;
int balancedBTs(int h) {

	if (h==0)
	{
		return 1;
	}
	if (h==1)
	{
		return 1;
	}

	long long x = balancedBTs(h-1)%1000000007;
	long long y = balancedBTs(h-2)%1000000007;
    long long temp = (long long)(((2*x)%1000000007)*(y%1000000007))+(long long)((x%1000000007)*(x%1000000007));

	long long ans = 0;
	ans += ((temp%1000000007))%(1000000007);
  	
  	return ans;


}

int main( int argc , char ** argv )
{
	ios_base::sync_with_stdio(false) ; 
	cin.tie(NULL) ; 
	
	int h;
    cin >> h;
    int ans = balancedBTs(h);
    cout << ans << endl;


	return 0 ; 



}
