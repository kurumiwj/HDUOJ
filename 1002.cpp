#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string add(string a,string b){
	string sum;
	int i=a.size()-1,j=b.size()-1,carry=0;
	for(;i>=0&&j>=0;i--,j--){
		int tmp=a[i]-'0'+b[j]-'0'+carry;
		if(tmp>=10)
			carry=1;
		else
			carry=0;
		sum+=to_string(tmp%10);
	}
	while(i>=0){
		int tmp=a[i]-'0'+carry;
		sum+=to_string(tmp%10);
		carry=tmp/10;
		i--;
	}
	while(j>=0){
		int tmp=b[j]-'0'+carry;
		sum+=to_string(tmp%10);
		carry=tmp/10;
		j--;
	}
	if(carry>0) sum+="1";
	reverse(sum.begin(),sum.end());
	return sum;
}

int main(){
	int t;
	string a,b;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		cin>>a>>b;
		printf("Case %d:\n",i);
		cout<<a<<" + "<<b<<" = "<<add(a,b)<<endl;
//		printf("%d %d %d\n",a.size(),b.size(),add(a,b).size());
		if(i!=t) printf("\n");
	}
	return 0;
}
