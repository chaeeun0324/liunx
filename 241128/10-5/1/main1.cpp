#include <iostream>
using namespace std;

// Matrix Ŭ���� ����
class Matrix {
private:
    int mat[2][2]; // 2x2 ��� ����

public:
    // ������: ��� �ʱ�ȭ
    Matrix(int a, int b, int c, int d) {
        mat[0][0] = a;
        mat[0][1] = b;
        mat[1][0] = c;
        mat[1][1] = d;
    }

    // ������ �����ε�: ��� ����
    Matrix operator+(const Matrix& other) {
        return Matrix(
            mat[0][0] + other.mat[0][0], mat[0][1] + other.mat[0][1],
            mat[1][0] + other.mat[1][0], mat[1][1] + other.mat[1][1]
        );
    }

    // ��� ���
    void print() const {
        cout << mat[0][0] << " " << mat[0][1] << endl;
        cout << mat[1][0] << " " << mat[1][1] << endl;
    }
};

int main() {
    // ù ��° ��İ� �� ��° ��� �ʱ�ȭ
    Matrix m1(2, 4, 5, -5);
    Matrix m2(-2, 3, 0, -5);

    // ��� ���� ����
    Matrix result = m1 + m2;

    // ��� ���
    cout << "���� ���:" << endl;
    result.print();

    return 0;
}
