#!/bin/bash -x

# This shell script logic is isolated into a separate shell script because it is a problem to call it from m4 files in autoconf.

BACKEND_CXX_COMPILER_MAJOR_VERSION_NUMBER=`clang --version | grep -Go 'version[\ ][7-9]\.[0-9]*\.[0-9]*' | grep -Go '[7-9]\.[0-9]*\.[0-9]*' | cut -d\. -f1`

echo "$BACKEND_CXX_COMPILER_MAJOR_VERSION_NUMBER"
