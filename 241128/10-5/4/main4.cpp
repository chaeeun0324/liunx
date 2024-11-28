#include <iostream>
using namespace std;

int main() {
    // 2차원 배열 초기화
    int matrix[3][3] = {
        {-5, 2, 35},
        {-20, 5, 100},
        {-75, 5, -25}
    };

    // 배열 수정: 음수는 0, 양수는 255로 변경
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (matrix[i][j] < 0)
                matrix[i][j] = 0; // 음수는 0으로
            else
                matrix[i][j] = 255; // 양수는 255로
        }
    }

    // 결과 출력
    cout << "수정 행렬:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
