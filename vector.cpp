#include <vector>

std::vector<int> myVector() {
int arr[] = {16, 2, 77, 29};
// Create a vector containing integers
std::vector<int> v (arr, arr + sizeof(arr) /sizeof(arr[0]) );

// Add two more integers to vector
v.push_back(25);
v.push_back(13);

return v;
}
