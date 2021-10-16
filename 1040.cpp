#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		vector<int> v(m);
		for(int j=0;j<m;j++)
			scanf("%d",&v[j]);
		sort(v.begin(),v.end());
		for(int j=0;j<m;j++){
			if(j!=0) printf(" ");
			printf("%d",v[j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
