#include <iostream>

int gl_integer = -210000000; // ���������� ����� �����.
char gl_char = -32; // ������ ���������� ����� �����, �� ���������.

int main() {
	const bool some_local_bool = true; // ��������� ����������� ������� ��������.
	const double PI = 3.1415; // ��������� ����������� ������������ ����� � ������� ���������.

	std::string hello_world_text = "Hello world!"; // ��������� ����������.
	std::string cpp_text = "� ��� C++ :)"; // ������ ��������� ����������.

	float some_float_var = 7.18; // ������������ �����
	unsigned char a = 'A'; // ���������� ��������
	const unsigned long int long_int = 9e18; // ����������� ������� ������������� �����
	unsigned int something = 66666; // ������������� ����� �����


	char int_to_char = gl_integer; // ����������� ��� int � ���� char. ������ ��������� ������� ������ ��� ��� �� ����� ��������� �������� ���� ������, ��� ������ ������.
	std::cout << int_to_char << std::endl; // ������� ��������� � �������� ����� "A", ������ ��� ���������� �������� char - �� -128 �� 127, � �� �������� -210000000, ��� ����������.

	int char_to_int = gl_char; // ����������� ��� char � ���� char. �� ������ ������� ������.
	std::cout << char_to_int << std::endl; // ������� ��������� � �������� ����� "-32", �� ���������.

	int int_char = int(gl_char); // ��������� char � int. �� ������ ������� ������.

	char char_int = char(gl_integer); // ��������� int � char. ����� ������ ������� ������.
}

