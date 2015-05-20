#include <stdio.h>
#include <inttypes.h>

int main(int argc, char *argv[]) {
	int N = 0;
	uint32_t data = 0;
	uint32_t output = 0;

	scanf("%d", &N);
	for(int i = 0; i < N; i++) {
		scanf("%u", &data);
		output = 0;
		output |= (data & 0x000000FF) << 24;
		output |= (data & 0x0000FF00) << 8;
		output |= (data & 0x00FF0000) >> 8;
		output |= (data & 0xFF000000) >> 24;
		printf("%u\n", output);
	}
}