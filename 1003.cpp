#include <iostream>
#include <vector>
using namespace std;

struct node{
	int sum,start=0,end=0;
};

int main(){
	int n,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		vector<int> a(m);
		vector<node>dp(m);
		for(int j=0;j<m;j++) scanf("%d",&a[j]);
		node tmp;
		tmp.sum=a[0],tmp.start=0,tmp.end=0;
		dp[0]=tmp;
		node Max;
		Max.sum=dp[0].sum;
		Max.start=Max.end=0;
		for(int j=1;j<m;j++){
			if(dp[j-1].sum+a[j]>=a[j]){
				tmp.sum=dp[j-1].sum+a[j];
				tmp.start=dp[j-1].start;
				tmp.end=j;
				dp[j]=tmp;
			}else{
				dp[j].sum=a[j];
				dp[j].start=j;
				dp[j].end=j;
			}
			if(dp[j].sum>Max.sum){
				Max.sum=dp[j].sum;
				Max.start=dp[j].start;
				Max.end=dp[j].end;
			}
		}
		printf("Case %d:\n",i+1);
		printf("%d %d %d\n",Max.sum,Max.start+1,Max.end+1);
		if(i!=n-1) printf("\n");
	}
	system("pause");
	return 0;
}
