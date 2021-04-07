#include "./funcs.hpp"

/**
 * Создаёт массив, заполненный случайными числами в заданном диапазоне, заданной длины
 * @param length        количество элементов массива
 * @param min           минимальное значение элемента массива
 * @param max           максимальное значение элемента массива
 */
std::vector<int> generate(const int& length, const int& min, const int& max) {
  using namespace std;

  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> distr(min, max);

  vector<int> array(length);

  for (int& element : array) {
    element = distr(gen);
  }

  return array;
}


/**
 * Упорядочивает массив по возрастанию с помощью алгоритма сортировки пузырьком
 * @param array         упорядочиваемый массив
 */
void bubbleSort(std::vector<int>& array) {
  const int N = array.size();

  for (int i = 0; i < N - 1; ++i) {
    for (int j = 0; j < N - i - 1; ++j) {   // до самого последнего элемента не нужно доходить
      if (array[j] > array[j + 1]) {
        std::swap(array[j], array[j + 1]);
      }
    }
  }
}


/**
 * Выводит массив на экран в формате [эл.1, эл.2, ..., эл.N]
 * @param out           поток вывода
 * @param array         массив, выводимый на экран
 */
std::ostream& operator<<(std::ostream& out, const std::vector<int>& array) {
  const int length = static_cast<int>(array.size());

  out << "[" << array[0];
  
  for (int i = 1; i < length; ++i) {
    out << ", " << array[i];
  }

  out << "]";

  return out;
}
