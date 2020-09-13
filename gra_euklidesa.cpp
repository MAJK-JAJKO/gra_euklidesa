// gra_euklidesa.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int main()
{
    int t, a, b;

    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        std::cin >> a >> b;
        while (true)
        {
            if (a == b)
            {
                std::cout << a + b << std::endl;
                break;
            }
            if (a < b)
            {
                b -= a;
            }
            if (a > b)
            {
                a -= b;
            }
        }
        }

}
