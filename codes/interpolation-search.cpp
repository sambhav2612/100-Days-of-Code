#include <iostream>
using namespace std;

#define size 10

int interpolation (int array[], int sizee, int ele) {
	int lo = 0;
	int hi = sizee-1;
	
	while(lo <= hi && array[lo] < ele && array[hi] > ele) {
		int pos = lo + (((hi-lo) / (array[hi]-array[lo])) * (ele - array[lo]));
		
		if (array[pos] == ele) {
			return pos;
		}
		if (array[pos] > ele) {
			lo = pos + 1;
		}
		else {
			hi = pos - 1;
		}
	}
	return -1;
}

int main() {

	int array[size] = {0};
	
	int s = 0;
	
	cin >> s;
	
	for (int i = 0; i < s; ++i) {
		cin >> array[i];
	}
	
	int x = 0;
	
	cin >> x;
	
	cout << interpolation(array, s, x);

	return 0;
}