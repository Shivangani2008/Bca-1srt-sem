# include <stdio.h>
int main(){
	int marks;
	printf("enter your marks");
	scanf("%d",&marks);
	
	if(marks>=35&& marks<=50){
		printf("grade c");
	}
	else if(marks >=50 && marks<=70){
		printf("grade b");
	}
	else if(marks>=70 && marks<=90){
		printf("grade a");
	}
	else if(marks>=90 && marks<=100){
		printf("grade a++");
	}
	else{
		printf("fail");
	}
	return 0;
	
}