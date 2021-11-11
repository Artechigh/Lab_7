
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
#include <iostream>
    const long double pi = 3.1415926535897932384626433832795;
    int main();
    {
        std::cout << "Hello World!\n\n";
        std::cout << "1 task\n";    //TASK 1
        std::cout << "Converting measurement of angle from degree to radian\n";
        std::cout << "Please write down degree measurement\n";
        long double a;
        std::cin >> a;
        a = a * pi / 180;
        std::cout << "The answer is around ";
        std::cout << a;
        std::cout << "\n\n";

        std::cout << "2 task\n";    //TASK 2
        std::cout << "Converting  measurement of angle from radian to degree\n";
        std::cout << "Please write down radian measurement\n";
        std::cin >> a;
        std::cout << "The answer is around ";
        std::cout << a / pi * 180;
        std::cout << "\n\n";

        std::cout << "3 task\n";    //TASK 3
        bool flag = true;
        double x, y;
        while (flag == true) //error detector (true - might be error  false - all checked and good)
        {
            std::cout << "X kg sweets cost A rub. How much will cost 1 kg and Y kg of sweets?\n";
            std::cout << "X = ";
            std::cin >> x;
            std::cout << "A = ";
            std::cin >> a;
            std::cout << "Y = ";
            std::cin >> y;
            if (x == 0)
            {
                std::cout << "error. please type in other number in X\n";
            }
            else
            {
                flag = false;
                std::cout << "The answer is \n";
                std::cout << "1 kg will cost ";
                std::cout << a / x;
                std::cout << " rub";
                std::cout << "\n";
                std::cout << y;
                std::cout << " kg will cost ";
                std::cout << a / x * y;
                std::cout << " rub";
                std::cout << "\n\n";
            }
        }

        std::cout << "4 task\n";    //TASK 4
        std::cout << "The speed of the first car is V1 km/h. The second car - V2 km/h. The distance between them is S km\n";
        std::cout << "Find the distance between them after T hours if cars are going away from each other\n";
        double v1, v2, s, t;
        std::cout << "V1 = ";
        std::cin >> v1;
        std::cout << "V2 = ";
        std::cin >> v2;
        std::cout << "S = ";
        std::cin >> s;
        std::cout << "T = ";
        std::cin >> t;
        std::cout << "The answer is ";
        std::cout << (v1 + v2) * t + s;
        std::cout << "\n\n";

        std::cout << "5 task\n";    //TASK 5
        double b;
        flag = true;  //error detector (true - might be error  false - all checked and good)
        while (flag == true)
        {
            std::cout << "Solve this equation: a * x + b = 0\n";
            std::cout << "a = ";
            std::cin >> a;
            if (a == 0)
            {
                std::cout << "error! 'a' mustn't be equal 0. Please try again";

            }
            else
            {
                flag = false;
                std::cout << "b = ";
                std::cin >> b;
                if (b == 0)
                {
                    std::cout << "The answer is 0";
                }
                else
                {
                    std::cout << "The answer is ";
                    if ((-b) / a)
                        std::cout << (-b) / a;

                }
                std::cout << "\n\n";


            }
        }

        std::cout << "6 task\n";    //TASK 6
        double a1, a2, b1, b2, c1, c2;
        std::cout << "Solve system of this equations\n";
        std::cout << "a1 * x + b1 * y = c1\n";
        std::cout << "a2 * x + b2 * y = c2\n";
        flag = true;
        while (flag == true) // проверка на возможное содержание ошибок
        {
            std::cout << "a1 = ";
            std::cin >> a1;
            std::cout << "b1 = ";
            std::cin >> b1;
            std::cout << "c1 = ";
            std::cin >> c1;

            std::cout << "a2 = ";
            std::cin >> a2;
            std::cout << "b2 = ";
            std::cin >> b2;
            std::cout << "c2 = ";
            std::cin >> c2;

            if ((a1 * b2 - a2 * b1) == 0)
            {
                std::cout << "error. please try different meanings of variables\n";
            }
            else
            {
                std::cout << "The answer is\n";
                std::cout << "x = ";
                if ((c1 * b2 - c2 * b1) / (a1 * b2 - a2 * b1) == -0) std::cout << "0";
                else std::cout << (c1 * b2 - c2 * b1) / (a1 * b2 - a2 * b1);
                std::cout << "\n";
                
                std::cout << "y = ";
                if ((a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1) == -0) std::cout << "0";
                else std::cout << (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
                flag = false; // ошибок нет. выход из цикла
            }
        }
    }

}