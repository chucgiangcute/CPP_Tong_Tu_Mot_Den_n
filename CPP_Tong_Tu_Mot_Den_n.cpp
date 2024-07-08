// CPP_Tong_Tu_Mot_Den_n.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int Sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else return Sum(n - 1) + n;
}
int main()
{
    int n = 10;
    cout << "Tong cua day so la :" << " " << Sum(n);
}

