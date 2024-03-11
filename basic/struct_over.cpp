#include <iostream>
#include <stdlib.h>
using namespace std;

typedef unsigned char DByte

struct Data {
    int num;
    char ch;
    DByte *data() {
        return (DByte *)(this + 1);
    }
};

int main() {
    Data *pData = (Data *)malloc(sizeof(Data) + 10);
    pData->num = 12;
    pData->ch = 'x';
    memcpy(pData->data(), "haha", sizeof("haha"));
    std::cout << pData->data() << std::endl;
    return 0;
}