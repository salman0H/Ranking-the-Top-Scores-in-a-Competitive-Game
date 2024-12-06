# Kth Largest Element Finder

## Project Overview
This C++ project implements a Divide & Conquer algorithm to find the Kth largest element in an array efficiently using the QuickSelect method.

## Problem Statement
In the competitive game "CodeWarz", the leaderboard system needs to quickly identify the Kth largest score from a large dataset of player scores.

## Algorithm Approach
- **Method**: QuickSelect (Divide & Conquer)
- **Time Complexity**: O(n) average case, O(n²) worst case
- **Space Complexity**: O(1)

## Features
- Efficiently finds the Kth largest element
- Handles multiple test cases
- Error handling for invalid inputs
- In-place array modification

## How It Works
1. Uses recursive partitioning to narrow down the search space
2. Selects a pivot element in each iteration
3. Rearranges array elements around the pivot
4. Recursively searches the appropriate subarray

## Example Usage
```cpp
KthLargestFinder finder;
std::vector<int> arr = {15, 3, 8, 12, 7, 10, 5};
int k = 3;
int result = finder.findKthLargest(arr, k); // Returns 10
```

## Test Cases
- `[15, 3, 8, 12, 7, 10, 5]`, k = 3
- `[100, 50, 75, 25, 125, 90, 60, 30]`, k = 5
- `[5, 20, 10, 15, 25, 35, 30]`, k = 2

## Compilation
Compile with a C++11 or later compiler:
```bash
g++ -std=c++11 kth_largest.cpp -o kth_largest
```

