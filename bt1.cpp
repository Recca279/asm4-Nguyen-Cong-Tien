#include <stdio.h>
int main(){
	int n, cnt=0;
	printf("Nhap n: ");
    scanf("%d", &n);

    while(cnt<n){
    	if(cnt%2==1){
    		printf("cnt=%d",cnt);
    	}
    cnt = cnt+1;
    }
}