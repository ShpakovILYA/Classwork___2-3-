#include <cmath>
#include <iomanip>
#include <iostream>

int main()
{
    std::cout << "Enter three whole numbers" << std::endl;
    int numX;
    int numY;
    int numZ;
    std::cin >> numX >> numY >> numZ;
    if ((numX % 2 == 1) && (numY % 2 == 1))
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
    if (((numX < 20) && (numY >= 20)) ||
        ((numX >= 20) && (numY < 20)))
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
    if (numX == 0 || numY == 0)
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
    if (numX < 0 && numY < 0 && numZ < 0)
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
    if ((numX %  5 == 0 && numY % 5 != 0 && numZ != 0) ||
        (numX %  5 != 0 && numY % 5 == 0 && numZ != 0) ||
        (numX %  5 != 0 && numY % 5 != 0 && numZ == 0))
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
    if (numX > 100 || numY > 100  ||  numZ > 100)
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
    std::cout << "Enter new pair a < 8 and q < 8" << std::endl;
    std::pair<int, int> q;
    std::cin >> q.first >> q.second;
    std::cout << "Enter new pair c < 8 and q < 8" << std::endl;
    std::pair<int, int> w;
    std::cin >> w.first >> w.second;
    if (q.first == w.first || q.second == w.second)
    {
        std::cout << "rook threatens the field (c,d)" << std::endl;
    }
    else
    {
        std::cout << "rook  doesn`t threatens the field (c,d)" << std::endl;
    }
    if (std::abs(q.first - w.first) == std::abs(q.second - w.second))
    {
        std::cout << "Elephant threatens the field (c,d)" << std::endl;
    }
    else
    {
        std::cout << "Elephant  doesn`t threatens the field (c,d)" << std::endl;
    }
    if (std::abs(q.first - w.first) ==  1 || std::abs(q.second - w.second) == 1)
    {
        std::cout << "King threatens the field (c,d)" << std::endl;
    }
    else
    {
        std::cout << "King  doesn`t threatens the field (c,d)" << std::endl;
    }
    if ((q.first == w.first) || (q.second == w.second) ||
        (std::abs(q.first - w.first) == std::abs(q.second - w.second)))
    {
        std::cout << "Queen threatens the field (c,d)" << std::endl;
    }
    else
    {
        std::cout << "Queen  doesn`t threatens the field (c,d)" << std::endl;
    }
    if (((q.first + 1 == w.first) && (q.second - 1 == w.second)) ||
        ((q.first - 1 == w.first) && (q.second + 1 == w.second)))
    {
        std::cout << "Pawn eat the field (c,d)" << std::endl;
    }
    else if ((q.first == 2) && ((q.first == w.first) && (q.second + 2 == w.second)) ||
             (q.first == w.first) && (q.second + 1 ==w.second))
    {
        std::cout << "Paw can go to the field (c,d)" << std::endl;
    }
    else
    {
        std::cout << "Paw can go to the field (c,d)" << std::endl;
    }
    for (int a = 1; a <= 10; ++a)
    {
        std::cout << a << "*7 = " << 7*a << std::endl;
    }
    unsigned int count = 1;
    for (int b = 8; b <= 15; ++b)
    {
    count = count * b;
    }
    std::cout << count << std::endl;
    count = 1;
    std::cout << "Enter a (1<a<20)" << std::endl;
    int i = 0;
    std::cin >> i;
    for (int k = i; k <= 20; ++k)
    {
        count = count * k;
    }
    std::cout << count << std::endl;
    count = 1;
    std::cout << "Enter q (1<b<20)" << std::endl;
    int numQ = 0;
    std::cin >> numQ;
    for (int j = 1; j <= numQ; ++j)
    {
         count = count * j;
    }
    std::cout << count << std::endl;
    count = 1;
    std::cout << "Enter a " << std::endl;
    int FBA = 0;
    std::cin >> FBA;
    std::cout << "Enter b (b>=a)" << std::endl;
    int SBB = 0;
    std::cin >> SBB;
    for (int t = FBA; t <= SBB; ++t)
    {
        count = count * t;
    }
    std::cout << count << std::endl;
    return 0;
}
