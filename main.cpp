#include <iostream>
#include <vector>
#include <algorithm>

class KthLargestFinder {
private:
    // Partition function for QuickSelect algorithm
    int partition(std::vector<int>& arr, int left, int right) {
        int pivot = arr[right];
        int i = left - 1;

        for (int j = left; j < right; j++) {
            if (arr[j] >= pivot) {
                i++;
                std::swap(arr[i], arr[j]);
            }
        }

        std::swap(arr[i + 1], arr[right]);
        return i + 1;
    }

    // Recursive QuickSelect to find Kth largest element
    int quickSelect(std::vector<int>& arr, int left, int right, int k) {
        if (left == right) return arr[left];

        int pivotIndex = partition(arr, left, right);

        // Calculate the relative position of the pivot
        int relativePivotPosition = pivotIndex - left + 1;

        if (k == relativePivotPosition) {
            return arr[pivotIndex];
        }
        else if (k < relativePivotPosition) {
            return quickSelect(arr, left, pivotIndex - 1, k);
        }
        else {
            return quickSelect(arr, pivotIndex + 1, right, k - relativePivotPosition);
        }
    }

public:
    // Main method to find Kth largest element
    int findKthLargest(std::vector<int>& arr, int k) {
        if (k < 1 || k > arr.size()) {
            throw std::invalid_argument("Invalid k value");
        }

        return quickSelect(arr, 0, arr.size() - 1, k);
    }
};

// Function to solve the problem for given test cases
void solveTestCase(std::vector<int> arr, int k) {
    KthLargestFinder finder;

    std::cout << "Array: ";
    for (int num : arr) std::cout << num << " ";
    std::cout << "\nK: " << k << std::endl;

    try {
        int result = finder.findKthLargest(arr, k);
        std::cout << "Kth Largest Element: " << result << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
}

int main() {
    // Test cases from the problem statement
    solveTestCase({15, 3, 8, 12, 7, 10, 5}, 3);
    solveTestCase({100, 50, 75, 25, 125, 90, 60, 30}, 5);
    solveTestCase({5, 20, 10, 15, 25, 35, 30}, 2);

    return 0;
}
