#!/bin/bash -x

# This shell script logic is isolated into a separate shell script because it is a problem to call it from m4 files in autoconf.

APPLE_CXX_COMPILER_MAJOR_VERSION_NUMBER=`c++ --version | grep -Go 'version[\ ][7-9]\.[0-9]*\.[0-9]*' | grep -Go '[7-9]\.[0-9]*\.[0-9]*' | cut -d\. -f1`

echo "$APPLE_CXX_COMPILER_MAJOR_VERSION_NUMBER"
