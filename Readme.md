## adapter_design_pattern

This repository contains the source for My implementaion of adapter design pattern.
The repository structure is the standard project structure: internal sources for library build are in src, public includes are in the include folder and tests can be found in the test folder.
## 1 Development

Simply create a build folder and call the standard conan chain.
For simplicity, the following example assumes that the build folder is created within the repository structure.

```shell
mkdir build
cd build
conan install ..
conan build ..
```

This will create all the necessary project folder needed to develop within a VS2010 solution.