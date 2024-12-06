# Kth Largest Element Finder 🏆

## Project Description
An efficient C++ implementation of the QuickSelect algorithm to find the Kth largest element in an array using the Divide & Conquer approach.

## 🌟 Features
- Interactive user input
- QuickSelect algorithm
- O(n) average time complexity
- Dynamic array size support
- Robust input validation

## 🛠 Technical Overview

### Algorithm
- **Method**: QuickSelect (Divide & Conquer)
- **Time Complexity**: O(n) average case
- **Space Complexity**: O(1)

### Key Functions
- `partition()`: Array partitioning around pivot
- `quickSelect()`: Recursive element search
- `findKthLargest()`: Main algorithm implementation

## 📦 Requirements
- C++ Compiler (C++11 or later)
- Standard Template Library (STL)

## 📝 Libraries Used
```cpp
#include <iostream>     // Console I/O
#include <vector>       // Dynamic arrays
#include <sstream>      // String stream processing
#include <string>       // String manipulation
```

## 🚀 Compilation
```bash
g++ -std=c++11 main.cpp -o kth_largest
```

## 💻 Usage Example
```
Enter array elements (space-separated): 15 3 8 12 7 10 5
Enter K (1-7): 3
The 3th largest element is: 10
```

## 🔍 Algorithm Workflow
1. Select pivot element
2. Partition array
3. Recursively narrow search space
4. Find Kth largest element

## 🛡️ Error Handling
- Input validation
- K value range check
- Exception handling

## 📊 Performance Metrics
- Best Case: O(n)
- Average Case: O(n)
- Worst Case: O(n²)

## 🔬 Use Cases
- Gaming leaderboards
- Competitive ranking systems
- Large dataset processing

## 🤝 Contributing
1. Fork the repository
2. Create your feature branch
3. Commit changes
4. Push to the branch
5. Create pull request

## 👥 Authors
Salman Hashemi
