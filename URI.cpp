#include <stdio.h>
#include <stdlib.h>

const int H = 9;
int main(int argc, char *argv[]) {
	int N = 0;

	scanf("%d", &N);	
	for(int i = 0; i < N; i++) {
		char s[81];

		scanf("%s", s);
		
		int k = 0;
		while(s[k] != '\0') {
			if(s[k] != '%') {
				printf("%c", s[k]);
				k++;
				continue;
			} else {
				char answer;
				switch(s[k+2]) {
					case '0':
						answer = ' ';
						break;

					case '1':
						answer = '!';
						break;

					case '4':
						answer = '$';
						break;

					case '5':
						answer = '%';
						break;

					case '8':
						answer = '(';
						break;

					case '9':
						answer = ')';
						break;

					case 'a':
						answer = '*';
						break;

					
				}
				printf("%c", answer);
				k = k+3;
			}
		}
		printf("\n");
	}
}