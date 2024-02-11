#include"MyClass.h"

int main() {
	setlocale(LC_ALL, "ru");

	MyString str1;
	str1.Input();
	str1.Output();

	MyString str2(100);
	str2.Input();
	str2.Output();

	MyString str3("Hello");
	str3.Output();



	return 0;
}