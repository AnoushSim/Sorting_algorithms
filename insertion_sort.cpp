#include <iostream>

template <typename T>
void insertion_sort ( T* , int size);

int main()
{
    int count;
    std::cout << "Enter the number of array elements: ";
    std::cin >> count;
    int* arr = new int[count];
    std::cout << "Enter the elements: \n";
    for(int ix = 0; ix < count; ++ix) {
        std::cin >> arr[ix];
    }
    
    insertion_sort<int> (arr,count);
    std::cout << "Your sorted array is:\n";
    for(int ix = 0; ix < count; ++ix) {
        std::cout << arr[ix] << " ";
    }
   return 0; 
}

template <typename T>
void insertion_sort ( T* arr, int size)
{
   for (int ix = 1; ix < size; ++ix) {
       T cur = arr[ix];
       int jx = ix - 1; 
       while ( jx >= 0 && cur < arr[jx]) {
           arr[jx + 1] = arr[jx];
           jx--;
       }
       arr[jx + 1] = cur;
   }
}
