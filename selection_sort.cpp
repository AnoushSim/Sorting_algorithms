#include <iostream>

template <typename T>
int  max_index (T*,int);

template <typename T>
void selection_sort (T*, int);

int main()
{
  const int number = 5;
  int arr[number];
  std::cout << "Enter the elements of array:" << std::endl;
  for (int ix = 0; ix < number; ++ix) 
	  std::cin >> arr[ix];
  selection_sort<int> ( arr, number);
  std::cout << "Your sorted array is:" << std::endl;
  for (int ix = 0; ix < number; ++ix)
	  std::cout << arr[ix] << " ";
  return 0;
}

template <typename T>
int max_index (T* arr, int size)
{
	int max = 0;
	for (int ix = 1; ix < size; ++ix) {
	    if (arr[max] < arr[ix]) {
	       max = ix;
	    }
	}
	return max;
}	

template <typename T>
void selection_sort (T* arr, int size) 
{
	for (int last = size - 1; last >= 1; --last) {
	    int max = max_index (arr,last+1);
	    std::swap(arr[max],arr[last]); 
	}	
}
