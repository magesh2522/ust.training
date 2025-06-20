#include<iostream>

using namespace std;

void normailiz_sentence(char* str) {
	int i = 0, j = 0;
	bool isword = false;

	while (str[i] != '\0') {
		if (str[i] == ' ') {
			if (isword) {
				str[j++] = ' ';
				isword = false;
			}
		}
		else {
			str[j++] = str[i];
			isword = true;
		}
		i++;
	}

	if (j > 0 && str[j - 1] == ' ') {
		j--; // Remove trailing space
	}
	str[j] = '\0'; // Null-terminate the string
}

int main() {

}