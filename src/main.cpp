#include <ctime>
#include <string>
#include "./includes/funcs.hpp"

using namespace std;

int main() {
  int arrayLength;

  cout << "Введите количество элементов массива: ";
  cin >> arrayLength;

  vector<int> array = generateSorted(arrayLength, false);

  clock_t time = clock();
  bubbleSort(array);
  time = clock() - time;
  double elapsed = static_cast<double>(time) / CLOCKS_PER_SEC;
  cout << "Время выполнения: " << elapsed << " секунд" << endl;

  return 0;
}
