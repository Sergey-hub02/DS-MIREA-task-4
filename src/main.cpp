#include <ctime>
#include <string>
#include "./includes/funcs.hpp"

using namespace std;

int main() {
  int arrayLength;

  cout << "Введите количество элементов массива: ";
  cin >> arrayLength;

  vector<int> array;

  string needRange;

  cout << endl << "Задать диапазон чисел (да/нет)? ";
  cin >> needRange;

  if (needRange == "да" || needRange == "Да" || needRange == "дА" || needRange == "ДА") {
    int arrayMinValue;
    int arrayMaxValue;

    cout << "Введите диапазон чисел: ";
    cin >> arrayMinValue >> arrayMaxValue;

    array = generate(arrayLength, arrayMinValue, arrayMaxValue);
    goto start;       // не очень хорошо так делать
  }

  array = generate(arrayLength);

start:
  clock_t time = clock();
  bubbleSort(array);
  time = clock() - time;
  double elapsed = static_cast<double>(time) / CLOCKS_PER_SEC;
  cout << "Время выполнения: " << elapsed << " секунд" << endl;

  return 0;
}
