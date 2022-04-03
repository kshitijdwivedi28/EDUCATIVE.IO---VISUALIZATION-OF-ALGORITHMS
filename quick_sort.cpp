#include <vector>
using namespace std;

// Swaps two items in an array, changing the original array
void swap(vector<int>& array, int firstIndex, int secondIndex) {
    int temp = array[firstIndex];
    array[firstIndex] = array[secondIndex];
    array[secondIndex] = temp;
};

void partition(vector<int>& array, int p, int r) {
    // Compare array[j] with array[r], for j = p, p+1,...r-1
    // maintaining that:
    //  array[p..q-1] are values known to be <= to array[r]
    //  array[q..j-1] are values known to be > array[r]
    //  array[j..r-1] haven't been compared with array[r]
    // If array[j] > array[r], just increment j.
    // If array[j] <= array[r], swap array[j] with array[q],
    //   increment q, and increment j. 
    // Once all elements in array[p..r-1]
    //  have been compared with array[r],
    //  swap array[r] with array[q], and return q.

    int q = p;
    for(int j = p; j < r; j++)
    {
        if (array[j] > array[r])
            continue;
        else if (array[j] <= array[r])
        {
            swap(array, j, q);
            q++;
        }
    }

    swap(array, r, q);
};

// Takes in an array and recursively merge sorts it
void quickSort(vector<int>& array, int low, int high) {
	// Write method here
    if (low < high) 
    {
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
    
};
