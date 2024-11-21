#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> words; // 문자열을 저장할 벡터
    string input;

    // 5개의 문자열 입력 받기
    for (int i = 0; i < 5; ++i) {
        cout << "문자열을 입력하세요: ";
        cin >> input;
        words.push_back(input); // 벡터에 추가
    }

    // 사전에서 제일 뒤에 나오는 단어 찾기
    string lastWord = *words.begin(); // 첫 번째 요소로 초기화

    for (vector<string>::iterator it = words.begin(); it != words.end(); ++it) {
        if (*it > lastWord) { // 사전 순으로 비교
            lastWord = *it;   // 더 뒤에 나오는 단어로 갱신
        }
    }

    cout << "사전에서 제일 뒤에 나오는 단어는 " << lastWord << " 입니다." << endl;
    return 0;
}
