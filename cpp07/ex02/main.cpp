#include <iostream>
#include <string>
#include "Array.hpp"

int main()
{
	// Constructor por defecto
	std::cout << "--- Constructor por defecto ---" << std::endl;
	Array<int> empty;
	std::cout << "empty size: " << empty.size() << std::endl;

	// Constructor con tamaño
	std::cout << "--- Constructor con tamaño ---" << std::endl;
	Array<int> nums(5);
	std::cout << "nums size: " << nums.size() << std::endl;
	for (unsigned int i = 0; i < nums.size(); i++)
		std::cout << "nums[" << i << "] = " << nums[i] << std::endl;

	// Asignar valores
	std::cout << "--- Asignar valores ---" << std::endl;
	for (unsigned int i = 0; i < nums.size(); i++)
		nums[i] = i * 10;
	for (unsigned int i = 0; i < nums.size(); i++)
		std::cout << "nums[" << i << "] = " << nums[i] << std::endl;

	// Constructor de copia (deep copy)
	std::cout << "--- Constructor de copia ---" << std::endl;
	Array<int> copy(nums);
	copy[0] = 999;
	std::cout << "copy[0] = " << copy[0] << std::endl;
	std::cout << "nums[0] = " << nums[0] << " (no debe cambiar)" << std::endl;

	// Operador de asignacion (deep copy)
	std::cout << "--- Operador = ---" << std::endl;
	Array<int> assigned;
	assigned = nums;
	assigned[1] = 777;
	std::cout << "assigned[1] = " << assigned[1] << std::endl;
	std::cout << "nums[1] = " << nums[1] << " (no debe cambiar)" << std::endl;

	// Acceso fuera de rango
	std::cout << "--- Excepcion fuera de rango ---" << std::endl;
	try {
		nums[100] = 42;
	} catch (std::exception &e) {
		std::cout << "Excepcion capturada: " << e.what() << std::endl;
	}

	// Con strings
	std::cout << "--- Array de strings ---" << std::endl;
	Array<std::string> strs(3);
	strs[0] = "hola";
	strs[1] = "buenos";
	strs[2] = "dias";
	for (unsigned int i = 0; i < strs.size(); i++)
		std::cout << "strs[" << i << "] = " << strs[i] << std::endl;

	return 0;
}
