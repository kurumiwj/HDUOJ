#include <iostream>
using namespace std;

int main(){
	int m,n,N;
	scanf("%d\n",&N);
	for(int i=0;i<N;i++){
		int index=1;
		while(scanf("%d %d",&n,&m)&&(n!=0||m!=0)){
			int cnt=0;
			for(int a=1;a<n;a++){
				for(int b=a+1;b<n;b++){
					if((a*a+b*b+m)%(a*b)==0) cnt++;
				}
			}
			printf("Case %d: %d\n",index++,cnt);
		}
		if((i<N-1)&&N!=1)
			printf("\n");
	}
	return 0;
}
