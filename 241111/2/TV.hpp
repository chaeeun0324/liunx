#ifndef TV_HPP
#define TV_HPP

#include <string>
using namespace std;

class TV {
protected:
    int size; // ��ũ�� ũ��

public:
    TV(int size = 20);
    void setSize(int size);
    int getSize() const;
};

class WideTV : public TV {
protected:
    bool videoIn;

public:
    WideTV(int size = 20, bool videoIn = false);
    void setVideoIn(bool videoIn);
    bool getVideoIn() const;
};

class SmartTV : public WideTV {
private:
    string ipAddr; // ���ͳ� �ּ�

public:
    SmartTV(int size = 20, bool videoIn = false, string ipAddr = "0.0.0.0");
    void setSmartTV(int size, bool videoIn, string ipAddr);
    string getIpAddr() const;
};

#endif
