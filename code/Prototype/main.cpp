#include "MessageBox.h"
#include "ProductMgr.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ProductMgr mgr;
    IProduct *p1 = new MessageBox("Hello");
    mgr.Register("MB", p1);
    p1->Use("World");
    auto p2 = mgr.Create("MB");
    p2->Use("World");
    cout << p1 << endl;
    cout << p2 << endl;

    auto pp = mgr.Create("Not");
    if (pp != nullptr)
    {
        std::cerr << "where is pointer come from ?" << endl;
    }
    delete p1;
    delete p2;
    return 0;
}