#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char table[11][20] = {
	{"eorz"},
	{"eno"},
	{"otw"},
	{"eehrt"},
	{"foru"},
	{"efiv"},
	{"isx"},
	{"eensv"},
	{"eghit"},
	{"einn"},
	{"ent"},
};

int compare(const void* a, const void* b) {
	char *c1 = (char*)a;
	char *c2 = (char*)b;

	if(*c1 > *c2) {
		return 1;
	} else if(*c1 < *c2) {
		return -1;
	} else {
		return 0;
	}
}
int returnvalue(char *s) {
	char c[20];
	strcpy(c, s);
	int count = 0;
	while(c[count] != '\0')
		count++;
	qsort(c, count, 1, compare);

	for(int i = 0; i < 11; i++) {
		if(strcmp(table[i], c) == 0) {
			return i;
		}
	}

	return -1;
}

int main(int argc, char *argv[]) {
	int N = 0;

	scanf("%d", &N);
	for(int i = 0; i < N; i++) {
		char left[20];
		char right[20];
		char oper;
		char dummy;
		char realanswer[20];

		int calc_answer = 0;

		scanf("%s %c %s %c %s", left, &oper, right, &dummy, realanswer);

		int lvalue = returnvalue(left);
		int rvalue = returnvalue(right);

		int user_answer = returnvalue(realanswer);


		switch(oper) {
			case '+':
				calc_answer = lvalue + rvalue;
				break;

			case '-':
				calc_answer = lvalue - rvalue;
				break;

			case '*':
				calc_answer = lvalue * rvalue;
				break;			
		}

		if((calc_answer < 0) || (calc_answer > 10)) {
			printf("No\n");
			continue;
		}

		if(calc_answer == user_answer) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}




	}
}