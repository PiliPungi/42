#!/bin/sh
find .  -type f -name "*.sh" -exec sh -c 'echo $(basename ${0%.sh})' {} \;
