#ifndef _FUNCS_HPP_
#define _FUNCS_HPP_

#include <random>
#include <vector>
#include <iostream>
#include <algorithm>

/**
 * Создаёт массив, заполненный случайными числами в заданном диапазоне, заданной длины
 * @param length        количество элементов массива
 * @param min           минимальное значение элемента массива
 * @param max           максимальное значение элемента массива
 */
std::vector<int> generate(const int& length, const int& min = -10, const int& max = 25);


/**
 * Создаёт массив, упорядоченный по умолчанию в порядке возрастания
 * @param length        количество элементов массива
 * @param increasing    если true, то создаётся массив, элементы которого расположены в порядке возрастания
 */
std::vector<int> generateSorted(const int& length, const bool& increasing = true);


/**
 * Упорядочивает массив по возрастанию с помощью алгоритма сортировки пузырьком
 * @param array         упорядочиваемый массив
 */
void bubbleSort(std::vector<int>& array);


/**
 * Выводит массив на экран в формате [эл.1, эл.2, ..., эл.N]
 * @param out           поток вывода
 * @param array         массив, выводимый на экран
 */
std::ostream& operator<<(std::ostream& out, const std::vector<int>& array);


#endif
