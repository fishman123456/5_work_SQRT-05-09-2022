﻿// 5_work_SQRT-05-09-2022.cpp : Этот файл содержит функцию "main". 
// Здесь начинается и заканчивается выполнение программы.
// Создать абстрактный базовый класс с виртуальной функцией - корни уравнения. 
// Создать производные классы: класс линейных 
// уравнений  и класс квадратных уравнений. Определить функцию вычесления корней уравнений.
//the root of the equation
#include <iostream>
using namespace std;
//абстрактный базовый класс служащий
class Equation
{
public:
	//имя служащего
	int a1;
	int b1;
	int c1;
	int x;
	//простой конструктор без параметров
	Equation() {
	}
	//простой конструктор с двумя параметрами
	Equation(int* a1, int* b1) {
	}
	//простой конструктор с тремя параметрами
	Equation (int* a1, int* b1, int* c1) {
	}
	//простой конструктор с четырмя параметрами
	Equation(int* a1, int* b1, int* c1, int* x) {
	}
	
	//чисто виртуальная функция
	virtual void Print() = 0;
};
//класс президент
int main()
{
    cout << "Hello World!\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
