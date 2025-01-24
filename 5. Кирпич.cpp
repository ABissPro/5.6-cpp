
#include <iostream>

int main()
{
    int a;
    int b;
    int c;
    std::cout << "Введите параметры первой коробки (a, b, c): ";
    std::cin >> a >> b >> c;

    int m;
    int n;
    int k;
    std::cout << "Введите параметры второй коробки (m, n, k): ";
    std::cin >> m >> n >> k;

    if (a <= m && b <= n && c <= k || a <= n && b <= k && c <= m || a <= k && b <= m && c <= n) {
        std::cout << "Можно!";
    }
    
    else {
        std::cout << "Нельзя!!";
    }

}
