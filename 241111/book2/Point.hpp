#ifndef POINT_HPP
#define POINT_HPP

class Point {
protected:
    int x, y;

public:
    Point(int x = 0, int y = 0); // �⺻ ������
    void setPoint(int x, int y); // ��ǥ ����
    void show() const; // ��ǥ ���
};

#endif
