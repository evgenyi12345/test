#include <iostream>
#include <memory>

void PrintInfo()
{
	std::unique_ptr<int>ret = std::make_unique<int>(213);
	std::cout << "    Значение сырого указателя toys=" << *ret << "\n";
}

int main() {
	setlocale(LC_ALL, "RU");

	std::cout << "=== Программа 'toys' начала свою работу! ===" << "\n";
	PrintInfo();
	std::cout << "=== Программа 'toys' закончила свою работу! ===" << "\n";
}