# nixless
a writen suckless styled nix-like configed package controler-ish thing (kinda a joke obv). also it doesnt manage dependancys. (ewheeler helped alot) how to use it:
```
1. config the config.h file
2. rebuild it
2. run sudo (or doas) nixless
3. if you did it right then it should install stuff from the config file
```
---
to install:
```
cd nixless/nixless-src
make
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
sudo (or doas) make install
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
sudo (or doas) nixless -u
```
or
```
sudo (or doas) nixless --update
```
