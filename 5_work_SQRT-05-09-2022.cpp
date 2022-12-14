// 5_work_SQRT-05-09-2022.cpp : Этот файл содержит функцию "main". 
// Здесь начинается и заканчивается выполнение программы.
// Создать абстрактный базовый класс с виртуальной функцией - корни уравнения. 
// Создать производные классы: класс линейных 
// уравнений  и класс квадратных уравнений. Определить функцию вычесления корней уравнений.
//the root of the equation
//d = b * b - 4 * a * c; // Рассчитываем дискриминант
//if (d > 0) // Условие при дискриминанте больше нуля
//{
//	x1 = ((-b) + sqrt(d)) / (2 * a);
//	x2 = ((-b) - sqrt(d)) / (2 * a);
//	cout << "x1 = " << x1 << "\n";
//	cout << "x2 = " << x2 << "\n";
//}
//if (d == 0) // Условие для дискриминанта равного нулю
//{
//	x1 = -(b / (2 * a));
//	cout << "x1 = x2 = " << x1 << "\n";
//}
//if (d < 0) // Условие при дискриминанте меньше нуля
//	cout << "D < 0, Действительных корней уравнения не существует";




#include <iostream>
#include <math.h>
using namespace std;
//абстрактный базовый класс служащий
class Equation
{

	// поля для решения квадратного уравнения
protected:
	int a{ 0 };
	int b{ 0 };
	int c{ 0 };
	int x1{ 0 };
	int x2{ 0 };
	int d { 0 };
	//простой конструктор без параметров
public:
	Equation() {
	}
	//простой конструктор с двумя параметрами
	Equation(int pa1, int pb1) {
		a = pa1;
		b = pb1;
	}
	//простой конструктор с тремя параметрами
	Equation(int pa1, int pb1, int pc1) {
		a = pa1;
		b = pb1;
		c = pc1;
	}
	//простой конструктор с четырмя параметрами
	Equation(int pa1, int pb1, int pc1, int px1) {
		a = pa1;
		b = pb1;
		c = pc1;
	}

	//чисто виртуальная функция
	virtual void Print() = 0;
};
//
class Eqation_one : public Equation
{
public: Eqation_one(int a, int b, int c):Equation(a,b,c){}

	virtual void Print() 
	{
		cout <<  (b * b) - (4 * (a * c));
	};

};

int main()
{
	Eqation_one A(12,2,3);
	A.Print();
}

