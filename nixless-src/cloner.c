#include <stdio.h>
#include <stdlib.h>
int system(const char *command);
int pkgin(char *pkgcmd) {
  system(pkgcmd);
}
int resetpkg() {
  pkgin("cd /nixless");
}
