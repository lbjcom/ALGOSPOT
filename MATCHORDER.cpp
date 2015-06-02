#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	int nTestCases = 0;

	scanf("%d", &nTestCases);
	for(int i = 0; i < nTestCases; i++) {
		int N = 0;

		cin >> N;

		vector<int> rus(N);
		vector<int> kor(N);

		for(int j = 0; j < N; j++) {
			cin >> rus[j];
		}

		for(int j = 0; j < N; j++) {
			cin >> kor[j];
		}

		std::sort(rus.begin(), rus.end());
		std::sort(kor.begin(), kor.end());
		int rusindex = 0;
		for(int j = 0; j < N; j++) {
			if(kor[j] >= rus[rusindex]) {
				rusindex++;
			}
		}

		cout << rusindex << endl;
		
	}
}