#include <ctime>
#include <string>
#include "./includes/funcs.hpp"

using namespace std;

int main() {
  int arrayLength;

  cout << "Введите количество элементов массива: ";
  cin >> arrayLength;

  string increasing;

  cout << "Создать возрастающую последовательность (да/нет)? ";
  cin >> increasing;

  vector<int> array;

  if (increasing == "да" || increasing == "ДА" || increasing == "Да" || increasing == "дА") {
    array = generateSorted(arrayLength);
    goto start;
  }

  array = generateSorted(arrayLength, false);


start:
  clock_t time = clock();
  bubbleSort(array);
  time = clock() - time;
  double elapsed = static_cast<double>(time) / CLOCKS_PER_SEC;
  cout << "Время выполнения: " << elapsed << " секунд" << endl;

  return 0;
}
