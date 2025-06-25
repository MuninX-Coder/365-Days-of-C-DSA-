
## ✅ `cout` – Console Output

```cpp
cout << "Hello";
```

* `cout`: Console output stream.
* `<<`: Insertion operator → sends data to output.
* Used to display text or variables on the screen.

🔧 *Under the hood:*
Data goes to an **output buffer**, then to the screen.

---

## ✅ `cin` – Console Input

```cpp
int age;
cin >> age;
```

* `cin`: Console input stream.
* `>>`: Extraction operator → takes data from input.
* Used to read values from the keyboard.

🔧 *Under the hood:*
Input goes to the **input buffer**, then is stored in the variable.

---

## ✅ `\n` vs `endl` – New Lines

| Feature | Use                  | Behavior                          |
| ------- | -------------------- | --------------------------------- |
| `\n`    | Adds newline         | Faster, does **not** flush buffer |
| `endl`  | Adds newline + flush | Slower, but **flushes output**    |

```cpp
cout << "Line1\nLine2";    // Just newline
cout << "Line1" << endl;   // Newline + flush
```

---

## ⚡ Quick Summary

* `cout << value;` → Output to screen
* `cin >> variable;` → Input from user
* `\n` → Newline (character only)
* `endl` → Newline + flush output buffer
