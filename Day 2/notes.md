

### 📘 **Basic Structure of a C++ Program**

```cpp
#include <iostream>   // 1. Preprocessor directive

int main() {          // 2. Main function - program starts here
    std::cout << "Hello, world!" << std::endl;  // 3. Output statement
    return 0;         // 4. End of program, return success
}
```

---

### 📝 **Short Notes:**

#### 1. `#include <iostream>`

* A **preprocessor directive**.
* Includes the **input-output library**.
* Needed to use `std::cout`, `std::cin`, etc.
* Runs **before** compilation.

---

#### 2. `int main()`

* Every C++ program **starts from `main()`**.
* `int` means it returns an integer to the OS.
* `main()` must return a value (usually `return 0;`).

---

#### 3. `{ ... }` (Curly Braces)

* Define a **code block**.
* Code inside runs as part of the function.
* Variables inside exist **only within these braces** (local scope).

---

#### 4. `std::cout << "Hello";`

* `std::cout`: Sends output to the **screen**.
* `<<`: Sends data to `cout`.
* `"Hello"`: The string/message.
* `std::endl`: Ends the line and flushes the output buffer.

---

#### 5. `return 0;`

* Ends the `main()` function.
* `0` means the program **ran successfully**.
* Sent back to the **operating system**.

---

### 🧠 Under the Hood (Quick Recap):

* Program starts at `main()`.
* Memory is managed inside `{}`.
* `#include` brings in extra tools (like `cout`).
* `return` tells the OS how the program ended.


