# Purpose

The goal of this project is to provide dummy examples of qt5 usage.
It should quicken the introduction to qt5 library.

# Notepad project

The directory `notepad` provides fully fonctionnal sources corresponding to 
the official qt5 'getting started qt' tutorial:
https://doc.qt.io/qt-5/gettingstartedqt.html

## Compilation
### With `qmake` + `make`:
```bash
cd notepad
mkdir ../build && cd ../build
qmake ../notepad/notepad.pro
make
```

### With `cmake` + `make`:
```bash
cd notepad
mkdir ../build && cd ../build
cmake ../notepad/
make
```

### Why do I provide two way to compile notepad?

Usually, Qt documentation recommends to compile with `qmake` tool.
In the situation one uses an open project which is compiled thanks 
to `cmake`, to be able to use the Qt graphical interface, it's easier 
to start from a Qt project which is compiled thank to `cmake`.

## Run
```bash
./Notepad
```
