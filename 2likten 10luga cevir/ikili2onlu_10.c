#include <stdio.h>

int main() {

	char rakam;
	int onlusayi = 0;
	
	printf("Ikili tabanda sayi gir: \n");
	
	do {
		scanf("%c",&rakam);
		if (rakam != '0' && rakam != '1' && rakam != '\n' && rakam != '\t' && rakam != ' ') {
			printf("Gecersiz ikili sayi\n");
			return -1;
		}
		else {
			if (rakam != '\n' && rakam != '\t' && rakam != ' ')
				onlusayi = onlusayi*2 + rakam - '0';
		}
	}
	while (rakam != '\n' && rakam != '\t' && rakam != ' ');
	
	printf("Onluk tabanda sayi %d'dir\n",onlusayi);
	
	return 0;
}
