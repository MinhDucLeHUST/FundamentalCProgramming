rm build
mkdir build
cd build
cmake .. -G "MinGW Makefiles"
make
./cmakebuild.exe
cd ..