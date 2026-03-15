# 📚 Week 5 – Data Structures
### CS50x | Hash Tables & Linked Lists

This repository contains exercises and a group assignment for practicing
fundamental data structures in C, based on **CS50x Week 5**.

---

## 🎯 Learning Objectives

Students will practice:
- **Hash functions** – converting data into array indices
- **Linked lists** – dynamic memory and pointer-based structures
- **Dictionary lookup** – combining hash tables and linked lists
- **Memory management** – using `malloc`, `free`, and avoiding leaks

The exercises are designed to be solved **collaboratively** using the peer mentoring system.

---

## 👥 How to Work in Groups

This repository uses a **peer mentoring system**. Here's how it works:

1. **Form groups of 3–4 students.** Each group should have at least one student who has prior experience with pointers or structs (the *mentor*).
2. **Tackle exercises together.** Read the exercise description aloud, discuss the approach before writing any code, and rotate who types.
3. **Mentor role:** The mentor should *guide* — ask questions, don't just give answers. Help teammates think through the problem.
4. **Use comments liberally.** Explain your logic in code comments as you go. This helps the whole group stay aligned.
5. **Don't skip to solutions.** The `solutions/` folder is for instructors. Work through the problems yourselves first — the struggle is the learning!
6. **Ask for help:** If your group is stuck for more than 15 minutes, raise your hand for the instructor.

---

## 🛠️ Compiling and Running

This course uses **cs50.dev** (a VS Code environment in the browser). All exercises use the CS50 library.

### Compiling with `make`

```bash
make filename
./filename
```

### Examples

```bash
# Exercise 1 – Hash Function
cd exercises/hash_function
make hash
./hash

# Exercise 2 – Linked List
cd exercises/linked_list
make list
./list

# Exercise 3 – Dictionary Search
cd exercises/dictionary_search
make search
./search

# Assignment – Mini Dictionary
cd assignment/mini_dictionary
make main
./main
```

> 💡 **Tip:** If you get a compiler error, read it carefully from top to bottom. The first error is usually the most important one.

---

## 📂 Repository Structure

```
cs50-week5-data-structures
│
├── README.md               ← You are here
├── EXERCISES.md            ← Exercise descriptions and hints
│
├── exercises/
│   ├── hash_function/
│   │   └── hash.c          ← Exercise 1 starter code
│   ├── linked_list/
│   │   └── list.c          ← Exercise 2 starter code
│   └── dictionary_search/
│       └── search.c        ← Exercise 3 starter code
│
├── assignment/
│   └── mini_dictionary/
│       ├── dictionary.c    ← Your implementation goes here
│       ├── dictionary.h    ← Header file (do not modify)
│       ├── dictionary.txt  ← Word list loaded at runtime
│       └── main.c          ← Entry point (do not modify)

```

---

## 📝 Exercises Overview

See **[EXERCISES.md](EXERCISES.md)** for full descriptions, hints, and expected output.

| # | Exercise | Concept | Difficulty |
|---|----------|---------|------------|
| 1 | Hash Function | Hashing, modular arithmetic | ⭐ |
| 2 | Linked List | Structs, `malloc`, pointers | ⭐⭐ |
| 3 | Dictionary Search | Arrays of strings, searching | ⭐⭐ |

---

## 🏆 Assignment – Mini Dictionary

After completing the exercises, each group will implement a **Mini Dictionary** in the `assignment/mini_dictionary/` folder.

**What it does:**
- Loads words from `dictionary.txt` at startup
- Stores them in a **hash table** using **linked lists** (chaining)
- Lets the user search for any word
- Prints `Found` or `Not Found`

**What you must use:**
- `struct` definitions
- Linked lists with dynamic memory (`malloc` / `free`)
- A hash table with at least 26 buckets
- Proper memory cleanup on exit

**Example interaction:**
```
Enter word: computer
Found

Enter word: elephant
Not Found
```

**Grading criteria:**
- [ ] Words load correctly from file
- [ ] Hash function distributes words reasonably
- [ ] Search works correctly (case-insensitive is a bonus!)
- [ ] No memory leaks (check with `valgrind ./main`)
- [ ] Code is readable and commented

---

## 📖 Resources

- [CS50 Week 5 Notes](https://cs50.harvard.edu/x/2024/notes/5/)
- [CS50 Manual Pages](https://manual.cs50.io/)
- [Valgrind Docs](https://valgrind.org/docs/manual/quick-start.html)

---

*Good luck, and remember: every expert was once a beginner. Work together! 🚀*
