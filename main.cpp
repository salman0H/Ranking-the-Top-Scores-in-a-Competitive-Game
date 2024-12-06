#include <iostream>
#include <vector>
#include <sstream>
#include <string>

class KthLargestFinder {
private:
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

    int quickSelect(std::vector<int>& arr, int left, int right, int k) {
        if (left == right) return arr[left];

        int pivotIndex = partition(arr, left, right);
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
    int findKthLargest(std::vector<int>& arr, int k) {
        if (k < 1 || k > arr.size()) {
            throw std::invalid_argument("Invalid k value");
        }

        return quickSelect(arr, 0, arr.size() - 1, k);
    }

    // New method to get user input
    static std::vector<int> getArrayInput() {
        std::vector<int> arr;
        std::string line;

        std::cout << "Enter array elements (space-separated): ";
        std::getline(std::cin, line);

        std::istringstream iss(line);
        int num;
        while (iss >> num) {
            arr.push_back(num);
        }

        return arr;
    }

    // New method to get K value
    static int getKValue(int arraySize) {
        int k;
        while (true) {
            std::cout << "Enter K (1-" << arraySize << "): ";
            std::cin >> k;

            if (k > 0 && k <= arraySize) {
                return k;
            }

            std::cout << "Invalid K. Please try again.\n";
        }
    }
};

int main() {
    try {
        // Get array input from user
        std::vector<int> arr = KthLargestFinder::getArrayInput();

        // Get K value from user
        int k = KthLargestFinder::getKValue(arr.size());

        // Create finder object
        KthLargestFinder finder;

        // Find and display Kth largest element
        int result = finder.findKthLargest(arr, k);

        std::cout << "The " << k << "th largest element is: " << result << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
