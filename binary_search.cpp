#include <vector>
using namespace std;

/* Returns either the index of the location in the array,
  or -1 if the array did not contain the targetValue */
int doSearch(vector<int>& array, int targetValue) {
	int min = 0;
	int max = array.size() - 1;
  
  while(min <= max)
  {
    int mid = (min+max)/2;

    if (array[mid] == targetValue)
      return mid;
    else if (array[mid] < targetValue)
      min = mid+1;
    else
      max = mid-1;
  }
  
	return -1;
};
