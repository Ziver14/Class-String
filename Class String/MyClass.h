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
	//����������� �� ���������, ������� ������� ������ �������� 80 ��������
	//� ��������� �� ������
	MyString() {
		length = 80;
		data = new char[length + 1];
		std::memset(data, 0, sizeof(char) * (length + 1));
	}

	//����������� ��� �������� ������ ������������� �������
	MyString(int size) {
		length = size;
		data = new char[length + 1];
		std::memset(data, 0, sizeof(char) * (length + 1));
	}
	//����������� �������� ������ � �������������� �� ������������
	MyString(const char* str_){
		length = static_cast<int> (std::strlen(str_));
		data = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			data[i] = str_[i];
		}
		data[length] = '\0';
	}

	

	//���� ������ � ����������
	void Input() {
		std::cout << "������� ������ -> ";
		std::cin.getline(data, length + 1);
	}

	//����� ������
	void Output() {
		std::cout << data << std::endl;
	}

	~MyString() {
		delete[]data;

	}

};









#endif  