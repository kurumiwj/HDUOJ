#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	const int up=6,down=4,stay=5;
	while(true){
		int total=0;
		scanf("%d",&n);
		if(n==0) break;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			scanf("%d",&v[i]);
			if(i==0) total+=v[i]*up+stay;
			else{
				if(v[i]>v[i-1]) total+=(v[i]-v[i-1])*up+stay;
				else total+=(v[i-1]-v[i])*down+stay;
			}
		}
		printf("%d\n",total);
	}
	system("pause");
	return 0;
}
