#include <stdio.h>
int main(){
	
	int num;
	printf("enter your number");
	scanf("%d",&num);
	
	if(num %2==0){              //ex:- 3%2==0
		printf("even");
	}
	else{
		printf("odd");
	}
	return 0;
}