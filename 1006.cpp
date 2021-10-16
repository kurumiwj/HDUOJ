//´ý¸Ä°æ
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int d;
	const int totalSecond=43200;
	while(true){
		scanf("%d",&d);
		if(d==-1) break;
		int cnt=0;
		d/=6;
		for(int i=0;i<12;i++){
			for(int j=0;j<60;j++){
				if(abs(j-i*5)<d) continue;
				else{
					for(int k=0;k<60;k++){
						if(abs(k-i*5)>=d&&abs(j-k)>=d){
							cnt++;
						}
					}
				}
			}
		}
		printf("%.3lf\n",cnt*1.0/totalSecond*100);
	}
	system("pause");
	return 0;
}
