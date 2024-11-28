#include <iostream>
using namespace std;

// Matrix 클래스 정의
class Matrix {
private:
    int mat[2][2]; // 2x2 행렬 저장

public:
    // 생성자: 행렬 초기화
    Matrix(int a, int b, int c, int d) {
        mat[0][0] = a;
        mat[0][1] = b;
        mat[1][0] = c;
        mat[1][1] = d;
    }

    // 연산자 오버로딩: 행렬 덧셈
    Matrix operator+(const Matrix& other) {
        return Matrix(
            mat[0][0] + other.mat[0][0], mat[0][1] + other.mat[0][1],
            mat[1][0] + other.mat[1][0], mat[1][1] + other.mat[1][1]
        );
    }

    // 행렬 출력
    void print() const {
        cout << mat[0][0] << " " << mat[0][1] << endl;
        cout << mat[1][0] << " " << mat[1][1] << endl;
    }
};

int main() {
    // 첫 번째 행렬과 두 번째 행렬 초기화
    Matrix m1(2, 4, 5, -5);
    Matrix m2(-2, 3, 0, -5);

    // 행렬 덧셈 연산
    Matrix result = m1 + m2;

    // 결과 출력
    cout << "연산 결과:" << endl;
    result.print();

    return 0;
}
