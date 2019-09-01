#ifndef _SETTINGS_H_
#define _SETTINGS_H_

// a constant definition exported by library:
#define CONFIG_FILE  config

// a type definition exported by library:
typedef struct config {
    char username;
    char key_file;
    int max_auth_tries;
    bool auto_login;
    int max_games;
} config;

// a global variable exported by library
// "extern" means that this is not a variable declaration, it
// just defines that a variable named total_foo of type int
// exits and you can use it (its declaration is in some library source file)
extern int total_test;

// a function prototype for a function exported by library:
extern int load_config(float y, float z);
extern int parse_config(float y, float z);
extern int test(float y, float z);


#endif