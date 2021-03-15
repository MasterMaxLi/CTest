// CTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#define PI 3.14

bool is_primer_number(int number);

int main()
{
    //std::cout << "char的长度为" << sizeof(char) << std::endl;
    //std::cout << "半径为3的圆的面积为" << 3 * 3 * PI << std::endl;
    //std::cout << "Hello World!\n";
    /*for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= i; j++) {
            std::cout << j << "*" << i << "=" << i * j << "\t";
        }
        std::cout << "\n";
    }*/
    /*for (int i = 1; i <= 100; i++) 
    {
        if (is_primer_number(i)) 
        {
            std::cout << i << "\t";
        }
    }*/
    //PI = 2.5;
    //const int i = 10;
    //i = 11;

    /*for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            continue;
        std::cout << i << std::endl;
    }*/
    /*int select = 0;
    std::cout << "请选择您的难度：";
    std::cin >> select;
    switch (select)
    {
        case 1:
            std::cout << "简单难度";
            break;
        case 2:
            std::cout << "一般难度";
            break;
        case 3:
            std::cout << "魔鬼难度";
        default:
            break;
    }*/

    /*for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            goto FLAG;
        }
        std::cout << i << " ";
    }

    FLAG:
        std::cout << 100;*/
    return 0;
}

bool is_primer_number(int number) 
{
    bool b = true;
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0)
            b = false;
    }
    return b;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
