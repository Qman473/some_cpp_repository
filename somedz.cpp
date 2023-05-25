#include <iostream>

int gl_integer = -210000000; // Глобальное целое число.
char gl_char = -32; // Другое глобальное целое число, но маленькое.

int main() {
	const bool some_local_bool = true; // Локальное константное булевое значение.
	const double PI = 3.1415; // Локальное константное вещественное число с двойной точностью.

	std::string hello_world_text = "Hello world!"; // Текстовая переменная.
	std::string cpp_text = "Я учу C++ :)"; // Другая текстовая переменная.

	float some_float_var = 7.18; // Вещественное число
	unsigned char a = 'A'; // Символьное значение
	const unsigned long int long_int = 9e18; // Константное длинное положительное число
	unsigned int something = 66666; // Положительное целое число


	char int_to_char = gl_integer; // Присваиваем тип int к типу char. Грозит серьёзной потерей данных так как мы можем присвоить значение выше лимита, что делать нельзя.
	std::cout << int_to_char << std::endl; // Выводим результат и получаем ответ "A", потому что допустимые значения char - от -128 до 127, а мы перевели -210000000, что невозможно.

	int char_to_int = gl_char; // Присваиваем тип char к типу char. Не грозит потерей данных.
	std::cout << char_to_int << std::endl; // Выводим результат и получаем ответ "-32", всё нормально.

	int int_char = int(gl_char); // Переводим char в int. Не грозит потерей данных.

	char char_int = char(gl_integer); // Переводим int в char. Также грозит потерей данных.
}

