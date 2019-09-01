#ifndef _SETTINGS_H_
#define _SETTINGS_H_

// a constant definition exported by library:
#define MAX_TEST  20

// a type definition exported by library:
typedef struct test_struct {
    int x;
    float y;
} test_struct;

// a global variable exported by library
// "extern" means that this is not a variable declaration, it
// just defines that a variable named total_foo of type int
// exits and you can use it (its declaration is in some library source file)
extern int total_test;

// a function prototype for a function exported by library:
extern int test(float y, float z);

#endif