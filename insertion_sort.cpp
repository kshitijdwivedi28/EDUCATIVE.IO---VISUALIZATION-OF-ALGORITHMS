#include <vector>
using namespace std;

void insert(vector<int>& array, int rightIndex, int value) {

  for(j = rightIndex; j >= 0 && array[j] > value; j--)
    array[j + 1] = array[j];

  array[j + 1] = value; 
}

void insertionSort(vector<int>& array) {
  // Write this method	
  for(int i = 1; i < array.size(); i++)
      insert(array, i-1, array[i]);
      
  return;
}
