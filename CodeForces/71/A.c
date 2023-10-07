#include <stdio.h>
#include <string.h>
int main(){
	int n;
	char Text[1000];
	scanf("%d",&n);
	if (n>=1 && n<=100){
		for (int i=n;i!=0;i--){
			scanf("%s",&Text);
			int len = strlen(Text);
			if (len>10){
				printf("%c%d%c\n",Text[0],len-2,Text[len-1]);
			}
			else{
				printf("%s\n",Text);
			}
		}
	}
}
