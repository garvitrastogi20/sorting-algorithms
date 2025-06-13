# 📊 Sorting Algorithms in C++

This repository contains implementations of popular sorting algorithms using **C++**. Sorting is a fundamental concept in Data Structures and Algorithms (DSA) and is widely asked in interviews and competitive programming.

---

## 🚀 What's Inside

- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort
- Quick Sort

Each algorithm includes:
- ✅ Explanation  
- 🔁 Pseudocode  
- 🧠 Dry Run  
- 📈 Time & Space Complexity  

---

## 🛠️ Technologies Used

- C++
- VS Code / any C++ IDE
- Git for version control

---

## 🔄 1. Bubble Sort

### 📘 Explanation
Bubble Sort repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. It "bubbles" the largest element to the end in each pass.

### 🧾 Pseudocode
```cpp
for i = 0 to n-1:
for j = 0 to n-i-1:
if arr[j] > arr[j+1]:
swap arr[j] and arr[j+1];
```

### 🧠 Dry Run (Input: `[5, 3, 1]`)

| Pass | Array       | Swaps       |
|------|-------------|-------------|
| 1    | [3, 1, 5]   | 5↔3, 5↔1    |
| 2    | [1, 3, 5]   | 3↔1         |
| 3    | [1, 3, 5]   | -           |

### ⏱️ Time & Space Complexity

| Case      | Time       | Space |
|-----------|------------|-------|
| Best      | O(n)       | O(1)  |
| Average   | O(n²)      | O(1)  |
| Worst     | O(n²)      | O(1)  |

---

## 🔄 2. Selection Sort

### 📘 Explanation
Selection Sort selects the minimum element from the unsorted part and places it at the beginning.

### 🧾 Pseudocode
```cpp
for i = 0 to n-1:
min_idx = i
for j = i+1 to n:
if arr[j] < arr[min_idx]:
min_idx = j
swap arr[i] and arr[min_idx]
```

### 🧠 Dry Run (Input: `[5, 3, 1]`)

| Pass | Array       | Minimum Selected |
|------|-------------|------------------|
| 1    | [1, 3, 5]   | 1                |
| 2    | [1, 3, 5]   | 3                |
| 3    | [1, 3, 5]   | 5                |

### ⏱️ Time & Space Complexity

| Case      | Time       | Space |
|-----------|------------|-------|
| Best      | O(n²)      | O(1)  |
| Average   | O(n²)      | O(1)  |
| Worst     | O(n²)      | O(1)  |

---

## 🔄 3. Insertion Sort

### 📘 Explanation
Insertion Sort builds the final sorted array one item at a time by inserting elements into the correct position.

### 🧾 Pseudocode
```cpp
for i = 1 to n-1:
key = arr[i]
j = i - 1
while j >= 0 and arr[j] > key:
arr[j+1] = arr[j]
j = j - 1
arr[j+1] = key
```

### 🧠 Dry Run (Input: `[5, 3, 1]`)

| Pass | Array       | Action        |
|------|-------------|---------------|
| 1    | [3, 5, 1]   | 3 inserted    |
| 2    | [1, 3, 5]   | 1 inserted    |

### ⏱️ Time & Space Complexity

| Case      | Time       | Space |
|-----------|------------|-------|
| Best      | O(n)       | O(1)  |
| Average   | O(n²)      | O(1)  |
| Worst     | O(n²)      | O(1)  |

---

## 🔄 4. Merge Sort

### 📘 Explanation
Merge Sort is a **divide-and-conquer** algorithm. It splits the array into halves, recursively sorts each half, and merges them.

### 🧾 Pseudocode
```cpp
mergeSort(arr, low, high):
if low < high:
mid = (low + high) / 2
mergeSort(arr, low, mid)
mergeSort(arr, mid+1, high)
merge(arr, low, mid, high)
```

### 🧠 Dry Run (Input: `[4, 3, 2, 1]`)

- Divide: `[4, 3]` and `[2, 1]`  
- Recursively sort: `[3, 4]` and `[1, 2]`  
- Merge: `[1, 2, 3, 4]`

### ⏱️ Time & Space Complexity

| Case      | Time       | Space |
|-----------|------------|-------|
| Best      | O(n log n) | O(n)  |
| Average   | O(n log n) | O(n)  |
| Worst     | O(n log n) | O(n)  |

---

## 🔄 5. Quick Sort

### 📘 Explanation
Quick Sort is a **divide-and-conquer** algorithm. It picks a pivot and partitions the array into two halves based on it.

### 🧾 Pseudocode
```cpp
quickSort(arr, low, high):
if low < high:
pi = partition(arr, low, high)
quickSort(arr, low, pi - 1)
quickSort(arr, pi + 1, high)
```

### 🧠 Dry Run (Input: `[4, 2, 6, 1]`, pivot = 4)

- Partition: `[2, 1]` | 4 | `[6]`  
- Recurse left: `[1, 2]`  
- Final: `[1, 2, 4, 6]`

### ⏱️ Time & Space Complexity

| Case      | Time       | Space |
|-----------|------------|-------|
| Best      | O(n log n) | O(log n) |
| Average   | O(n log n) | O(log n) |
| Worst     | O(n²)      | O(log n) |

---

## 🤝 Contributing

Feel free to fork this repo, raise issues or submit pull requests to improve it.

---

## 👨‍💻 Author

**Garvit Rastogi**  
[GitHub Profile](https://github.com/garvitrastogi20)

---

## 📄 License

This project is licensed under the [MIT License](LICENSE).

