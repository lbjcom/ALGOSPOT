#include <stdio.h>
#include <stdlib.h>



int compare(const void* a, const void* b) {
	char *x = (char*)a;
	char *y = (char*)b;
	if(x[0] > y[0]) {
		return 1;
	} else if(x[0] < y[0]) {
		return -1;
	} else {
		if(x[1] > y[1]) {
			return 1;
		} else if(x[1] < y[1]) {
			return -1;
		} else {
			return 0;
		}
	}
}

int main(int argc, char *argv[]) {
	int N = 0;

	scanf("%d", &N);	
	for(int i = 0; i < N; i++) {
		
		char s[1001];

		scanf("%s", s);

		int k = 0;
		while(s[k] != '\0') {
			k++;
		}
		qsort(s, k/2, 2, compare);

		printf("%s\n", s);

		
	}
}