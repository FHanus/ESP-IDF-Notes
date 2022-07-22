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
    ├── CMakeLists.txt           # CMakeLists, structure of this file will be described below
    ├── sdkconfig                # sdkconfig, structure of this file will be described below
    └── sdkconfig.defaults       # sdkconfig.defaults, structure of this file will be described below
    
### CMakeLists files

### sdkconfig files



