# trivial makefile for OpenSG tutorials

SYSTEM := $(shell uname)

# set the path to the installed OpenSG root directory here
# if you installed in /usr/local:
# OSGROOT := /usr/local
# use this if you installed in Builds/*/
OSGROOT := $(wildcard ../../Builds/$(shell ../../CommonConf/config.guess)-*)

# the path where GLUT is found
# you can ignore this on Linux, it's in the system libs
GLUTPATH := /igd/a4/software/$(SYSTEM)

# use debug or opt libs?
LIBTYPE := dbg

# Var settings

CC = $(shell $(OSGROOT)/bin/osg-config --compiler)

CCFLAGS = \
  $(shell $(OSGROOT)/bin/osg-config --$(LIBTYPE) --cflags Base System GLUT)

LDFLAGS = \
  $(shell $(OSGROOT)/bin/osg-config --$(LIBTYPE) --libs Base System GLUT)


# all tutorials in this directory

TUTS :=  $(wildcard [0-9][0-9]*.cpp) 
PROGS := $(TUTS:.cpp=) 

# program dependencies

default:	$(PROGS)

# make rules

.PHONY: clean Clean

clean:
	rm -fr *.o ii_files

Clean: clean
	rm -fr $(PROGS) 

%.o: %.cpp
	$(CC) -c $(CCFLAGS) $<

%: %.o
	$(CC) -o $@ $< $(LDFLAGS)

%: %.cpp
	$(CC) $(CCFLAGS) $< $(LDFLAGS) -o $@ 
