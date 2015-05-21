#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	int N = 0;

	scanf("%d", &N);
	for(int i = 0; i < N; i++) {
		int count = 0;

		scanf("%d", &count);

		int numbers[500] = {0,};

		for(int j = 0; j < count; j++) {
			scanf("%d", &numbers[j]);
		}

		int length = 1;

		int sorted[500];

		sorted[0] = numbers[0];

		for(int j = 1; j < count; j++) {
			int isSet = 0;
			for(int k = 0; k < length; k++) {
				if(numbers[j] <= sorted[k]) {
					sorted[k] = numbers[j];
					isSet = 1;
					break;
				}
			}
			
			if(isSet == 0) {
				sorted[length] = numbers[j];
				length++;
			}
			
		}

		printf("%d\n", length);



	}
}