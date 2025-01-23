
#include <iostream>

int main()
{
    int day;
    

    std::cout << "Введите день: ";
    std::cin >> day;

    if ((day % 7 == 0) || ((1 + day) % 7 == 0) || (day >= 1 && day <= 5) || (day >= 8 && day <= 10)) {
        std::cout << "Этот день - выходной!\n";
    }
    else {
        std::cout << "Этот день рабочий :(";
    }

}

