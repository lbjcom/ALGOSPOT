#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int N = 0;

	scanf("%d", &N);	
	for(int i = 0; i < N; i++) {
		
		int k = 0;
		char s[100];

		scanf("%d %s", &k, s);

		printf("%d ", i+1);

		int j = 0;

		while(s[j] != '\0') {
			if((j+1) == k) {
				j++;
				continue;
			}

			printf("%c", s[j]);
			j++;
		}

		printf("\n");
		
	}
}