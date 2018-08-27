#!/bin/bash

# a common stub for shared environment variables on tux268
#required by make docs!
source /usr/apps/subversion/1.5.5/setup.sh
export XERCESCROOT=/home/liao6/opt/xerces-c-3.0.1
source /usr/apps/graphviz/2.20.3/setup.sh
source /usr/apps/qt/4.5.1/setup.sh

# QT and QROSE
source /usr/apps/qt/4.5.1/setup.sh

export JAVA_HOME=/usr/apps/java/jdk1.6.0_11
export BOOST_ROOT="/home/liao6/opt/boost_1_35_0"
export LD_LIBRARY_PATH="/usr/apps/java/jdk1.6.0_11/lib:${JAVA_HOME}/jre/lib/i386/server:$LD_LIBRARY_PATH"
export LD_LIBRARY_PATH="${BOOST_ROOT}/lib:${LD_LIBRARY_PATH}"

#source /usr/apps/gcc/4.2.2/setup.sh
export PATH="$JAVA_HOME/bin:/usr/apps/automake/1.9.6/bin:/home/liao6/opt/ghc-6.10.4/bin:$PATH"

# the right version of subversion is essential!!
SVN=/nfs/apps/subversion/1.5.5/bin/svn
# installation path of spec cpu and the config file for using rose
SPEC_CPU2006_INS="/home/liao6/opt/spec_cpu2006"
SPEC_CPU2006_CONFIG="tux268-rose-gcc42.cfg"

SVN_READONLY_REPOSITORY_LOCATION=/home/liao6/daily-test-rose/svn-readonly-rose

# Liao, 9/28/2009
# so many script stubs are running
# I want to see which stub is running by putting the stub name into email subjects
SHOW_STUB_ON_EMAIL_SUBJECT=1

#-------------end of environment

