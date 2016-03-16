#Setting up the relevant flags

CC = g++
CFLAGS = -g -Wall -std=c++0x $(shell root-config --cflags) -I/afs/ihep.ac.cn/users/d/duncanleg/bin/include
LIBS = $(shell root-config --libs) -L/afs/ihep.ac.cn/users/d/duncanleg/bin/lib -lconfig++
ROOTSYS = /cvmfs/cms.cern.ch/slc6_amd64_gcc481/lcg/root/5.34.18-cms2/

default: tWAnal

tWAnal: skimMain.o tWEvent.o cutClass.o dataset.o config_parser.o
	$(CC) $(CFLAGS) $(LIBS) -o tWAnal skimMain.o tWEvent.o cutClass.o dataset.o config_parser.o

skimMain.o: skimMain.cpp
	$(CC) $(CFLAGS) $(LIBS) -c skimMain.cpp

tWEvent.o: tWEvent.C tWEvent.h
	$(CC) $(CFLAGS) $(LIBS) -c tWEvent.C

cutClass.o: cutClass.cpp cutClass.h
	$(CC) $(CFLAGS) $(LIBS) -c cutClass.cpp

dataset.o: dataset.cpp dataset.h
	$(CC) $(CFLAGS) $(LIBS) -c dataset.cpp

config_parser.o: config_parser.cpp config_parser.h
	$(CC) $(CFLAGS) $(LIBS) -c config_parser.cpp