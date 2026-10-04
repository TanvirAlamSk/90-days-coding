#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
    cin >> n;
    
    int a = n / 4;
    int b = (n - 2 * a) / 2;
    
    int area = a * b;
    cout << area << endl;
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--){
		solve();
	}
}




