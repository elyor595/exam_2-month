#include <stdio.h>

  int main (){
	char kun;
	scanf(" %c",&kun);
	switch(kun){
	case 'e':
		printf("Monday\n Thuethday\n Wenthday\n Thirthday\n Friday\n Sturday\n Sunday\n");break;
	case 'u':
		printf("Dushanba\n Seshanba\n Chorshanba\n Payshanba\n Juma\n Shanba\n Yakshanba\n"); break;
	default:
		printf("Bunaka xafta kuni,there is no such day of the week"); break;

	}
   return 0;
}
