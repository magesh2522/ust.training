#include <iostream>
using namespace std;

void arrReverse(int* ptr, int n)
{
	int t;
	int* start = nullptr;
	int* end = nullptr;

	start = ptr;
	end = ptr + (n - 1);

	while (start > end) {
		t = *start;
		*start = *end;
		*end = t;
		start++;
		end--;
	}

}
int main() {
	int n[] = { 1,2,3,4,5 };


}
void arrReverse(int* ptr, int n) {

}
