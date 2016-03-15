#Setting up the relevant flags

CC = g++
CFLAGS = -g -Wall -std=c++0x $(shell root-config --cflags)
LIBS = $(shell root-config --libs)
ROOTSYS = /cvmfs/cms.cern.ch/slc6_amd64_gcc481/lcg/root/5.34.18-cms2/

default: tWAnal

tWAnal: skimMain.o tWEvent.o cutClass.o
	$(CC) $(CFLAGS) $(LIBS) -o tWAnal skimMain.o tWEvent.o cutClass.o

skimMain.o: skimMain.cpp
	$(CC) $(CFLAGS) $(LIBS) -c skimMain.cpp

tWEvent.o: tWEvent.C tWEvent.h
	$(CC) $(CFLAGS) $(LIBS) -c tWEvent.C

cutClass.o: cutClass.cpp cutClass.h
	$(CC) $(CFLAGS) $(LIBS) -c cutClass.cpp