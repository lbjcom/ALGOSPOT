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

		vector<int> array;

		scanf("%d", &N);
		for(int j = 0; j < N; j++) {
			int temp = 0;
			cin >> temp;
			array.push_back(temp);
		}

		std::sort(array.begin(), array.begin()+N);

		int sum = 0;
		while(1) {
			if(array.size() <= 1) {
				break;
			}

			int tempsum = array[0] + array[1];
			sum += tempsum;

			array.erase(array.begin(), array.begin()+2);

			int tempN = array.size();
			for(int j = 0; j < tempN; j++) {
				if(array[j] > tempsum) {
					array.insert(array.begin()+j, tempsum);
					break;
				}

				if(j == tempN-1) {
					array.insert(array.begin()+j+1, tempsum);
					break;
				}
			}
		}

		cout << sum << endl;

	}
}