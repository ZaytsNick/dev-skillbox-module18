#include <iostream>

void evendigits(long long &big_counter, int &answer)
{
    if (big_counter % 10 % 2 == 0)
        answer++;
    if (big_counter / 10 > 0)
    {
        big_counter /= 10;
        evendigits(big_counter, answer);
    }
    else return;
}
int main()
{
    long long n(9223372036854775776);
    int ans(0);
    evendigits(n, ans);
    std::cout << "ans == " << ans;
}