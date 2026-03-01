#ifndef MEMORY_H
#define MEMORY_H

#include <stddef.h>

/* One memory block in our simulated memory */
typedef struct Block {
    size_t start;          /* start index in simulated memory */
    size_t size;           /* size of the block */
    int    free;           /* 1 = free, 0 = allocated */
    int    id;             /* allocation id (for freeing) */
    struct Block *next;
} Block;

/* API */
void   mem_init(size_t total_size);
void   mem_destroy(void);
int    mem_alloc(size_t req_size);   /* returns allocation id, or -1 on failure */
int    mem_free(int id);             /* returns 0 on success, -1 if not found */
void   mem_print(void);              /* prints current memory map */
size_t mem_total_free(void);         /* total free bytes */
size_t mem_total_used(void);         /* total used bytes */
void   mem_compact(void);            /* optional: basic compaction */

#endif
