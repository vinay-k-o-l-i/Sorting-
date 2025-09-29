# Sorting
# Sorting Algorithms in C++

This repository contains implementations of **Selection Sort**, **Insertion Sort**, and **Bubble Sort** in C++.  
Each section includes **Aim**, **Theory**, **Algorithm**, and **Conclusion** for better understanding.

---

## 1. Selection Sort

### Aim
To implement Selection Sort in C++ and understand its working mechanism.

### Theory
Selection Sort is a simple comparison-based algorithm. It divides the array into a sorted and an unsorted part.  
The algorithm repeatedly selects the smallest (or largest) element from the unsorted portion and swaps it with the first unsorted element, thus growing the sorted part step by step.

- Time Complexity: **O(n²)** (best, average, worst)  
- Space Complexity: **O(1)** (in-place sorting)  
- Sorting Type: **Comparison-based, In-place, Not Stable**

### Algorithm
1. Start with the first element as the minimum.  
2. Compare this element with all other elements to find the smallest.  
3. Swap the smallest element with the first unsorted element.  
4. Move the boundary of the sorted part by one step.  
5. Repeat until the whole array is sorted.

### Conclusion
Selection Sort is easy to implement but inefficient for large datasets due to its **O(n²)** complexity. It is best suited for small arrays where simplicity is preferred over efficiency.

---

## 2. Insertion Sort

### Aim
To implement Insertion Sort in C++ and analyze its efficiency.

### Theory
Insertion Sort builds the sorted array one item at a time by repeatedly picking the next element and inserting it into the correct position among the already sorted elements.

- Time Complexity:  
  - Best Case (Already Sorted): **O(n)**  
  - Average & Worst Case: **O(n²)**  
- Space Complexity: **O(1)**  
- Sorting Type: **Stable, In-place**

### Algorithm
1. Consider the first element as sorted.  
2. Pick the next element.  
3. Compare it with elements in the sorted portion.  
4. Shift elements greater than the key to the right.  
5. Insert the key into its correct position.  
6. Repeat until all elements are sorted.

### Conclusion
Insertion Sort is efficient for **small datasets** and **nearly sorted arrays**. It is stable and easy to implement but performs poorly on large datasets due to quadratic time complexity.

---

## 3. Bubble Sort

### Aim
To implement Bubble Sort in C++ and study its performance.

### Theory
Bubble Sort repeatedly swaps adjacent elements if they are in the wrong order. With each pass, the largest element "bubbles up" to the end of the array.

- Time Complexity:  
  - Best Case (Already Sorted): **O(n)** (with optimization)  
  - Average & Worst Case: **O(n²)**  
- Space Complexity: **O(1)**  
- Sorting Type: **Stable, In-place**

### Algorithm
1. Compare each pair of adjacent elements.  
2. Swap them if they are in the wrong order.  
3. Repeat this process for all elements.  
4. After each pass, the largest element is placed at the end.  
5. Continue until no swaps are needed.

### Conclusion
Bubble Sort is simple but highly inefficient for large datasets. It is mainly useful for **teaching purposes** and understanding sorting concepts, not for real-world applications.

---

## Final Notes
- All three algorithms are easy to understand but **not efficient** for large input sizes.  
- **Insertion Sort** is the best among them for **small or nearly sorted arrays**.  
- For practical purposes, advanced algorithms like **Merge Sort, Quick Sort, or Heap Sort** are preferred.

---
