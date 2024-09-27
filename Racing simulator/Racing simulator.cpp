#include <iostream>
#include <string>
#include "Choice.h"

class Transport
{
protected:
	std::string name{};
	int		distance{};
	int		Speed{};
	float	Time{};

public:
	virtual float getTime() = 0;
};

class LandTransport : public Transport
{
};
class AirTransport : public Transport
{
};


//							Наземные ТС
//==================================================================
class Camel : public LandTransport {
	int distance{};												
public:Camel(int distance_ptr) : distance{ distance_ptr } {}		//Не совсем понятно как сделать конструктор общим для дочерных классов, что бы не нужно было пистать его в каждом классе, пришлось создавать Private: переменную int distance в каждом классе; 
	  float getTime() override
	  {
		  Speed = 10;
		  name = "Верблюд. ";
		  Time = ((((distance / Speed) / 30) * 8) - 3) + (distance / Speed);
		  cout << name << "\t\t" << "Время: " << Time; 
		  return Time;
	  }
};
//==================================================================
class Camel_Fast : public LandTransport{
	int distance{};
public:Camel_Fast(int distance_ptr) : distance{ distance_ptr } {}
	  float getTime() override
	  {
		  Speed = 40;
		  name = "Верблюд-быстроход.";
		  Time = ((((distance / Speed) / 10) * 8) - 5.5 ) + (distance / Speed);
		  cout << name << "\t" << "Время: " << Time; 
		  return Time;
	  }
};
//==================================================================
class Centaur : public LandTransport{
	int distance{};
public:Centaur(int distance_ptr) : distance{ distance_ptr } {}
	  float getTime() override
	  {
		  Speed = 15;
		  name = "Кентавр. ";
		  Time = (((distance / Speed) / 8) * 2) + (distance / Speed);
		  cout << name << "\t\t" << "Время: " << Time; 
		  return Time;
	  }
};
//==================================================================
class All_terrain_boots : public LandTransport{
	int distance{};
public:All_terrain_boots(int distance_ptr) : distance{ distance_ptr } {}
	  float getTime() override
	  {
		  Speed = 6;
		  name = "Ботинки-вездеходы. ";
		  Time = ((((distance / Speed) / 60) * 5) - 5) + (distance / Speed);
		  cout << name << "\t" << "Время: " << Time; 
		  return Time;
	  }
};
//==================================================================


//							Воздушные ТС
//==================================================================
class Magic_Carpet : public AirTransport{
	int distance{};
public:Magic_Carpet(int distance_ptr) : distance{ distance_ptr } {}
	  float getTime() override
	  {
		  Speed = 10;
		  name = "Ковёр-самолёт.";
		  if (distance < 1000)
		  {
			  Time = distance / Speed;
		  }

		  if (distance < 5000)
		  {
			  Time = (distance * 0.97) / Speed;
		  }

		  if (distance < 10000)
		  {
			  Time = (distance * 0.90) / Speed;
		  }

		  if (distance >= 10000)
		  {
			  Time = (distance * 0.95) / Speed;
		  }

		  cout << name << "\t\t" << "Время: " << Time;
		  return Time;
	  }
};
//==================================================================
class Broomstick : public AirTransport{
	int distance{};
public:Broomstick(int distance_ptr) : distance{ distance_ptr } {}
	  float getTime() override
	  {
		  Speed = 20;
		  name = "Метла. ";
		  Time = (distance * (1)) / Speed; // Не совсем понятно как реализовать формулу для класса Метла. Коэфицент сокращения зависит от distance
		  cout << name << "\t\t\t" << "Время: " << Time;
		  return Time;
	  }
};
//==================================================================
class Eagle : public AirTransport{
	int distance{};
public:Eagle(int distance_ptr) : distance{ distance_ptr } {}
	  float getTime() override
	  {
		  Speed = 8;
		  name = "Орёл. ";
		  Time = (distance * 0.94) / Speed;
		  cout << name << "\t\t\t" << "Время: " << Time;
		  return Time;
	  }
};
//==================================================================

int main()
{
	setlocale(LC_ALL, "Rus");
	system("chcp 1251");
	system("cls");

	using namespace std;

	int a{}, b{}, c{}, d{}, u{}, j{}, G{};
	string ptr, temp, e;

	do {
		do {

			cout << "Добро пожаловать в гоночный симулятор!" << endl;
			cout << "1. Гонка для наземного транспорта" << endl;
			cout << "2. Гонка для воздушного транспорта" << endl;
			cout << "3. Гонка для наземного и воздушного транспорта" << endl;
			cout << "Выберите тип гонки: "; cin >> a;
			cout << endl; system("cls");

		} while ((a != 1) && (a != 2) && (a != 3));

		do {

			cout << "Укажите длину дистанции (должна быть положительная): "; cin >> b; cout << endl;

		} while (b <= 0);
	
		cout << "Должно быть зарегестрировано хотя бы 2 транспортных стедства" << endl;

		do {

			cout << "1. Зарегистрировать транспорт" << endl;
			cout << "Выберите действие: "; cin >> c; cout << endl; system("cls");

		} while (c != 1);

		Camel_Fast			Camel_Fast(b);
		Camel				Camel(b);
		Centaur				Centaur(b);
		All_terrain_boots	All_terrain_boots(b);
		Magic_Carpet		Magic_Carpet(b);
		Broomstick			Broomstick(b);
		Eagle				Eagle(b);

		Choice(a, d, b, u, ptr, temp, j);

		
		do {

			cout << "1. Зарегестрировать транспорт" << endl;
			cout << "2. Начать гонку" << endl;
			cout << "Выберите действие: "; cin >> j;
			system("cls");

		} while (j != 1 && j != 2);

		if (j == 1)
		{
			Choice(a, d, b, u, ptr, temp, j);
		}

		cout << temp << endl;//Проверил что находится в переменной temp.

		if (j == 2)
		{
			cout << "Результыты гонки: " << endl;

			if (temp == "")
			{
				All_terrain_boots.getTime();
				cout << endl;
			}

			if (temp == "Метла")
			{
				Broomstick.getTime();
				cout << endl;
			}

			if (temp == "Верблюд")
			{
				Camel.getTime();
				cout << endl;
			}

			if (temp == "Кентавр")
			{
				Centaur.getTime();
				cout << endl;
			}

			if (temp == "Орёл")
			{
				Eagle.getTime();
				cout << endl;
			}

			if (temp == "Верблюд-быстроход")
			{
				Camel_Fast.getTime();
				cout << endl;
			}

			if (temp == "Ковёр-самолёт")
			{
				Magic_Carpet.getTime();
				cout << endl;
			}
		}

		do {
			cout << endl << endl;
			cout << "1. Провести ещё одну гонку" << endl;
			cout << "2. Выйти" << endl;
			cout << "Выберите действие: "; cin >> G;
			system("cls");

		} while (G != 1 && G != 2);

	} while (G != 2);

	system("cls");
	system("pause");

	return EXIT_SUCCESS;
}