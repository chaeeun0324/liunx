#include "TV.hpp"
#include <iostream>

TV::TV(int size) : size(size) {}

void TV::setSize(int size) { this->size = size; }
int TV::getSize() const { return size; }

WideTV::WideTV(int size, bool videoIn) : TV(size), videoIn(videoIn) {}

void WideTV::setVideoIn(bool videoIn) { this->videoIn = videoIn; }
bool WideTV::getVideoIn() const { return videoIn; }

SmartTV::SmartTV(int size, bool videoIn, string ipAddr)
    : WideTV(size, videoIn), ipAddr(ipAddr) {}

void SmartTV::setSmartTV(int size, bool videoIn, string ipAddr) {
    setSize(size);
    setVideoIn(videoIn);
    this->ipAddr = ipAddr;
}

string SmartTV::getIpAddr() const { return ipAddr; }
