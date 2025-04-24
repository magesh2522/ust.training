#include <iostream>
using namespace std;

int main() {
	int n = 8, countWay = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			for (int k = j; k <= n; k++) {
				for(int l = k; l <= n; l++) {
				 {
						if (i + j + k + l == n) {
							countWay++;
							cout << i << " " << j << " " << k << " " << l << endl;
						
						}
					}
				}
			}
		}
		if (countWay > 0) {
			cout << "Total ways: " << countWay << endl;
		}
		else {
			cout << "No way" << endl;
		}
	}
}