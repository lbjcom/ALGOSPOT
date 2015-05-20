#include <stdio.h>
#include <inttypes.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int N = 0;
	
	
	
	scanf("%d", &N);
	for(int i = 0; i < N; i++) {
	
		char left[101];
		char right[101];

		int leftcount[128 - '0'] = {0,};
		int rightcount[128 - '0'] = {0,};

		scanf("%s %s", left, right);

		if(strcmp(left, right) == 0) {
			printf("No.\n");
			continue;
		}

		int k = 0;
		while(left[k] != '\0') {
			leftcount[left[k]-'0']++;
			k++;
		}

		k = 0;
		while(right[k] != '\0') {
			rightcount[right[k]-'0']++;
			k++;
		}

		int isNo = 0;
		for(k = 0; k < 128 - '0'; k++) {
			if(leftcount[k] != rightcount[k]) {
				isNo = 1;
				break;
			}
		}

		if(isNo == 0) {
			printf("Yes\n");	
		} else {
			printf("No.\n");	
		}
		
	}
}