
#include <iostream>

int main()
{
    int speed;
    int height;

    std::cout << "Введите скорость самолёта: ";
    std::cin >> speed;

    std::cout << "Введите высоту самолёта: ";
    std::cin >> height;

    if ((speed >= 750 && speed <= 850) && (height >= 9000 && height <= 9500)) {
        std::cout << "Самолёт летит правильным эшелоном!\n";
    }
    else {
        std::cout << "Самолёт летит НЕ правильным эшелоном!!\n";
    }

}
