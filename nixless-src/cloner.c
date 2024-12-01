#include <stdio.h>
#include <stdlib.h>
#include <alloca.h>
#include <string.h>

#include "cloner.h"

int runcmd(const char **pkgs) {
    if(system("mkdir -p /nixless")) {
        fprintf(stderr, "ERROR: could not create /nixless dir\n");
        return 1;
    }
    int i = 0;
    while (pkgs[i] != NULL) {
        size_t size = 16 + strlen(pkgs[i]);
        char *cmd = alloca(size * sizeof(char));
        snprintf(cmd, size, "%s%s", "cd /nixless && ", pkgs[i]);
        cmd[size] = '\0';
        if(system(cmd)) {
            fprintf(stderr, "error running cmd: %s\n", pkgs[i]);
        }
        i++;
    }
    return 0;
}

int clean_dir() {
    return system("rm -rf /nixless/");
}
