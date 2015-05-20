#include <stdio.h>
#include <inttypes.h>

int main(int argc, char *argv[]) {
	int N = 0;
	
	int x[2][3];

	int y[2];

	scanf("%d", &N);
	for(int i = 0; i < N; i++) {
		scanf("%d %d", &x[0][0], &x[1][0]);
		scanf("%d %d", &x[0][1], &x[1][1]);
		scanf("%d %d", &x[0][2], &x[1][2]);
		
		for(int j = 0; j < 2; j++) {
			if(x[j][0] == x[j][1]) {
				y[j] = x[j][2];
				continue;
			}

			if(x[j][1] == x[j][2]) {
				y[j] = x[j][0];
				continue;
			}

			if(x[j][0] == x[j][2]) {
				y[j] = x[j][1];
				continue;
			}
		}

		printf("%d %d\n", y[0], y[1]);

	}
}