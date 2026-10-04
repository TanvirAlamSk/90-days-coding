#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,l,h,mid,ans;
	cin>>t;
	
	while(t--){
		cin>>n;
		l=1,h=n,ans=1;
		while(l<=h){
			mid=(l+h)/2;
			
			if(mid*mid<n){
				ans=mid;
				l=mid+1;
			}else{
				h=mid-1;
			}
			
		}
		cout<<ans*ans<<endl;
	}
	
	return 0;
}

