#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	int N = 0;

	scanf("%d", &N);
	for(int i = 0; i < N; i++) {
		char s[10001];

		char stack[10001] = {0,};
		int stacksize = 0;

		scanf("%s", s);

		int j = 0;

		int answer = 1;

		while(s[j] != '\0') {
			switch(s[j]) {
				case '(':
				case '{':
				case '[':
					stack[stacksize] = s[j];
					stacksize++;
					break;

				case ')':
					if(stack[stacksize-1] != '(') {
						answer = 0;
					} else {
						stacksize--;
					}
					break;

				case '}':
					if(stack[stacksize-1] != '{') {
						answer = 0;
					} else {
						stacksize--;
					}
					break;

				case ']':
					if(stack[stacksize-1] != '[') {
						answer = 0;
					} else {
						stacksize--;
					}
					break;
			}
			if(answer == 0) {
				break;
			}
			j++;
		}

		if((answer == 0) || (stacksize != 0)) {
			printf("NO\n");
		} else {
			printf("YES\n");
		}


	}
}