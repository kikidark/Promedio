//Programa de suma
#include <iostream>
#include <cstdlib>
int main()
{
	int num1;
	int num2;
	int num3;
	int division = 3;
	int resultado;
	std::cout << "Ingrese el primer numero\n";
	std::cin >> num1;
	std::cout << "Ingrese el segundo numero\n";
	std::cin >> num2;
	std::cout << "Ingrese el tercer numero\n";
	std::cin >> num3;
	resultado = num1 + num2 + num3;
	std::cout << "resultado\n" << resultado / division;
	std::cout << "\n";
	system("PAUSE");
	return 0;
	
}