# 📋 Exercises – Week 5: Data Structures

Work through these exercises **in order** with your group. Each exercise builds on
concepts from the previous one.

---

## Exercise 1 – Hash Function

**File:** `exercises/hash_function/hash.c`

### What is a Hash Function?

A hash function takes an input (like a word) and converts it to a number (an *index*).
This lets us store and look up data in an array in **O(1)** time on average.

### Your Task

Implement a hash function that converts the **first letter** of a word into a number
between `0` and `25` (where `a` → 0, `b` → 1, ..., `z` → 25).

### Expected Output

```
Word: apple
Hash index: 0

Word: banana
Hash index: 1

Word: Zebra
Hash index: 25
```

### Hints

- Use `tolower()` from `<ctype.h>` to handle uppercase letters
- Remember that `'a'` has an ASCII value of 97 — subtraction is your friend!
- What should happen if the word is empty? Add a check.

### Group Discussion Questions

1. What are the limitations of hashing only on the first letter?
2. What happens if you have 100 words that all start with 'a'?
3. Can you think of a better (but still simple) hash function?

---

## Exercise 2 – Linked List

**File:** `exercises/linked_list/list.c`

### What is a Linked List?

A linked list is a chain of *nodes*, where each node stores:
1. A **value** (in our case, a word)
2. A **pointer** to the next node in the chain

Unlike arrays, linked lists can grow and shrink dynamically.

### Your Task

Create a linked list that:
1. Asks the user to enter **5 words**
2. Stores each word in a new node using `malloc`
3. Links all nodes together
4. Prints all words in the list from first to last
5. Frees all memory at the end

### Expected Output

```
Enter word 1: hello
Enter word 2: world
Enter word 3: data
Enter word 4: struct
Enter word 5: pointer

Your list:
hello -> world -> data -> struct -> pointer -> NULL
```

### Node Structure to Use

```c
typedef struct node
{
    char word[50];
    struct node *next;
}
node;
```

### Hints

- `malloc(sizeof(node))` allocates memory for one node
- Always check if `malloc` returned `NULL` (out of memory!)
- To traverse the list, use a temporary pointer: `node *tmp = head;`
- To free the list, use a loop — don't free `head` before saving `head->next`!

### Group Discussion Questions

1. What is the difference between `node *next` and `node next` in the struct?
2. Why must we use `malloc` here instead of a regular variable?
3. What would happen if we forgot to call `free`?

---

## Exercise 3 – Dictionary Search

**File:** `exercises/dictionary_search/search.c`

### Your Task

Create a program that:
1. Stores **10 hardcoded words** in an array
2. Asks the user to enter a word
3. Searches the array for that word
4. Prints `"Found!"` or `"Not found."`

### Expected Output

```
Enter a word to search: computer
Found!

Enter a word to search: elephant
Not found.
```

### Word List to Use

```c
char *words[10] = {
    "apple", "banana", "computer", "science",
    "hash", "table", "memory", "pointer", "program", "code"
};
```

### Hints

- Use `strcmp()` from `<string.h>` to compare strings — **don't use `==`**!
- `strcmp(a, b)` returns `0` when the strings are equal
- Use a `for` loop to check each word in the array

### Group Discussion Questions

1. What is the time complexity of this search? (How many comparisons in the worst case?)
2. How is this different from a hash table lookup?
3. If the array had 1 million words, would this approach still be acceptable?

---

## 🏁 Checkpoint: Before the Assignment

Before starting the assignment, make sure your group can answer:

- [ ] How does a hash function map a string to an index?
- [ ] How do you create a new linked list node with `malloc`?
- [ ] How do you traverse a linked list from head to tail?
- [ ] How do you compare two strings in C?
- [ ] What does it mean to "free" memory?

If your group is unsure about any of these, revisit the relevant exercise or ask your instructor.

---

*Happy coding! 💻*
