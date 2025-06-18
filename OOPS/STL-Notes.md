# *STL (Standard Template Library) in C++*  

The *Standard Template Library (STL)* is a powerful set of *C++ template classes and functions* that provide *pre-implemented data structures and algorithms*, making programming easier and more efficient.  

### *Key Features of STL:*
✔ *Reusable* – Works with any data type (generic programming)  
✔ *Efficient* – Optimized for performance  
✔ *Well-tested* – Part of the C++ standard library  
✔ *Saves time* – No need to implement common data structures from scratch  

---

## *5 Main Components of STL*  

### *1. Containers (Data Structures)*  
*Purpose:* Store and organize data.  

#### *Types of Containers:*  
| *Category*       | *Containers*             | *Description* |
|-------------------|--------------------------|---------------|
| *Sequence*      | vector, list, deque, array, forward_list | Stores elements in a linear order |
| *Associative*   | set, multiset, map, multimap | Stores elements in a sorted order (usually tree-based) |
| *Unordered*     | unordered_set, unordered_map, etc. | Uses *hashing* for fast access (no sorting) |
| *Container Adapters* | stack, queue, priority_queue | Specialized interfaces built on other containers |

*Example:*  
cpp
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> nums = {10, 20, 30};
    nums.push_back(40);  // Add element
    for (int num : nums) {
        cout << num << " ";  // Output: 10 20 30 40
    }
    return 0;
}


---

### *2. Iterators (Generalized Pointers)*  
*Purpose:* Traverse through container elements.  

#### *Types of Iterators:*  
| *Iterator*       | *Description* |
|-------------------|---------------|
| *Input*         | Read-only forward traversal (e.g., istream_iterator) |
| *Output*        | Write-only forward traversal (e.g., ostream_iterator) |
| *Forward*       | Read/write forward traversal (e.g., forward_list) |
| *Bidirectional* | Read/write forward & backward (e.g., list) |
| *Random Access* | Direct access to any element (e.g., vector, array) |

*Example:*  
cpp
vector<int> nums = {1, 2, 3};
vector<int>::iterator it;  // Iterator declaration
for (it = nums.begin(); it != nums.end(); ++it) {
    cout << *it << " ";  // Output: 1 2 3
}


---

### *3. Algorithms (Predefined Operations)*  
*Purpose:* Perform operations on containers (searching, sorting, modifying).  

#### *Common Algorithms:*  
| *Category*       | *Examples* |
|-------------------|------------|
| *Sorting*       | sort(), stable_sort(), partial_sort() |
| *Searching*     | find(), binary_search(), count() |
| *Modifying*     | reverse(), copy(), fill(), replace() |
| *Numeric*       | accumulate(), min(), max() |

*Example:*  
cpp
#include <algorithm>
vector<int> nums = {5, 3, 8, 1};
sort(nums.begin(), nums.end());  // Sorts to {1, 3, 5, 8}


---

### *4. Functors (Function Objects)*  
*Purpose:* Objects that behave like functions (used in algorithms).  

#### *Types of Functors:*  
| *Type*       | *Example* |
|--------------|------------|
| *Arithmetic* | plus<int>, minus<int>, multiplies<int> |
| *Comparison* | greater<int>, less<int>, equal_to<int> |
| *Logical*   | logical_and<bool>, logical_or<bool> |

*Example:*  
cpp
#include <functional>
greater<int> compare;  // Functor to compare two numbers
if (compare(5, 3)) {  // Returns true (5 > 3)
    cout << "5 is greater than 3";
}


---

### *5. Allocators (Memory Management)*  
*Purpose:* Control memory allocation for containers (rarely modified).  

*Example:*  
cpp
vector<int, custom_allocator<int>> nums;  // Uses a custom allocator


---

## *Summary Table of STL Components*  
| *Component* | *Purpose* | *Examples* |
|-------------|-----------|------------|
| *Containers* | Store data | vector, map, stack |
| *Iterators* | Traverse data | begin(), end(), rbegin() |
| *Algorithms* | Operate on data | sort(), find(), reverse() |
| *Functors* | Function-like objects | greater<int>, plus<int> |
| *Allocators* | Memory management | Rarely used directly |

### *Why Use STL?*
✅ *Faster development* (no need to rewrite common structures)  
✅ *Optimized performance* (STL is highly efficient)  
✅ *Portable* (works across different compilers)  

STL is *essential* for competitive programming, software development, and system design in C++! 🚀
