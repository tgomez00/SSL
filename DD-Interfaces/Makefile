#-----------------------------------------------MAKEFILE---------------------------------------------------
#Alumno: GOMEZ TOMAS LEONEL
#Curso: K2051
#Materia: SySL
#Fecha: 03/05/2021

all: tablasDeConversion conversionTest
#--------------------Creo las constantes, se utiliza dos BIN ya que tenemos dos main---------------------
BIN = tablasDeConversion
BIN2 = conversionTest
OBJ = tablasDeConversion.o conversion.o
OBJ2 = conversionTest.o conversion.o
CC = gcc
CFLAGS = -std=c18
#--------------------------------------Establezco los ejecutables----------------------------------
#tablasDeConversion
$(BIN): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(BIN)

#conversionTest
$(BIN2): $(OBJ2)
	$(CC) $(CFLAGS) $(OBJ2) -o $(BIN2)


#-------------------------------Establezco los codigos objetos y compilo------------------------------

conversionTest.o: conversionTest.c conversion.h
	$(CC) $(CFLAGS) -c conversionTest.c -o conversionTest.o 

tablasDeConversion.o: tablasDeConversion.c conversion.h
	$(CC) $(CFLAGS) -c tablasDeConversion.c -o tablasDeConversion.o 

conversion.o: conversion.c conversion.h
	$(CC) $(CFLAGS) -c conversion.c -o conversion.o 
