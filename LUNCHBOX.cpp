#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct _lunch {
	int oven;
	int eat;
}_lunch;

bool comp(_lunch a, _lunch b) {
	if(a.eat > b.eat) {
		return true;
	} else {
		return false;
	}
}

int main(int argc, char *argv[]) {
	int nTestCases = 0;

	scanf("%d", &nTestCases);
	for(int i = 0; i < nTestCases; i++) {
		int N = 0;
		cin >> N;

		vector<_lunch> lunch(N);
		int ovensum = 0;
		int maxtime = 0;

		for(int j = 0; j < N; j ++) {
			cin >> lunch[j].oven;
			
		}
		for(int j = 0; j < N; j ++) {
			cin >> lunch[j].eat;
		}

		std::sort(lunch.begin(), lunch.end(), comp);

		for(int j = 0; j < N; j++) {
			ovensum += lunch[j].oven;
			if(maxtime < ovensum+lunch[j].eat) {
				maxtime = ovensum+lunch[j].eat;
			}
		}

		cout << maxtime << endl;


	}
}