#include <stdio.h>
#include <stdlib.h>

const int H = 9;
int main(int argc, char *argv[]) {
	int N = 0;

	scanf("%d", &N);	
	for(int i = 0; i < N; i++) {
		
		int limit = 0;
		scanf("%d", &limit);
		int sum = 0;
		for(int j = 0; j < H; j++) {
			int temp = 0;
			scanf("%d", &temp);
			sum += temp;
		}
		if(sum > limit) {
			printf("NO\n");
		} else {
			printf("YES\n");
		}
		
	}
}