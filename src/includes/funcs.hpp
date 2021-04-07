#ifndef _FUNCS_HPP_
#define _FUNCS_HPP_

#include <random>
#include <vector>
#include <iostream>

/**
 * Создаёт массив, заполненный случайными числами в заданном диапазоне, заданной длины
 * @param length        количество элементов массива
 * @param min           минимальное значение элемента массива
 * @param max           максимальное значение элемента массива
 */
std::vector<int> generate(const int& length, const int& min = -10, const int& max = 25);


/**
 * Выводит массив на экран в формате [эл.1, эл.2, ..., эл.N]
 * @param out           поток вывода
 * @param array         массив, выводимый на экран
 */
std::ostream& operator<<(std::ostream& out, const std::vector<int>& array);


#endif
