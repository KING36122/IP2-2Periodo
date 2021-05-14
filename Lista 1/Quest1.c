#include<stdio.h>
#define x 100
int main(){
	int v[x],i;
	for(i=0;i<x;i++){
		if(i%2==0){
			v[i]=0;
		}else if(i%2!=0){
			v[i]=1;
		}
	}
	for(i=0;i<x;i++){
		printf("%d\n",v[i]);
	}
	return 0;
}
