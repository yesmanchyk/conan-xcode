rm -fr xcode
conan install . --output-folder=xcode --build=missing -s build_type=Debug
pushd xcode/build/Debug/generators/
cmake ../../../.. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Debug -G Xcode
popd
