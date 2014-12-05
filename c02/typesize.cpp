#include <iostream>

int main() {
	bool b = true;
	char c = 'a';
	wchar_t wc;
	char16_t c16;
	char32_t c32;
	short s = 1;
	int i = 2;
	long l = 3;
	long long ll = 4;
	float f = 1.0;
	double d = 1.0;
	long double ld = 1.0;

	std::cout << "Type size:" << '\n'
		<< "bool:" << sizeof b << "\n"
		<< "char:" << sizeof c << "\n"
		<< "wchar_t:" << sizeof wc << "\n"
		<< "char16_t:" << sizeof c16 << "\n"
		<< "char32_t:" << sizeof c32 << "\n"
		<< "short:" << sizeof(s) << "\n"
		<< "int:" << sizeof i << "\n"
		<< "long:" << sizeof l << "\n"
		<< "long long:" << sizeof ll << "\n"
		<< "float:" << sizeof f << "\n"
		<< "double:" << sizeof d << "\n"
		<< "long double:" << sizeof ld << "\n"
		<< std::endl;
		
	return 0;
}
