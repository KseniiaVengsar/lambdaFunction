// LambdaFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//�������� ���������, ������� ��� �������� �������� ������� (std::vector) �������� �� 3 � ������� ������-�������.
//������ �������, ����� �� ������ �������� � �����������

#include <iostream>
#include <vector>
#include <algorithm>
//

int main() {
    std::setlocale(LC_ALL, "RU");

    std::vector<int> numbers = { 4, 7, 9, 14, 12 };

    std::cout << "������� ������: ";

    //!!!NEW ��� ����� !!!Range-based for//����� �������� �� ������ � ���������, � � ������
    //�����������, ������� ����� ������ begin, end
    //����������� ���� ��� ���� foreach ������������ ��� �������� �� ��������� ��������� ��� ������������������ ��������
    //const auto& number : my_array-����� �� ����� ������� ������������ ����� ��� �������
    //const � & ��� ��������� �����������//��������� ��������� ��� ����� ������� �� ������ �� �������
 for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    // ���������� std::for_each � ������-�������
    //��� ����������� ������� �� ���������� � ���� ������ � ��:������ � ����� �������, ������-�������(������� ����� �������� ����� �������)
    std::for_each(numbers.begin(), numbers.end(), [](int& element) {
        if (element % 2 != 0) {
            element *= 3;
        }
        });

    std::cout << "�������� ������: ";

    // ������� ���������� �������� �������
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}

//std::for_each - ��� ������������������, 
//������� ��������� ��������� �������� ��� ������� �������� � �������� ���������
//numbers.begin() � numbers.end() - ��� ���������, ����������� �� ������ � ����� ���������� numbers. 
//��� ���������� �������� ���������, �� �������� ����� ��������� std::for_each
//[](int& element) { ... } - ��� ������-�������, ������� ����� ���������� ��� ������� �������� �������. 
//������-������� ��������� ���� �������� - ������ �� ������� ������� (����� ������������ ��� element


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
