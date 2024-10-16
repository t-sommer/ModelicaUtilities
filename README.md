# A Modelica library to demonstrate the use of Modelica Utility Functions in shared libraries

## Build the shared library

In the root of the repository run

```
cmake -S MyExternalLibrary -B MyExternalLibrary/build
cmake --build MyExternalLibrary/build --target install --config release
```
