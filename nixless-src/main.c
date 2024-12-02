#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

#include "cloner.h"
#include "config.h"

static const struct option opts[] = {
    {"update",  no_argument, 0, 'u'},
    {NULL, 0, 0, 0}
};

int main(int argc, char **argv) {
	printf("Starting\n");

    int opt_index = 0;
    while(1) {
        int c = getopt_long(argc, argv, "u", opts, &opt_index);
        if(c == -1) {
            break;
        }
        switch(c) {
            case 'u':
                if(clean_dir()) {
                    fprintf(stderr, "ERROR: could not remove /nixless\n");
                    return EXIT_FAILURE;
                }
            case '?':
                fprintf(stderr, "Unreconized Flag\n");
                return EXIT_FAILURE;
            default:
                break;
        }
    }

    if(runcmd(commands)) {
        return EXIT_FAILURE;
    }

	printf("Done\n");
	return 0;
}
