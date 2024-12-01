# nixless
a horribly writen suckless styled nix package manager thing (kinda a joke obv). this is very exsperimental btw and works on my pc. also it doesnt manage dependancys. how to use it:
```
1. config the config.c file
2. rebuild it
2. run sudo (or doas) nixless
3. if you did it right then it should install stuff from the config file
```
---
to install/rebuild:
```
cd nixless/nixless-src
make install
```
if you want it in /bin/ (must be done if ur doing a rebuild and did this step during install)
```
sudo (or doas) make bin
```
