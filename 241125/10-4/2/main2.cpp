#include <iostream>
#include <vector>
#include <algorithm> // sort, max_element
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

    // 사전순으로 가장 뒤에 오는 단어 찾기
    string maxWord = *max_element(words.begin(), words.end());

    // 결과 출력
    cout << "사전에서 제일 뒤에 나오는 단어는 " << maxWord << endl;

    return 0;
}
