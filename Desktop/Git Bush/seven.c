#include <stdio.h>

int main(){
	int count, total=0, input;
	scanf("%d",&count);

  	while(count > 0){

	scanf("%d",&input);

	if (input % 2==0){
		total  += input;
	}

	count--;
	printf("Juft sonlar yigindisi : %d ga teng", total);

	return 0;
}
