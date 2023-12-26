# SDL2 Game in C
Starting from episode 6: [C Game Development](https://www.youtube.com/playlist?list=PLT6WFYYZE6uLMcPGS3qfpYm7T_gViYMMt)

## Building 

### Dependencies
- [cmake](https://cmake.org/)
- [SDL](https://www.libsdl.org/download-2.0.php)
- [SDL Image](https://github.com/libsdl-org/SDL_image)
- [SDL Mixer](https://github.com/libsdl-org/SDL_image)
- [SDL TTF](https://github.com/libsdl-org/SDL_ttf)
- [SDL Net](https://github.com/libsdl-org/SDL_net)

**Linux**:
```
sudo apt-get install libsdl2-dev libsdl2-gfx-dev libsdl2-image-dev libsdl2-ttf-dev libsdl2-net-dev libsdl2-mixer-dev
```

**WSL**:
Follow this [tutorial](https://www.youtube.com/watch?v=sC3M6C8IpoE&ab_channel=CaptainFisch)

---
### Compiling 
These tutorials use cmake to build. You may build them in one of several ways:
```
cmake CMakeLists.txt
make
```
This will generate the make file and all build-related data in the same directory as the CMakeLists.txt file. While this is the simplest approach, it does result in all the cmake files being created alongside the other assets. It is the fastest way to get going, however, and the approach taken in the tutorial listings.
```
mkdir build
cd build
cmake ..
cd ..
make -C build
```
This is a much neater approach, as all the cmake related build data is stored in a directory called "build". The downside is that it requires some extra steps on behalf of the user. Actual compiling also needs to be performed by either changing into the build directory before running `make`, or by using `make -C build` to tell make to work with the build directory.

In all cases, the resulting binary will be produced alongside the CMakeLists.txt file, and relative to the required assets (data, gfx, sound, music). If you are using an IDE, ensure the binary is produced this way, as it will expect to load data relative to its location. If not, you will likely find the binary won't run, as it will fail to load any assets.
