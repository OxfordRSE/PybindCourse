# Python bindings for C++ course

This course is a short introduction on how to write Python bindings for C++
methods. Using C++ gives us efficiency, while Python allows easy use for
downstream projects or end users.

## Setup

Clone the repository

    git clone --recurse-submodules https://github.com/OxfordRSE/PybindCourse

The `--recurse-submodules` option to git fetches the pybind11 submodule. If you missed passing this option, the submodule can always be fetched later:

    git submodule update --init

You'll also need [cmake](https://cmake.org) and a C++11 compiler (GCC
4.8.1 and above, clang 3.3 and above).

- **macOS**. Ensure the XCode command line tools are installed: `xcode-select
  --install`. Install [homebrew](https://brew.sh/) which is a package manager
  for macOS. Then run `brew install cmake`.

- **Linux**. You can use the package manager to install:
  - **Debian/Ubuntu**: `sudo apt install cmake build-essential`
  - **Fedora/Red Hat/CentOS**: `sudo dnf install gcc-c++ cmake`

- **Windows**. Install [Windows Subsystem for
  Linux](https://docs.microsoft.com/en-us/windows/wsl/install-win10) and follow
  Linux instructions.
