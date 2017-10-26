#include <iostream>

using namespace std;

void zmiana(int* p, int*& pr)
{
    p++;
    pr++;
}

int main()
{
    int a =10;
    int *p = &a;
    int **c = &p;

    std:cout << p << "\n" << c << std::endl;
    for (auto &&item :) {
        
    }

    return 0;
}