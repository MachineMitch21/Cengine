
cd "./build"

cmake -G "MinGW Makefiles" ..
make
@echo off

copy /y "libcengine.dll"   "../samples/test/build/"
copy /y "libcengine.dll.a" "C:/MinGW/lib/"

cd "../include/cengine/"

@echo "Copying header files to test project location"

copy /y "*.h" "../../samples/test/cengine/"

cd "math/"
copy /y "*.h" "../../../samples/test/cengine/"

cd "../../../"

pause
