#include <stdio.h>

int main() {
	int n1;
	int n2;
	printf("n1=<Enter num1>\nn2=<Enter num2>\n");
	scanf("%d \n %d",&n1 , &n2);
	if(n1>n2){
		printf("n1 is more n2");
	}
  	else{
  		printf("n2 is more n1");
	  }
}
