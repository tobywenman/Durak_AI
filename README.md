# Durak Game and Engine
This repo (will hopefully) contain a working implementation of Durak as well as an engine that will allow for NPC players.

The engine code is stored in `src/lib` and the interfaces are in `src/cli_app` and `src/gui_app`

## Prerequesites
The GUI api used is wxWidgets, which is cross platform, however needs to be installed. This can be found [here.](https://www.wxwidgets.org/downloads/)

## Build
CMake is the utilised build system, the two apps can be built on linux as such:

### CLI
```
mkdir src/cli_app/build
cd src/cli_app/build
cmake ..
make
```
### GUI
```
mkdir src/gui_app/build
cd src/gui_app/build
cmake ..
make
```