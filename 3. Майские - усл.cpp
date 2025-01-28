
#include <iostream>

int main()
{
   int day;
   int start;

   std::cout << "С какого дня недели начинается май? Введите номер: ";
   std::cin >> start;

   std::cout << "Введите день: ";
   std::cin >> day;

 if ((day < 1) && (day > 31)) {
     std::cout << "Ошибка!";
 }    
 else if (((start + day - 1) % 7 == 0) || ((start + day) % 7 == 0) || (day >= 1 && day <= 5) || (day >= 8 && day <= 10)) {
     std::cout << "Этот день - выходной!\n";
 }
 else {
     std::cout << "Этот день рабочий :(";
 }
  

}
