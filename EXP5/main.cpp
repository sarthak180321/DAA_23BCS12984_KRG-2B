class Solution {
  public:
    // Function to perform partition
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[high]; // pivot = last element
        int i = low - 1;       // index of smaller element

        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) { // if current element <= pivot
                i++;
                swap(arr[i], arr[j]); // place it in left side
            }
        }
        // place pivot in correct position
        swap(arr[i + 1], arr[high]);
        return i + 1; // return pivot index
    }

    // Function to perform QuickSort
    void quickSort(vector<int>& arr, int low, int high) {
        if (low < high) {
            // partition the array
            int pi = partition(arr, low, high);

            // Recursively sort left and right subarrays
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }
};
