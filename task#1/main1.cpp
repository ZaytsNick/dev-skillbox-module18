#include <iostream>
#include <vector>

void swapvec(std::vector<int> &n, int m[4])
{  
    for(int i=0; i<4;i++)
    {
        int tmp(m[i]);
        m[i]=n[i];
        n[i]=tmp;
    }
}

int main()
{
    std::vector<int> a = {1, 2, 3, 4};
    int b[] = {2, 4, 6, 8};
    swapvec(a, b);

    for (int i = 0; i < 4; ++i)
        std::cout << a[i];
    std::cout << std::endl;
    for (int i = 0; i < 4; ++i)
        std::cout << b[i];
}