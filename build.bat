
cd "./build"

cmake -G "MinGW Makefiles" ..
make
@echo off

copy /y "libcengine.dll"   "../samples/test/build/"
copy /y "libcengine.dll.a" "C:/MinGW/lib/"


@echo "Copying header files to test project location"

cd "../include/cengine/"
copy /y "*.h" "../../samples/test/cengine/"

cd "math/"
copy /y "*.h" "../../../samples/test/cengine/math/"
cd "../"

cd "utils/"
copy /y "*.h" "../../../samples/test/cengine/utils/"
cd "../"

cd "core/"
copy /y "*.h" "../../../samples/test/cengine/core/"
cd "../"

cd "../../"

pause
