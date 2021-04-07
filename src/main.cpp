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
  cout << endl << "Изначальный массив: " << array << endl;
  return 0;
}
