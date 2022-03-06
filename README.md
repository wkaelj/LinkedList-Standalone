# LinkedList-Standalone
A simple but nice linkedlist implementation written in c

## Building and using

Copy the liblist folder to wherever you want it.

You need to link the library using the compiler flags
```-L/file/path/liblist``` and ```-llist```.

You also need to tell the program where to load it from, using
```-Wl,-rpath=/file/path/liblist```

## CMake
If you are using cmake for your project, all you need to do it add the
liblist folder, and then link it to your project.
`add_subdirectory(/liblist/path/liblist)` and `target_link_libraries(linkedlist)`
