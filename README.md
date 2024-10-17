# A Modelica library to demonstrate the use of Modelica Utility Functions in shared libraries

Works with

- [X] Dymola
- [ ] MapleSim
- [ ] MWorks 
- [X] OpenModelica
- [ ] Simplorer
- [ ] SimulationX
- [ ] System Modeler
- [ ] Twin Activate

## Build the shared library

In the root of the repository run

```
cmake -S MyExternalLibrary -B MyExternalLibrary/build
cmake --build MyExternalLibrary/build --target install --config release
```
