# 📚 Week 5 – Linked Lists & Dynamic Memory
### CS50x | Group Exercise Session

This repository contains **3 focused exercises** and one **mini assignment**,
based directly on the CS50x Week 5 source files.

All code in this repo comes from the official CS50 material (`list1.c` → `list6.c`).
Your job is to **read, understand, complete, and extend** it — together.

---

## 👥 How to Work in Groups

1. **Form Groups**
2. **Read before you write.** Before touching the keyboard, read the starter file aloud as a group and make sure everyone understands each line.
3. **Use the discussion questions** in `EXERCISES.md` — they are not optional. They are the most important part.
4. **Don't copy-paste solutions.** The `solutions/` folder is locked for students. The struggle is the point.
5. **Stuck for 10+ minutes?** Raise your hand — don't waste group time.

---

## 🛠️ Compiling & Running (cs50.dev)

```bash
make filename
./filename
```

**Examples:**

```bash
# Exercise 1
cd exercises/ex1_dynamic_array
make list1
./list1

# Exercise 2
cd exercises/ex2_linked_list_prepend
make list3
./list3

# Exercise 3
cd exercises/ex3_free_list
make list6
./list6

# Assignment
cd assignment/list_manager
make manager
./manager
```

---

## 📂 Repository Structure

```
cs50-week5-data-structures/
│
├── README.md
├── EXERCISES.md
│
├── exercises/
│   ├── ex1_dynamic_array/       ← list1.c  (malloc, realloc, free)
│   ├── ex2_linked_list_prepend/ ← list3.c  (nodes, prepend)
│   └── ex3_free_list/           ← list6.c  (traversal + free)
│
├── assignment/
│   └── list_manager/            ← Your mini project
│       ├── manager.c
│       └── manager.h
│
└── solutions/                   ← 🔒 Instructor only
```

---

## 📝 Exercise Overview

| # | File | Concept | From PDF |
|---|------|---------|----------|
| 1 | `list1.c` | `malloc`, `realloc`, resize an array | list1.c |
| 2 | `list3.c` | Define a node struct, prepend to list | list3.c |
| 3 | `list6.c` | Traverse a list and free all memory | list6.c |

See **[EXERCISES.md](EXERCISES.md)** for full descriptions and tasks.

---

## 🏆 Mini Assignment – List Manager

After the exercises, your group will build a small **interactive list manager** that lets a user add numbers, print the list, and quit — using a linked list and proper memory management.

See the `assignment/list_manager/` folder for the starter code and requirements.

---

*Work together. Think together. Break things together. 🚀*
