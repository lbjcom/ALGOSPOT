#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int N = 0;

	scanf("%d", &N);	
	for(int i = 0; i < N; i++) {
		
		float value = 0;
		char unit[3];

		scanf("%f %s", &value, unit);

		switch(unit[0]) {
			case 'k':
				value *= 2.2046;
				sprintf(unit, "%s", "lb");
				break;

			case 'l':
				switch(unit[1]) {
					case '\0':
						value *= 0.2642;
						sprintf(unit, "%s", "g");
						break;

					case 'b':
						value *= 0.4536;
						sprintf(unit, "%s", "kg");
						break;

				}
				break;
			case 'g':
				value *= 3.7854;
				sprintf(unit, "%s", "l");
				break;
		}

		printf("%d %.4f %s\n", i+1, value, unit);
		
	}
}