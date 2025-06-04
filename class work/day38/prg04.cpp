#include <iostream>
#include<vector>
#include <algorithm>
#include <set>

using namespace std;
int main() {
	vector<int>scores;
	int score;
	cout << "Enter the score: " << endl;
	while (cin >> score && score != -1) {//until -1

	}
	vector<int> allScore = scores;//descending order & copy duplicate 
	sort(allScore.begin(), allScore.end(), greater<int>());

	cout << "All_Score" << "";
	for (int s : allScore)
	{
		cout << s << endl;
	}
	cout << "Unique_score" << endl;
	for (int s : scores) {//unique score descending order 
		cout << s << " ";
		cout << endl;
		return 0;

	

	sort(scores.begin(), scores.end());//remove dublicate  get unique
	auto last =unique(scores.begin(), scores.end());
	scores.erase(last, scores.end());
	sort(scores.begin(), scores.end(),greater<int>());

	
	}
	cout << "Top_Three_Scores" << endl;
	for (int i = 0;i < min(3, (int)allScore.size());i++) {
		cout << allScore[i] << "";
	}
	cout << endl;
}