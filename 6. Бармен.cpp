
#include <iostream>

int main()
{
   int dayOfBirth;
   int monthOfBirth;
   int yearOfBirth;
   std::cout << "Введите дату рождения через пробел: ";
   std::cin >> dayOfBirth >> monthOfBirth >> yearOfBirth;

   int dayCurrent;
   int monthCurrent;
   int yearCurrent;
   std::cout << "Введите сегодняшнюю дату через пробел: ";
   std::cin >> dayCurrent >> monthCurrent >> yearCurrent;

   if (yearCurrent - yearOfBirth > 18) {
	   std::cout << "Можно!";
   }

   else if (yearCurrent - yearOfBirth < 18) {
	   std::cout << "Нельзя!!";
   }

   else  {
	   if (monthCurrent == monthOfBirth) {
		   if (dayCurrent <= dayOfBirth) {
			   std::cout << "Нельзя!!";
		   }
		   else if (dayCurrent > dayOfBirth) {
			   std::cout << "Можно!";
		   }
	   }
	   else if (monthCurrent <= monthOfBirth) {
		   std::cout << "Нельзя!!";
	   }
	   else if (monthCurrent >= monthOfBirth) {
		   std::cout << "Можно!";
	   }
   }
}

