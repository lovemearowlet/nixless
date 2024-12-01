# nixless
a horribly writen suckless styled nix-like configed package manager thing (kinda a joke obv). this is very exsperimental btw and works on my pc. also it doesnt manage dependancys. how to use it:
```
1. config the config.c file
2. rebuild it
2. run sudo (or doas) nixless
3. if you did it right then it should install stuff from the config file
```
after install make a /nixless dir and add ```resetpkg();``` to config.c in front of each package for most functionality.

---
to install:
```
cd nixless/nixless-src
make install
```
if you want it in /bin/ 
```
sudo (or doas) make bin
```
---
to rebuild:
go in to the source
```
make install
```
if you put it in /bin do this too:
```
sudo (or doas) make bin
```
then
```
sudo nixless
```

---
to uninstall/update do 
to uninstall a package remove the entry then find the package src in /nixless/ then remove it then rebuild
---
to update do:
```
sudo (or doas) nixless-u
```
