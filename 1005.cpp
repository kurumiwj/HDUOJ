#include <iostream>
#include <vector>
using namespace std;

//map<int,int> result;
//不能用递归，否则爆内存
//int func(int a,int b,int n){
//	if(n==1||n==2) return 1;
//	else{
//		return (a*(result[n-1]>0?result[n-1]:func(a,b,n-1))+b*(result[n-2]>0?result[n-2]:func(a,b,n-2)))%7;
//	}
//}

int main(){
	int a,b,n;
	vector<int> f(49);
	f[0]=f[1]=1;
	while(true){
		scanf("%d%d%d",&a,&b,&n);
		if(a==0&&b==0&&n==0) break;
		for(int i=2;i<48;i++){
			f[i]=(a*f[i-1]+b*f[i-2])%7;
		}
		printf("%d\n",f[(n-1)%48]);
	}
	return 0;
}
