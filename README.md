# 🧩 Memory Allocation Simulator (C)

> A console-based C project that simulates dynamic memory allocation using a linked list of memory blocks.

This project demonstrates how **memory fragmentation**, **allocation strategies**, and **block merging** work internally at a simplified system level.

---

## 📌 Project Overview

The simulator models a fixed-size memory space and allows:

- ✅ First-fit memory allocation
- ✅ Block splitting during allocation
- ✅ Freeing memory by allocation ID
- ✅ Merging adjacent free blocks
- ✅ Memory compaction (defragmentation)

The implementation is fully written in **C** using:
- Struct-based block modeling
- Pointer manipulation
- Linked list management
- Manual memory control

---

## 🧠 Concepts Demonstrated

| Concept | Description |
|---|---|
| Dynamic memory simulation | Models real allocator behavior |
| First-fit strategy | Scans from start, picks first fitting block |
| Internal & external fragmentation | Visualized via memory map |
| Linked list operations | Core data structure for block tracking |
| System-level memory logic | Mirrors OS-level allocator design |
| Modular C project structure | Multi-file, clean separation of concerns |

---

## 🗂 Project Structure
```
memory-allocation-simulator/
│
├── main.c        # User interaction & CLI menu
├── memory.c      # Core memory allocation logic
├── memory.h      # Data structures & API definitions
├── Makefile      # Build configuration
└── README.md
```

---

## ⚙️ Build & Run

**Compile:**
```bash
make
```

**Run:**
```bash
./memsim
```

---

## 💻 Example Usage
```
1. Initialize memory with total size (e.g., 256)
2. Allocate blocks (e.g., 50, 30, 70)
3. Free blocks by ID
4. Print memory map to observe fragmentation
5. Compact memory to remove fragmentation
```

---

## 🎯 Purpose

This project was built to strengthen understanding of:
- Memory allocation mechanisms
- Pointer logic and block management
- Structured system-level programming in C

---
## 🔍 Example Output

Example session:


Enter total simulated memory size: 256

Allocate 50
Allocated with ID = 1

Allocate 30
Allocated with ID = 2

Free ID 1

Memory map:
Start Size Status
0 50 FREE
50 30 ALLOCATED
80 176 FREE


This demonstrates memory fragmentation and block merging behavior.
## 👤 Author

**Denys Alimov**  
Computer Science student focused on systems programming and memory management.
