#include <iostream>
using namespace std;

int main() {
    // 2차원 배열 초기화
    int matrix[3][3] = {
        {-5, 2, 35},
        {-20, 5, 100},
        {-75, 5, -25}
    };

    int maxVal = matrix[0][0]; // 최대값 초기화
    int maxRow = 0, maxCol = 0; // 최대값의 위치 초기화

    // 2차원 배열을 순회하며 최대값과 위치 찾기
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    // 결과 출력
    cout << "최대값은 " << maxVal << " 위치는 " << maxRow + 1 << "행 " << maxCol + 1 << "열" << endl;

    return 0;
}

