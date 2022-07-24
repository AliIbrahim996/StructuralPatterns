import conans, os

class Adapter(conans.ConanFile):
    # Package and Src information
    name = "adapter_design_pattern"
    author = "Ali Ibrahim, LIT"
    version = "main"
    url = "https://github.com/AliIbrahim996/AdapterDesignPattern.git"

    license = "(c) 2022 LIT"
    description = "See README.md"

    # Binary relevant attributes
    settings = "os", "compiler", "build_type", "arch"

    generators = "cmake", "visual_studio"

    scm = {
        "type": "git",
        "url": "auto",
        "revision": "auto",
        "subfolder": "."
    }

    #https://docs.conan.io/en/latest/reference/conanfile/methods.html#build-requirements
    def build_requirements(self):
        self.build_requires("cmake_installer/3.22.3@sdfl-3rd/stable")
        self.build_requires("doxygen_installer/1.8.16@bincrafters/stable")
        self.build_requires("gtest/1.11.0-4@sdfl-3rd/stable")


    #http://docs.conan.io/en/latest/reference/conanfile/methods.html#build
    def build(self):
        cmake = conans.CMake(self)
        cmake.configure()
        cmake.build()
        if not conans.tools.cross_building(self.settings):
            cmake.test(output_on_failure=True)

    # http://docs.conan.io/en/latest/reference/conanfile/methods.html#package
    def package(self):
        self.copy("readme.md")
        self.copy("*.h", dst="include", src="include")
        self.copy("*.hpp", dst="include", src="include")
        self.copy("*.lib", dst="lib", src="lib", keep_path=False)
        self.copy("*.a", dst="lib", src="lib", keep_path=False)
        self.copy("*", dst="doc/html", src="html")

    # http://docs.conan.io/en/latest/reference/conanfile/methods.html#package-info
    def package_info(self):
        self.cpp_info.libs = [self.name]

    def package_id(self):
        for k in self.info.requires.pkg_names:
            self.info.requires[k].full_package_mode()