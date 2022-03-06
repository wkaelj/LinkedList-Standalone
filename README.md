# LinkedList-Standalone
A simple but nice linkedlist implementation written in c

##Building and using

Copy the liblist folder to wherever you want it. You can use the Cmake library called `linkedlist`

You need to link the library using the compiler flags
```-L/file/path/liblist``` and ```-llist```.

You also need to tell the program where to load it from, using
```-Wl,-rpath=/file/path/liblist```
