#include <iostream>

using namespace std;

void removeDuplicates(char arr[], int& size) {
    bool seen[10] = { false }; 
    int index = 0;

    for (int i = 0; i < size; i++) {
        if (isdigit(arr[i]) && !seen[arr[i] - '0']) {
            seen[arr[i] - '0'] = true;
            arr[index++] = arr[i];
        }
    }
    size = index;
}

int main() {
    char numArr[] = { '1', '1', '2', '3', '4', '4', '5', '5', '6', '7', '7', '8', '9' };
    int size = sizeof(numArr) / sizeof(numArr[0]);

    removeDuplicates(numArr, size);

    cout << "Without duplicates: ";
    for (int i = 0; i < size; i++) {
        cout << numArr[i];
    }
    cout << endl;

    return 0;
}
