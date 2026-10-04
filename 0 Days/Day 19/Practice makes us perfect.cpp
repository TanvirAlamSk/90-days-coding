#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[4],ans=0,i;
	
	for(i=0;i<4;i++){
		cin>>arr[i];
		if(arr[i]>=10){
			ans++;
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}

