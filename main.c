/*
 * Memory Allocation Simulator
 * Author: Denys Alimov
 * Description: First-fit memory allocation simulation using linked list blocks.
 */

#include <stdio.h>
#include <stdlib.h>
#include "memory.h"

static void menu(void) {
    printf("\n=== Memory Allocation Simulator ===\n");
    printf("1) Allocate block\n");
    printf("2) Free block by ID\n");
    printf("3) Print memory map\n");
    printf("4) Compact memory\n");
    printf("0) Exit\n");
    printf("Choose: ");
}

int main(void) {
    size_t total;
    int choice;

    printf("Enter total simulated memory size (e.g., 256): ");
    if (scanf("%zu", &total) != 1 || total == 0) {
        printf("Invalid size.\n");
        return 1;
    }

    mem_init(total);

    while (1) {
        menu();
        if (scanf("%d", &choice) != 1) {
            printf("Input error.\n");
            break;
        }

        if (choice == 1) {
            size_t s;
            printf("Size to allocate: ");
            if (scanf("%zu", &s) != 1) { printf("Input error.\n"); continue; }

            int id = mem_alloc(s);
            if (id < 0) printf("Allocation failed.\n");
            else printf("Allocated with ID = %d\n", id);

        } else if (choice == 2) {
            int id;
            printf("ID to free: ");
            if (scanf("%d", &id) != 1) { printf("Input error.\n"); continue; }

            if (mem_free(id) == 0) printf("Freed.\n");
            else printf("ID not found.\n");

        } else if (choice == 3) {
            mem_print();

        } else if (choice == 4) {
            mem_compact();
            printf("Compaction done.\n");

        } else if (choice == 0) {
            break;

        } else {
            printf("Unknown option.\n");
        }
    }

    mem_destroy();
    return 0;
}
