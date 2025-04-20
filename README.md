# 🔥 C Programming Practice: 20 Essential Beginner Problems

📌 This document includes 20 handpicked C programming problems that I solved as part of my personal practice. Each problem is followed by a **clear explanation**, **real-world meaning**, and the **core logic** behind it — so I can revisit and revise easily.

---

## ✅ Problem Overview & Logical Explanation

### 1. 🟦 **Area of a Triangle**
- **What it means:** Measure the space inside a triangle using base and height.
- **Formula:** `Area = 0.5 * base * height`
- **Why it's useful:** Fundamental geometry, common in graphics & UI layout calculations.

---

### 2. 🧮 **Area of Triangle using 3 Sides (Heron’s Formula)**
- **What it means:** When base and height are unknown, use all sides to find the area.
- **Formula:**  
  `s = (a + b + c)/2`  
  `Area = √(s(s-a)(s-b)(s-c))`
- **Why:** Helps solve triangles from side lengths only.

---

### 3. 🟥 **Area of a Rectangle**
- **Meaning:** Space covered by a rectangle.
- **Logic:** `Area = length * width`
- **Why:** Used in layout planning, construction, etc.

---

### 4. ⚪ **Area of a Circle**
- **Meaning:** Measure space within a circle.
- **Logic:** `Area = π * r * r`  
  Use `π ≈ 3.1416`
- **Why:** Useful in geometry, real-world applications like pipe, wheels.

---

### 5. ♾️ **Even or Odd Checker**
- **Meaning:** Determine if a number is divisible by 2.
- **Logic:**  
  `if (n % 2 == 0)` → Even  
  Else → Odd
- **Why:** Widely used in decision making, loop control.

---

### 6. ➕ **Positive, Negative or Zero**
- **Meaning:** Check whether a number is above or below zero.
- **Logic:**  
  `if (n > 0)` → Positive  
  `if (n < 0)` → Negative  
  `if (n == 0)` → Zero
- **Why:** Used in input validation, control structures.

---

### 7. 📆 **Leap Year Checker**
- **Meaning:** Determine if a year contains 366 days.
- **Logic:**  
  A year is leap if:  
  `year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)`
- **Why:** Useful in calendar-based apps.

---

### 8. 🔠 **Capital or Small Letter Check**
- **Meaning:** Identify character case.
- **Logic:**  
  Use ASCII:  
  `'A'-'Z'` → Capital  
  `'a'-'z'` → Small
- **Why:** Needed in text parsing, validations.

---

### 9. 🔡 **Vowel or Consonant**
- **Meaning:** Check if character is a vowel.
- **Logic:**  
  If input in `{'a','e','i','o','u','A','E','I','O','U'}` → Vowel  
  Else → Consonant
- **Why:** Important in string operations.

---

### 10. 🌡️ **Temperature Converter (Switch Case)**
- **Meaning:** Convert between Celsius and Fahrenheit.
- **Logic:**  
  Use `switch`:
  - `C to F = (C * 9/5) + 32`  
  - `F to C = (F - 32) * 5/9`
- **Why:** Teaches menu-based logic + arithmetic.

---

### 11. 🧮 **Simple Calculator Using Switch**
- **Meaning:** Perform arithmetic (+, −, ×, ÷).
- **Logic:**  
  `switch(op)` for each operation.
- **Why:** Useful in building calculators or math tools.

---

### 12. 📊 **Multiplication Table**
- **Meaning:** Print times table for any number.
- **Logic:**  
  Loop from 1 to 10 and multiply.
- **Why:** Reinforces loop concepts.

---

### 13. ❗ **Factorial of a Number**
- **Meaning:** Multiply all integers till 1.  
  `n! = n * (n-1) * (n-2) ... * 1`
- **Logic:**  
  Use loop to multiply.
- **Why:** Used in permutations, combinations, math.

---

### 14. 🔍 **Prime Number Checker**
- **Meaning:** Number with only two divisors: 1 & itself.
- **Logic:**  
  Loop from 2 to √n, check divisibility.
- **Why:** Vital in cryptography, math logic.

---

### 15. 🔗 **GCD & LCM Calculator**
- **GCD:** Greatest common divisor (shared factor)  
  Logic: Euclidean algorithm  
- **LCM:** Lowest common multiple  
  Logic: `LCM = (a * b) / GCD`
- **Why:** Important in fraction, scheduling.

---

### 16. ➕ **Sum of Digits**
- **Meaning:** Add all digits of a number.
- **Logic:**  
  While number ≠ 0:  
  - `sum += num % 10`  
  - `num /= 10`
- **Why:** Useful in checksums, puzzles.

---

### 17. 🔁 **Reverse a Number**
- **Meaning:** Flip number’s digits (e.g. 123 → 321)
- **Logic:**  
  While num > 0:  
  - `reverse = reverse * 10 + num % 10`
- **Why:** Used in palindromes, logic puzzles.

---

### 18. 💎 **Armstrong Number**
- **Meaning:** Sum of cubes of digits equals the number.  
  Example: 153 = 1³ + 5³ + 3³ = 153
- **Logic:**  
  Extract digits, cube them, sum and compare.
- **Why:** Tests understanding of loops and power functions.

---

### 19. 🔢 **Count Digits of a Number**
- **Meaning:** Count how many digits are in a number.
- **Logic:**  
  Keep dividing by 10, increment a counter.
- **Why:** Used in digit-based problems.

---

### 20. 🧠 **Strong Number**
- **Meaning:** Sum of factorials of digits equals the number.  
  E.g. 145 = 1! + 4! + 5! = 145
- **Logic:**  
  Extract digits, find each factorial, sum and compare.
- **Why:** Helps develop nested loop logic.

---

## 🎓 What I Learned:
- Deepened my understanding of **loops**, **conditionals**, **modulo**, and **switch-case**.
- Gained confidence with **math-based logic building**.
- Strengthened logic thinking by solving from scratch.

---

✅ These problems are perfect for beginners aiming to master C programming logic and prepare for competitive exams, university viva, or interviews.

---
