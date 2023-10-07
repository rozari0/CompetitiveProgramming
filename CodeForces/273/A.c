#include <stdio.h>

int main(){
	int n,sure[3],sum_sure,sum=0;
	scanf("%d",&n);
	if(n<=1000 && n>=1){
		for (int i=n;i!=0;i--){
		scanf("%d %d %d",&sure[0],&sure[1],&sure[2]);
		sum_sure = sure[0]+sure[1]+sure[2];
		if(sum_sure>=2){
			sum++;
		}
		}
		printf("%d\n",sum);
	}
}
