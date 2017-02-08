#ifndef __DEBUG_H__
#define __DEBUG_H__

#define DEBUG 2
#define debug_print(...) if (DEBUG==1) fprintf(stderr, __VA_ARGS__)
#define debug_print2(...)\
    if (DEBUG==2) { \
        fprintf(stderr, "=== \t%s:%d\t===", __FILE__, __LINE__);\
        fprintf(stderr, __VA_ARGS__); \
        fprintf(stderr, "\n"); \
    }
#endif 
