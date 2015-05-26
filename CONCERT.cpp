#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	int N = 0;

	scanf("%d", &N);
	for(int i = 0; i < N; i++) {

		int vs = 0;
		int vm = 0;
		int L = 0;

		int array[50];

		int answer[51][1001];
		for(int j = 0; j < 51; j ++) {
			for(int k = 0; k < 1001; k++) {
				answer[j][k] = 0;
			}
		}

		scanf("%d %d %d", &L, &vs, &vm);

		for(int j = 0; j < L; j++) {
			scanf("%d", &array[j]);
		}

		answer[0][vs] = 1;
		for(int j = 0; j < L; j++) {
			for(int k = 0; k < 1001; k++) {
				if(answer[j][k] == 1) {
					if(((k+array[j]) >= 0) && ((k+array[j]) <= vm)) {
						answer[j+1][k+array[j]] = 1;
					}

					if(((k-array[j]) >= 0) && ((k-array[j]) <= vm)) {
						answer[j+1][k-array[j]] = 1;
					}
				}
			}
		}

		int aa = -1;
		for(int j = 0; j < 1001; j++) {
			if(answer[L][j] == 1) {
				aa = j;
			}
		}

		printf("%d\n", aa);

	}
}