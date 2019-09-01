#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "settings.h"


int total_test;

int test(float y, float z) {
    return printf("number: %f | %f \n", y, z);
}


int load_config(char *file) {
//    FILE * fp;
//
//    fp = fopen ("file.txt", "w+");
//    fprintf(fp, "%s %s %s %d", "We", "are", "in", 2012);
//
//    fclose(fp);
    return 0;
}


typedef struct config
{
    char host[100];
    int port;
} config;

int parse_line(struct config *config, char *buf) {

    if (config == NULL || buf == NULL) {
        return 0;
    }

    char varname[100];
    char value[100];
    const char *sep = "=\n"; // get also rid of newlines
    char *token;

    token = strtok(buf, sep);

    strncpy(varname, token, sizeof varname);
    varname[sizeof(varname) - 1] = 0; // making sure that varname is C-String

    trim(varname);

    token = strtok(NULL, sep);

    if (token == NULL) {
        // line not in format var=val
        return 0;
    }

    strncpy(value, token, sizeof value);
    value[sizeof(varname) - 1] = 0;

    trim(value);

    if (strcmp(varname, "port") == 0) {
        config->port = atoi(value);
        return 1;
    }


    if (strcmp(varname, "host") == 0) {
        strncpy(config->host, value, sizeof(config->host));
        config->host[(sizeof config->host) - 1] = 0;
        return 1;
    }

}