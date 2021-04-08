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
 * Создаёт массив, упорядоченный по умолчанию в порядке возрастания
 * @param length        количество элементов массива
 * @param increasing    если true, то создаётся массив, элементы которого расположены в порядке возрастания
 */
std::vector<int> generateSorted(const int& length, const bool& increasing) {
  std::vector<int> array(length);

  if (increasing) {
    for (int i = 0; i < length; ++i) {
      array[i] = i;
    }

    return array;
  }

  for (int i = length - 1, j = 0; i >= 0; --i, ++j) {
    array[j] = i;
  }

  return array;
}


/**
 * Упорядочивает массив по возрастанию с помощью алгоритма сортировки пузырьком
 * @param array         упорядочиваемый массив
 */
void bubbleSort(std::vector<int>& array) {
  const int N = array.size();

  unsigned long long comparisons = 0;
  unsigned long long transferrings = 0;

  for (int i = 0; i < N - 1; ++i) {
    for (int j = 0; j < N - i - 1; ++j) {   // до самого последнего элемента не нужно доходить
      ++comparisons;
      if (array[j] > array[j + 1]) {
        ++transferrings;
        std::swap(array[j], array[j + 1]);
      }
    }
  }

  std::cout << "Выполнено сравнений: " << comparisons << std::endl;
  std::cout << "Выполнено перемещений: " << transferrings << std::endl;
}


/**
 * Упорядочивает массив по возрастанию с помощью алгоритма сортировки вставками
 * @param array         упорядочиваемый массив
 */
void insertionSort(std::vector<int>& array) {
  const int N = array.size();

  unsigned long long comparisons = static_cast<unsigned long long>(N / 2 * (N - 1));
  unsigned long long transferrings = 0;

  for (int i = 1; i < N; ++i) {
    for (int j = i; j > 0 && array[j] < array[j - 1]; --j) {
      // ++comparisons;
      // if (array[j] < array[j - 1]) {
      //   std::swap(array[j], array[j - 1]);
      //   ++transferrings;
      // }
      std::swap(array[j], array[j - 1]);
      ++transferrings;
    }
  }

  std::cout << "Сравнений: " << comparisons << std::endl;
  std::cout << "Перемещений: " << transferrings << std::endl;
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
