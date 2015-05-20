#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int N = 0;

	scanf("%d", &N);	
	for(int i = 0; i < N; i++) {
		
		char s[101];

		scanf("%s", s);

		int k = 0;
		while(s[k] != '\0') {
			k++;
		}

		int j = 0;

		for(int l = 0; l < k; l+=2) {
			printf("%c", s[l]);
		}

		for(int l = 1; l < k; l+=2) {
			printf("%c", s[l]);
		}

		printf("\n");

		
	}
}