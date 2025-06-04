#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> scores;
    int score;

    cout << "Enter the score (-1 to stop): " << endl;
    while (cin >> score && score != -1) {
        scores.push_back(score);
    }

    // Copy all scores and sort descending
    vector<int> allScore = scores;
    sort(allScore.begin(), allScore.end(), greater<int>());

    cout << "All_Score:" << endl;
    for (int s : allScore) {
        cout << s << endl;
    }

    // Remove duplicates and sort descending
    sort(scores.begin(), scores.end());                 // sort ascending
    auto last = unique(scores.begin(), scores.end());   // remove duplicates
    scores.erase(last, scores.end());
    sort(scores.begin(), scores.end(), greater<int>()); // sort descending

    cout << "Unique_score:" << endl;
    for (int s : scores) {
        cout << s << " ";
    }
    cout << endl;

    cout << "Top_Three_Scores:" << endl;
    for (int i = 0; i < min(3, (int)scores.size()); i++) {
        cout << scores[i] << " ";
    }
    cout << endl;

    return 0;
}
