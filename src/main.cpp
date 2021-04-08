#include <ctime>
#include <string>
#include "./includes/funcs.hpp"

using namespace std;

int main() {
  int arrayLength;

  cout << "Введите количество элементов массива: ";
  cin >> arrayLength;

  string needRange;

  cout << "Задать диапазон (да/нет)? ";
  cin >> needRange;

  vector<int> array;

  if (needRange == "да" || needRange == "ДА" || needRange == "Да" || needRange == "дА") {
    int arrayMinVal;
    int arrayMaxVal;

    cout << "Введите диапазон чисел: ";
    cin >> arrayMinVal >> arrayMaxVal;

    array = generate(arrayLength, arrayMinVal, arrayMaxVal);
    goto start;
  }

  array = generate(arrayLength);


start:
  clock_t time = clock();

  insertionSort(array);
  time = clock() - time;

  double elapsed = static_cast<double>(time) / CLOCKS_PER_SEC;
  cout << "Время выполнения: " << elapsed << " секунд" << endl;

  return 0;
}
