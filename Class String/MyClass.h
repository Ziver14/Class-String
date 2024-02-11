#pragma once
#include<iostream>
#include<string>

#ifndef MY_CLASS_HPP
#define MY_CLASS_HPP

class MyString {
private:
	char* data;
	int length;
public:
	//Конструктор по умолчанию, который создает строку размером 80 символов
	//и заполняет ее нулями
	MyString() {
		length = 80;
		data = new char[length + 1];
		std::memset(data, 0, sizeof(char) * (length + 1));
	}

	//Конструктор для создания строки произвольного размера
	MyString(int size) {
		length = size;
		data = new char[length + 1];
		std::memset(data, 0, sizeof(char) * (length + 1));
	}
	//Конструктор создания строки с инициализацией от пользователя
	MyString(const char* str_){
		length = static_cast<int> (std::strlen(str_));
		data = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			data[i] = str_[i];
		}
		data[length] = '\0';
	}

	

	//Ввод строки с клавиатуры
	void Input() {
		std::cout << "Введите строку -> ";
		std::cin.getline(data, length + 1);
	}

	//Вывод строки
	void Output() {
		std::cout << data << std::endl;
	}

	~MyString() {
		delete[]data;

	}

};









#endif  