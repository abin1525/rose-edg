#!/bin/bash

# Stub file to include settings for roseFreshTest-common

export OMP_NUM_THREADS=1


source /home/panas2/automake/setup.sh

source /usr/apps/graphviz/2.20.3/setup.sh
source /usr/apps/mpich2/1.1.1p1/setup.sh
source /usr/apps/qt/4.5.1/setup.sh
source /usr/apps/gcc/4.2.4/setup.sh
source /usr/apps/subversion/1.6.3/setup.sh

export CCACHE=/home/panas2/programs/ccache-install

export mpdvar=$(ps ax | grep mpd | wc -l )
#echo $mpdvar
if (($mpdvar >= 2)); then
:
#   echo "MPD RUNNING"
 elif (($mpdvar < 2)); then 
#   echo "Starting MPD"
   mpd &
#   echo "MPD started."
fi


# this is the old version that does not support dynamic libraries
export SWIG="/home/panas2/programs/swig_install/"

export CLASSPATH=/home/panas2/lib/yed.jar:./:/home/panas2/development/jogl/jogl-1.1.1/jogl/build/jogl.jar:/home/panas2/development/jogl/jogl-1.1.1/gluegen/build/gluegen-rt.jar 
export BOOST_ROOT=/home/panas2/development/boost-install-gcc4-64bit/
export BOOST_LD=/home/panas2/development/boost-install-gcc4-64bit/lib/
export PATH=/home/panas2/programs/sqlite/sqlite3/bin:${HOME}/development/babel-64bit/runtime/bin:/home/panas2/development/ROSE-64bit/install-gcc4/bin:/home/panas2/programs/crosstool/gcc-4.1.0-glibc-2.3.2/arm-unknown-linux-gnu/bin:${SWIG}/bin:${CCACHE}/bin/:${PATH}
export LD_LIBRARY_PATH=/home/panas2/programs/sqlite/sqlite3/lib:${HOME}/java/jdk1.6.0-64bit/lib/:${HOME}/java/jdk1.6.0-64bit/jre/lib/amd64/server/:${HOME}/development/babel-64bit/runtime/lib:${LD_LIBRARY_PATH}

export ANT_HOME=/home/panas2/programs/ant/ant-install
export JAVA_HOME=/home/panas2/java/jdk1.6.0-64bit
export PATH=/home/panas2/development/subversion/1.4.3/bin:/home/panas2/java/jdk1.6.0-64bit/bin:/usr/apps/bin:${ANT_HOME}/bin:${PATH}
export LD_LIBRARY_PATH=/home/panas2/development/jogl/jogl-1.1.1/gluegen/build/obj/:/home/panas2/development/jogl/jogl-1.1.1/jogl/build/obj/:/usr/lib/:${BOOST_LD}:/home/panas2/programs/dwarf/dwarf-20081013/libdwarf/:${LD_LIBRARY_PATH}






export PATH=${HOME}/bin:${PATH}
export LD_LIBRARY_PATH=/home/panas2/development/surface-gl/glut-3.6/lib/glut/:${LD_LIBRARY_PATH}




# using a time stamp to avoid overwriting previous tests
TIMESTAMP=$(date +%Y%m%d_%H%M%S) 
ROSE_TOP=/home/panas2/ROSE/svn-test-rose/${TIMESTAMP}



#mpi
CONFIGURE_FLAGS=(--with-boost=${BOOST_ROOT}  --enable-dq-developer-tests --with-ROSE_LONG_MAKE_CHECK_RULE=yes --with-C_DEBUG=-g --with-CXX_WARNINGS=-Wall --with-CXX_DEBUG=-g --with-boost=/home/panas2/development/boost-install-gcc4-64bit/ --with-mpi --with-gcc-omp --without-Mesa CC=mpicc CXX=mpicxx --with-qt=/usr/apps/qt/4.4.2/ --with-sqlite3=/home/panas2/programs/sqlite/sqlite3 --with-java LDFLAGS=-L/home/panas2/programs/freeglut/lib CPPFLAGS=-I/home/panas2/programs/freeglut/freeglut-2.4.0/include --prefix=${ROSE_TOP}/install "$@")





ROSE_SVNROOT=file:///usr/casc/overture/ROSE/svn/ROSE/trunk/ROSE
MAILADDRS="panas2@llnl.gov liaoch@llnl.gov quinlan1@llnl.gov saebjornsen1@llnl.gov collingbourne2@llnl.gov matzke1@llnl.gov"

# the right version of subversion is essential!!
SVN=/nfs/apps/subversion/1.6.3/bin/svn
SVNOP=checkout

MAKEFLAGS="-j24"


set -e
set -o pipefail
