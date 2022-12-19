#include "Triangle.h"

int main()
{
    while (1) {
        Triad* t = new Triangle(1000, 1, 1);
        delete t;
    };
    
    Triangle tr(5, 4, 3);
    Triangle tr2(tr);
    cout << tr2 << tr;
    tr.seta(4);
    tr2 = tr;
    cout << tr2 << tr;
    return 0;
}