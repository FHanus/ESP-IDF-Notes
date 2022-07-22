# ✨ ESP-IDF Programming Notes
These notes summarize the neccessary information from various online courses and books. The lectures involve low level C programming all the way up to more complex concepts related to the real time operating system.

## The featured notes:
These are the guides described in the following sections.
* Delays
* GPIO
* Logging
* Random Numbers

# ✨ ESP-IDF Project Structure
The following text demostrates recommended project structure for ESP-IDF programming. Refer to the examples for further understanding in context.
### Recommended folder structure
This is the recommended folder structure of a ESP-IDF project. Note that every file/folder has an explanation next to it.

    .
    ├── .devcontainer            # Docker config, ignore - gets created automatically
    ├── .vscode                  # VS Code config files, ignore - gets created automatically
    ├── build                    # Build files, gets deleted every time "idf.py fullclean" gets run
    ├── components               # Folder with components (libraries)      
    │   ├── component_a          # Folder with files for component A
    │       ├── CMakeLists.txt   # CMakeLists, structure of this file will be described below
    │       ├── component_a.h    # Header file of the component A
    │       └── component_a.c    # C file of the component A
    │   └── component_b          # Folder with files for component B
    │       ├── CMakeLists.txt   # CMakeLists, structure of this file will be described below
    │       ├── component_b.h    # Header file of the component B
    │       └── component_a.c    # C file of the component B
    ├── main                     # Folder with the main files  
    │   ├── CMakeLists.txt       # CMakeLists, structure of this file will be described below
    │   └── main.c               # Main C file
    ├── Makefile                 # (optional) Can help with eliminating VSCode bugs caused by adding external component directories
    ├── CMakeLists.txt           # CMakeLists, structure of this file will be described below
    ├── sdkconfig                # sdkconfig, structure of this file will be described below
    └── sdkconfig.defaults       # sdkconfig.defaults, structure of this file will be described below
    
### CMakeLists files
This part of the tutorial describes the structure of the CMakeLists files. They differ based on the location. A CMakeLists.txt needs to be in the folder of the project. This CMake initializes location and version of the esp-idf ".cmake" file, sets the name of the project. A CMakeLists.txt needs to be in the main folder of the project. This CMake initializes the names of the files in this folder, necessary include directories and optionally required additional files.  A CMakeLists.txt needs to be in each of the component folders, its structure is the same as the CMakeLists in the main folder.
#### CMakeLists in the project folder
This CMake initializes location and version of the esp-idf ".cmake" file, sets the name of the project. Most of this is created automatically and only minor edits usually need to be made.
Example structure:
```sh
cmake_minimum_required(VERSION 3.5)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(example)
```

#### CMakeLists in the main folder
This CMake initializes the names of the files in this folder, necessary include directories and optionally required additional files. Most of this is created automatically and only minor edits usually need to be made.
```sh
idf_component_register(SRCS "main.c"
                    INCLUDE_DIRS ".")
```

#### CMakeLists in the component folder
This CMake initializes the names of the files in this folder, necessary include directories and optionally required additional files. Most of this is created automatically and only minor edits usually need to be made.
```sh
idf_component_register(SRCS "example.c"
                    INCLUDE_DIRS .
                    REQUIRES example_file)
```

### sdkconfig files



