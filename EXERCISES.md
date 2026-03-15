# 📋 Exercises – Week 5: Linked Lists & Dynamic Memory

These three exercises follow the CS50x source files exactly.
Work through them **in order** — each one builds on the last.

---

## Exercise 1 – Dynamic Array (`list1.c`)

**File:** `exercises/ex1_dynamic_array/list1.c`

### What You're Looking At

This program starts with an array of 3 integers allocated with `malloc`,
then **grows it to size 4** by allocating a second array, copying the data over,
and freeing the original.

### Your Task

1. **Read the starter file** line by line as a group.
2. **Fill in the two TODO sections** — the copy loop and the final print loop.
3. Run the program. Expected output:
```
1
2
3
4
```

### Key Lines to Understand

```c
int *list = malloc(3 * sizeof(int));  // allocate space for 3 ints
int *tmp  = malloc(4 * sizeof(int));  // allocate space for 4 ints
free(list);                           // release the old array
list = tmp;                           // point list to the new array
```

### 🗣️ Group Discussion

1. What would happen if you forgot `free(list)` before `list = tmp`?
2. Why do we check `if (list == NULL)` after malloc?
3. `list1.c` copies manually. `list2.c` from the slides uses `realloc` instead.
   What does `realloc` do differently, and why is it safer?

---

## Exercise 2 – Prepend to a Linked List (`list3.c`)

**File:** `exercises/ex2_linked_list_prepend/list3.c`

### What You're Looking At

This program builds a **linked list of 3 integers** entered by the user.
Each new number is **prepended** (added to the front) — so the list ends up
in reverse order from how the user typed it.

### The Node Structure

```c
typedef struct node
{
    int number;
    struct node *next;
}
node;
```

### Your Task

1. **Read the starter file** as a group. Trace through the loop on paper with a diagram.
2. **Fill in the TODO** — the two lines that prepend `n` to the front of `list`.
3. The program doesn't print yet (that's Exercise 3). Add a `printf` loop at the end to verify your list.

### Draw It Out!

On paper or a whiteboard, draw boxes for each node with arrows for `next`.
After 3 iterations with inputs `1`, `2`, `3`, what does the list look like?
Which number is at the head?

### 🗣️ Group Discussion

1. After the loop, what order are the numbers stored in?
2. Why is prepending O(1) but appending (without a tail pointer) is O(n)?
3. What is the value of `list->next->next->next`?

---

## Exercise 3 – Free a Linked List (`list6.c`)

**File:** `exercises/ex3_free_list/list6.c`

### What You're Looking At

This program builds the same linked list as Exercise 2, then **frees all the memory**
using a `while` loop. This is the correct, safe way to clean up a linked list.

### The Dangerous Bug (Don't Do This!)

```c
// ❌ WRONG – this loses the chain before you can free it
while (ptr != NULL)
{
    free(ptr);
    ptr = ptr->next;  // ptr is already freed! undefined behavior
}
```

### The Correct Pattern

```c
// ✅ CORRECT – save next BEFORE freeing
while (ptr != NULL)
{
    node *next = ptr->next;  // save the next pointer
    free(ptr);               // now safe to free
    ptr = next;              // advance using the saved pointer
}
```

### Your Task

1. **Read the starter file** as a group.
2. The free loop is **intentionally left incomplete** with a TODO.
   Fill it in using the correct pattern above.
3. Run with `valgrind` to verify no memory leaks:

```bash
valgrind ./list6
```

You should see:
```
All heap blocks were freed -- no leaks are possible
```

### 🗣️ Group Discussion

1. Why can't we just call `free(list)` once at the end?
2. What does Valgrind actually check? What does "heap" mean?
3. In `list9.c` from the slides, the free logic is moved into a separate `unload()` function. Why is that better practice?

---

## ✅ Checkpoint Before the Assignment

Make sure your group can answer these before moving on:

- [ ] What's the difference between a stack-allocated array (`int list[3]`) and a heap-allocated one (`malloc(3 * sizeof(int))`)?
- [ ] What two lines prepend a new node `n` to a linked list called `list`?
- [ ] Why must you save `ptr->next` before calling `free(ptr)`?
- [ ] What tool checks for memory leaks in C?

If any of these are unclear, re-read the relevant exercise before starting the assignment.
