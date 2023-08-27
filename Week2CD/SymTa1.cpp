#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <cmath>

int main()
{
    int i = 0, j = 0, x = 0, n;
    void *p, *add[5];
    char ch, srch, b[15], d[15], c;
    std::cout << "Expression terminated by $:";
    while ((c = getchar()) != '$')
    {
        b[i] = c;
        i++;
    }
    n = i - 1;
    std::cout << "Given Expression:";
    i = 0;
    while (i <= n)
    {
        std::cout << b[i];
        i++;
    }
    std::cout << "\n Symbol Table\n";
    std::cout << "Symbol \t addr \t type";
    while (j <= n)
    {
        c = b[j];
        if (isalpha(static_cast<unsigned char>(c)))
        {
            p = malloc(sizeof(c));
            add[x] = p;
            d[x] = c;
            std::cout << "\n" << c << " \t " << p << " \t identifier\n";
            x++;
            j++;
        }
        else
        {
            ch = c;
            if (ch == '+' || ch == '-' || ch == '*' || ch == '=')
            {
                p = malloc(sizeof(ch));
                add[x] = p;
                d[x] = ch;
                std::cout << "\n " << ch << " \t " << p << " \t operator\n";
                x++;
                j++;
            }
        }
    }
    return 0;
}

