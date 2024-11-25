#include <iostream>
#include <vector>
#include <algorithm> // sort
using namespace std;

int main() {
    vector<string> words; // 문자열 벡터 생성
    string input;

    // 5개의 문자열 입력 받기
    cout << "5개의 문자열을 입력하세요:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "문자열을 입력하세요: ";
        cin >> input;
        words.push_back(input); // 벡터에 문자열 삽입
    }

    // 사전순으로 정렬
    sort(words.begin(), words.end());

    // 정렬 결과 출력
    cout << "사전에서 나오는 순서" << endl;
    for (const string& word : words) {
        cout << word << endl;
    }

    return 0;
}
