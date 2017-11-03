# Purpose

The goal of this project is to provide dummy examples of qt5 usage.
It should quicken the introduction to qt5 library.

# Notepad project

The directory `notepad` provides fully fonctionnal sources corresponding to 
the official qt5 'getting started qt' tutorial:
https://doc.qt.io/qt-5/gettingstartedqt.html

## Environment
### Dependencies

Under ubuntu 16.04, the packages `qtcreator` and `qtchooser` have Qt5 as
dependency and so install it in the process:
```bash
sudo apt-get install qtcreator qtchooser
```

Recommanded packages:
```bash
sudo apt-get install g++ gdb make qmlscene qt5-qmake qtbase5-dev-tools
```

If one has both Qt4 and Qt5 installed, to know which one is used by default,
checkout the output of:
```bash
qtchooser -print-env
```

To choose Qt5 as default, update the `QT_SELECT` environment variable:
```bash
export QT_SELECT="qt5"
```

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
