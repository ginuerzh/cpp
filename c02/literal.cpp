#include <iostream>

int main() {
	int i = 0xffffffff;
	std::cout << i << std::endl;
	// A decimal literal has the smallest type of int, long, or long long
	// in which the literal’s value fits.
	std::cout << sizeof(1) << " " << sizeof(2147483648) /* 0x80000000 */ << " "
		<< sizeof(9223372036854775807) /* 0x7FFFFFFFFFFFFFFF */ << " "
		<< sizeof(9223372036854775808) /* 0x8000000000000000 */ << " " 
		<< sizeof(1111111111111111111111111111111111111111111111111111111111111) << std::endl;
	std::cout << 2147483648 << " " << 9223372036854775807 << std::endl;
	// Octal and hexadecimal literal has the smallest type of int, unsigned int, 
	// long, unsigned long, long long or unsigned long long in which the literal’s value fits.
	std::cout << sizeof(0xffff) << " " << sizeof(0xffffffff) << " "
		<< sizeof(0xfffffffff) << " " << sizeof(0xffffffffffffffff) << " " << 
		sizeof(0x10000000000000000) << std::endl;
	std::cout << 0xffffffff << " " << 0xfffffffff << " " << 0xffffffffffffffff << " "
		<< -0xffffffff << " " << 42 << std::endl;
	// error excess max value (long long), you can not print out
	// std::cout << 9223372036854775808 << 0x10000000000000000 << std::endl; 
	// signed int arithmetic
	std::cout << 0xffffffff + 2 << " " << std::endl;
	// 1234.12
	std::cout << 1234.12345678912345 << std::endl;
	// default double
	std::cout << sizeof(.12345222222222f) << " " << sizeof(.1234) << std::endl;
	// \ followed by one, two, or three octal digits.
	std::cout << '\101' << " " << "\101" << " " << "\10101010" << std::endl;
	// wide character(wchar_t)
	std::cout << L'\x41' << " " << L"\x41" << std::endl;
	// hexadecimal escape sequence is the longest sequence of characters 
	// that can constitute the escape sequence.
	// see: https://stackoverflow.com/questions/5784969/when-did-c-compilers-start-considering-more-than-two-hex-digits-in-string-lite
	std::cout << "\x1234aBcdefob" << " " << L'\x1234' << " " << L"\x1234" << std::endl;

	return 0;
}
