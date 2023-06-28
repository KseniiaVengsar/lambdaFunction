// LambdaFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Напишите программу, которая все нечётные элементы массива (std::vector) умножает на 3 с помощью лямбда-функции.
//лямбда функции, когда не хочешь работать с указателями

#include <iostream>
#include <vector>
#include <algorithm>
//

int main() {
    std::setlocale(LC_ALL, "RU");

    std::vector<int> numbers = { 4, 7, 9, 14, 12 };

    std::cout << "Входные данные: ";

    //!!!NEW вид цикла !!!Range-based for//Может работать не только с массивами, а с любыми
    //коллекциями, которые имеют методы begin, end
    //диапазонный цикл или цикл foreach предназначен для итерации по элементам коллекции или последовательности значений
    //const auto& number : my_array-когда не очень хочется запариваться какие там объекты
    //const и & для избегания копирования//амперсанд посволяет нам брать объекты по ссылке не копируя
 for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    // Используем std::for_each и лямбда-функцию
    //это специальная функция из библиотеки и спец запись в неё:начало и конец вектора, лямбда-функцию(третьим можно впихнуть любую функцию)
    std::for_each(numbers.begin(), numbers.end(), [](int& element) {
        if (element % 2 != 0) {
            element *= 3;
        }
        });

    std::cout << "Выходные данные: ";

    // Выводим измененные элементы вектора
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}

//std::for_each - это алгоритмбиблиотеки, 
//который выполняет указанное действие для каждого элемента в заданном диапазоне
//numbers.begin() и numbers.end() - это итераторы, указывающие на начало и конец контейнера numbers. 
//Они определяют диапазон элементов, по которому будет проходить std::for_each
//[](int& element) { ... } - это лямбда-функция, которая будет вызываться для каждого элемента вектора. 
//Лямбда-функция принимает один аргумент - ссылку на элемент вектора (здесь обозначенный как element


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
