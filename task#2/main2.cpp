#include <iostream>

int how_many(int step, int max_jump = 3)
{
    int c(0);
    for (int i = max_jump; i > 0; i--)
    {
        if (step - i > 0)
        {
            c += how_many(step-i, max_jump);
        }
        if (step-i<0)
        {
            continue;
        }
        if(step-i==0)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n, k;
    std::cout << "Enter: ";
    std::cin >> n >> k;
    std::cout << how_many(n, k);
}