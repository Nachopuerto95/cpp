#include <iostream>
#include "Serializer.hpp"

int main() {
	Data data;
	data.name = "test";
	data.value = 42;

	std::cout << "=== Original Data ===" << std::endl;
	std::cout << "Address: " << &data << std::endl;
	std::cout << "Name:    " << data.name << std::endl;
	std::cout << "Value:   " << data.value << std::endl;

	// Correction: serialize convierte el puntero a uintptr_t con reinterpret_cast
	uintptr_t raw = Serializer::serialize(&data);
	std::cout << "\n=== Serialized ===" << std::endl;
	std::cout << "Raw:     " << raw << std::endl;

	// Correction: deserialize convierte el uintptr_t de vuelta a Data*
	Data* ptr = Serializer::deserialize(raw);
	std::cout << "\n=== Deserialized ===" << std::endl;
	std::cout << "Address: " << ptr << std::endl;
	std::cout << "Name:    " << ptr->name << std::endl;
	std::cout << "Value:   " << ptr->value << std::endl;

	// Correction: el puntero deserializado debe ser identico al original
	std::cout << "\n=== Comparison ===" << std::endl;
	if (ptr == &data)
		std::cout << "OK: pointers match" << std::endl;
	else
		std::cout << "KO: pointers don't match" << std::endl;

	return 0;
}
