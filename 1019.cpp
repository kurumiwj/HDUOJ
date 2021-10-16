#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

typedef long long int ll;

ll gcd(ll a,ll b){
	if(b==0) return a;
	return gcd(min(a,b),max(a,b)%min(a,b));
}

//ll LCM(ll a,ll b){
//	ll tmp=gcd(a,b);
//	return tmp*(a/tmp)*(b/tmp);
//}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int total;
		scanf("%d",&total);
		vector<ll> v(total);
		for(int i=0;i<total;i++)
			scanf("%lld",&v[i]);
		sort(v.begin(),v.end());
		ll lcm=v[0];
		for(int i=1;i<total;i++){
			lcm=lcm/gcd(lcm,v[i])*v[i];
		}
		printf("%lld\n",lcm);
	}
	system("pause");
	return 0;
}
