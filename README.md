# Daily Temperatures – C++ Implementation

## 🧠 Problem Description

Given a list of daily temperatures (integers), the task is to calculate for each day how many days you would have to wait until a warmer temperature. If there is no future day with a warmer temperature, put `0` instead.

**Example Input:**

```cpp
{50, 78, 60}
```

**Expected Output:**

```cpp
[1, 0, 0]
```

Explanation:

* Day 0 → 78 is warmer after 1 day.
* Day 1 → no warmer day.
* Day 2 → no warmer day.

---

## 💡 Solution Overview

This C++ program implements the solution using a **monotonic stack** and C++20 concepts:

* We iterate through the temperature array.
* We maintain a stack of temperature-day pairs.
* For each temperature, we pop from the stack until we find a warmer day and calculate the number of days waited.

### Key Features:

* Written in **modern C++20** using `concept` for type restriction.
* Returns a `shared_ptr` to a result vector.
* Organized across `.hpp` and `.cpp` files for reusability.

---

## 💠 Build Instructions

Ensure you have a modern compiler (e.g., `g++ 10+`) that supports C++20.

### Compile with Make:

```bash
make
```

### Run:

```bash
./daily_temp
```

### Clean the build:

```bash
make clean
```

---

## 🧮 File Structure

```
daily-temperatures/
├── daily_temp.cpp       # Main driver program
├── daily_temp.hpp       # Core logic using stack + concepts
├── Makefile             # Build automation
└── README.md            # Project description
```

---

## 🧠 Concept Used

A custom C++20 `concept` called `numerical` ensures that the function `daily_temperatures()` only accepts numeric types (e.g., `int`, `float`, `double`).

---

## 👤 Author

Amit Nachum
