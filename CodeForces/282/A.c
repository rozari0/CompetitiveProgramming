#include <stdio.h>
#include <string.h>

int main(){
	int n,x=0;
	char s[3];
	scanf("%d",&n);
	for (int i=n; i!=0; i--){
		scanf("%s",&s);
		if(strchr(s,'+') != NULL){
			x++;
		}
		else{
			x--;
		}
	}
	printf("%d\n",x);
}
