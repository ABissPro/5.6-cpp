
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

   if (start == 1) {
       if ((day % 7 == 0) || ((1 + day) % 7 == 0) || (day >= 1 && day <= 5) || (day >= 8 && day <= 10)) {
           std::cout << "Этот день - выходной!\n";
       }
       else {
           std::cout << "Этот день рабочий :(";
       }
   }
   if (start == 2) {
       if (((1 + day) % 7 == 0) || ((2 + day) % 7 == 0) || (day >= 1 && day <= 5) || (day >= 8 && day <= 10)) {
           std::cout << "Этот день - выходной!\n";
       }
       else {
           std::cout << "Этот день рабочий :(";
       }
   }
   if (start == 3) {
       if (((2 + day) % 7 == 0) || ((3 + day) % 7 == 0) || (day >= 1 && day <= 5) || (day >= 8 && day <= 10)) {
           std::cout << "Этот день - выходной!\n";
       }
       else {
           std::cout << "Этот день рабочий :(";
       }
   }
   if (start == 4) {
       if (((3 + day) % 7 == 0) || ((4 + day) % 7 == 0) || (day >= 1 && day <= 5) || (day >= 8 && day <= 10)) {
           std::cout << "Этот день - выходной!\n";
       }
       else {
           std::cout << "Этот день рабочий :(";
       }
   }
   if (start == 5) {
       if (((4 + day) % 7 == 0) || ((5 + day) % 7 == 0) || (day >= 1 && day <= 5) || (day >= 8 && day <= 10)) {
           std::cout << "Этот день - выходной!\n";
       }
       else {
           std::cout << "Этот день рабочий :(";
       }
   }
   if (start == 6) {
       if (((5 + day) % 7 == 0) || ((6 + day) % 7 == 0) || (day >= 1 && day <= 5) || (day >= 8 && day <= 10)) {
           std::cout << "Этот день - выходной!\n";
       }
       else {
           std::cout << "Этот день рабочий :(";
       }
   }
   if (start == 7) {
       if (((6 + day) % 7 == 0) || (day % 7 == 0) || (day >= 1 && day <= 5) || (day >= 8 && day <= 10)) {
           std::cout << "Этот день - выходной!\n";
       }
       else {
           std::cout << "Этот день рабочий :(";
       }
   }

}
