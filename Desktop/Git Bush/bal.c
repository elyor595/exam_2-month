#include <stdio.h>

int main (){

	int son,bal;
	scanf("%d",&son);
	switch (son){
	case 100:
		printf("Grant\n");break;
	case 60 ... 99:
		printf("Qantrakt\n");break;
	case 35 ... 59:
		printf("Super qantrakt\n");break;
	case 0 ... 34:
		printf("Siz chudayam past ball olgansiz\n");
	}
   return 0;
}
