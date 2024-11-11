#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape {
protected:  // private���� protected�� ����
    int x, y; // ��ġ��ǥ

public:
    Shape(int x = 0, int y = 0); // ������
    virtual void show() const = 0; // ���� ���� �Լ�
    virtual ~Shape(); // ���� �Ҹ���
};

#endif
