# nixless
a horribly writen suckless styled nix package manager thing (kinda a joke obv). this is very exsperimental btw and works on my pc. also it doesnt manage dependancys. how to use it:
```
1. config the config.c file
2. rebuild it
2. run sudo (or doas) nixless
3. if you did it right then it should install stuff from the config file
```
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
```
make install
```
if you put it in /bin do this too:
```
sudo (or doas) make bin
```
---
after install make a /nixless dir and add ```resetpkg();``` to config.c in front of each package for most functionality.
---
to uninstall/update something do 
```
sudo rm -rf /nixless/(packagename)
```
if ur uninstalling then remove the entry and rebuild
if ur updateing dont remove the entery and rebuild
