
#include <iostream>

int main()
{   
    system("chcp 1251"); // Установить кодировку
    int money;
    std::cout << "Внесите сумму: ";
    std::cin >> money;

    int cash5000;
    int cash2000;
    int cash1000;
    int cash500;
    int cash200;
    int cash100;

    if ((money > 150000) || (money % 100 !=0)) { 
        std::cout << "Ошибка! Невозможно снять такую сумму. Запросите сумму до 150000 рублей и кратную 100."; 
    }
    
    if (money >= 5000) {  
        cash5000 = money / 5000;
        money %= 5000;
        if (cash5000 > 0) {
            std::cout << cash5000 << " 5000-ых купюр\n";
        }
    }
    if (money >= 2000) {
        cash2000 = money / 2000;
        money %= 2000;
        if (cash2000 > 0) {
            std::cout << cash2000 << " 2000-ых купюр\n";
        }
    }
    if (money >= 1000) {
        cash1000 = money / 1000;
        money %= 1000;
        if (cash1000 > 0) {
            std::cout << cash1000 << " 1000-ых купюр\n";
        }
    }
    if (money >= 500) {
        cash500 = money / 500;
        money %= 500;
        if (cash500 > 0) {
            std::cout << cash500 << " 500-ых купюр\n";
        }
    }
    if (money >= 200) {
        cash200 = money / 200;
        money %= 200;
        if (cash200 > 0) {
            std::cout << cash200 << " 200-ых купюр\n";
        }
    }
    if (money >= 100) {
        cash100 = money / 100;
        money %= 100;
        if (cash100 > 0) {
            std::cout << cash100 << " 100-ых купюр\n";
        }
    }


}
