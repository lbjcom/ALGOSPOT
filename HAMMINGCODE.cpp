#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int N = 0;

	scanf("%d", &N);
	for(int i = 0; i < N; i++) {
		char code[8];

		scanf("%s", code);

		for(int j = 0; j < 8; j++) {
			code[j] -= '0';
		}

		char check1 = code[0] ^ code[2] ^ code[4] ^ code[6];
		char check2 = code[1] ^ code[2] ^ code[5] ^ code[6];
		char check3 = code[3] ^ code[4] ^ code[5] ^ code[6];
		char errorbit = (check3<<2) + (check2<<1) + check1 - 1;

		if(errorbit >= 0) {	
			code[errorbit] = code[errorbit]?0:1;
		}

		printf("%d%d%d%d\n", code[2], code[4], code[5], code[6]);

	}
}