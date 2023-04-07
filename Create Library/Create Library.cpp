#include <iostream>
#include "My Lib.h"
#include "Input.h"
using namespace std;


int main()
{
    std::cout << "Hello World!\n";
    MyLib::Tset();
    cout << MyLib::Sum2Numbers(20, 30)<< endl;

    int Number = Input::ReadNumber();
    cout << Number;
    return 0;
}

