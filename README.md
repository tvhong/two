two
===

====================================================
= Build and Install our program
====================================================
First, you will need SFML 2.1 and cmake 2.8

Create a build folder lets call it `build_two`

Move into that folder:
    cd build_two

Call cmake to generate the build files for us:
    cmake -DCMAKE_PREFIX_PATH=/path/to/install /path/to/two/src/

Then,
    make
    make install

The program should now be installed into `/path/to/install` above

Have fun.
