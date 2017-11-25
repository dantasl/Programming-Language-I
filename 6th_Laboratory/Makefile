RM = rm -rf

CC=g++

INC_DIR=./include
SRC_DIR=./src
LIB_DIR=./lib
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc

ARCHIVE = ar

CFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

.PHONY: all clean distclean doxy

all: linux windows

debug: CFLAGS += -g -O0
debug: linux windows

#LINUX

linux: lucas.a lucas.so

lucas.a: $(INC_DIR)/questao01/corpo_geometrico.hpp $(INC_DIR)/questao01/circulo.hpp \
	$(INC_DIR)/questao01/cubo.hpp $(INC_DIR)/questao01/esfera.hpp $(INC_DIR)/questao01/paralelepipedo.hpp \
	$(INC_DIR)/questao01/piramide.hpp $(INC_DIR)/questao01/quadrado.hpp $(INC_DIR)/questao01/retangulo.hpp \
	$(INC_DIR)/questao01/triangulo.hpp
	$(CC) $(CFLAGS) -c $(INC_DIR)/questao01/corpo_geometrico.hpp -o $(OBJ_DIR)/corpo_geometrico.o
	$(CC) $(CFLAGS) -c $(INC_DIR)/questao01/circulo.hpp -o $(OBJ_DIR)/circulo.o
	$(CC) $(CFLAGS) -c $(INC_DIR)/questao01/cubo.hpp -o $(OBJ_DIR)/cubo.o
	$(CC) $(CFLAGS) -c $(INC_DIR)/questao01/esfera.hpp -o $(OBJ_DIR)/esfera.o
	$(CC) $(CFLAGS) -c $(INC_DIR)/questao01/paralelepipedo.hpp -o $(OBJ_DIR)/paralelepipedo.o
	$(CC) $(CFLAGS) -c $(INC_DIR)/questao01/piramide.hpp -o $(OBJ_DIR)/piramide.o
	$(CC) $(CFLAGS) -c $(INC_DIR)/questao01/quadrado.hpp -o $(OBJ_DIR)/quadrado.o
	$(CC) $(CFLAGS) -c $(INC_DIR)/questao01/retangulo.hpp -o $(OBJ_DIR)/retangulo.o
	$(CC) $(CFLAGS) -c $(INC_DIR)/questao01/triangulo.hpp -o $(OBJ_DIR)/triangulo.o
	$(ARCHIVE) rcs $(LIB_DIR)/$@ $(OBJ_DIR)/circulo.o $(OBJ_DIR)/corpo_geometrico.o $(OBJ_DIR)/cubo.o \
	$(OBJ_DIR)/esfera.o $(OBJ_DIR)/paralelepipedo.o $(OBJ_DIR)/piramide.o $(OBJ_DIR)/quadrado.o \
	$(OBJ_DIR)/retangulo.o $(OBJ_DIR)/triangulo.o
	@echo "+++ [Static library created at $(LIB_DIR)/$@] +++"

lucas.so: $(INC_DIR)/questao01/corpo_geometrico.hpp $(INC_DIR)/questao01/circulo.hpp \
	$(INC_DIR)/questao01/cubo.hpp $(INC_DIR)/questao01/esfera.hpp $(INC_DIR)/questao01/paralelepipedo.hpp \
	$(INC_DIR)/questao01/piramide.hpp $(INC_DIR)/questao01/quadrado.hpp $(INC_DIR)/questao01/retangulo.hpp \
	$(INC_DIR)/questao01/triangulo.hpp
	$(CC) $(CFLAGS) -fPIC -x c++ -c $(INC_DIR)/questao01/corpo_geometrico.hpp -o $(OBJ_DIR)/corpo_geometrico.o
	$(CC) $(CFLAGS) -fPIC -x c++ -c $(INC_DIR)/questao01/circulo.hpp -o $(OBJ_DIR)/circulo.o
	$(CC) $(CFLAGS) -fPIC -x c++ -c $(INC_DIR)/questao01/cubo.hpp -o $(OBJ_DIR)/cubo.o
	$(CC) $(CFLAGS) -fPIC -x c++ -c $(INC_DIR)/questao01/esfera.hpp -o $(OBJ_DIR)/esfera.o
	$(CC) $(CFLAGS) -fPIC -x c++ -c $(INC_DIR)/questao01/paralelepipedo.hpp -o $(OBJ_DIR)/paralelepipedo.o
	$(CC) $(CFLAGS) -fPIC -x c++ -c $(INC_DIR)/questao01/piramide.hpp -o $(OBJ_DIR)/piramide.o
	$(CC) $(CFLAGS) -fPIC -x c++ -c $(INC_DIR)/questao01/quadrado.hpp -o $(OBJ_DIR)/quadrado.o
	$(CC) $(CFLAGS) -fPIC -x c++ -c $(INC_DIR)/questao01/retangulo.hpp -o $(OBJ_DIR)/retangulo.o
	$(CC) $(CFLAGS) -fPIC -x c++ -c $(INC_DIR)/questao01/triangulo.hpp -o $(OBJ_DIR)/triangulo.o
	$(CC) -shared -fPIC -o $(LIB_DIR)/$@ $(OBJ_DIR)/circulo.o $(OBJ_DIR)/corpo_geometrico.o $(OBJ_DIR)/cubo.o \
	$(OBJ_DIR)/esfera.o $(OBJ_DIR)/paralelepipedo.o $(OBJ_DIR)/piramide.o $(OBJ_DIR)/quadrado.o \
	$(OBJ_DIR)/retangulo.o $(OBJ_DIR)/triangulo.o
	@echo "+++ [Dinamic library created at $(LIB_DIR)/$@] +++"

#WINDOWS

windows: lucas.lib lucas.dll

lucas.lib: $(INC_DIR)/questao01/corpo_geometrico.hpp $(INC_DIR)/questao01/circulo.hpp \
	$(INC_DIR)/questao01/cubo.hpp $(INC_DIR)/questao01/esfera.hpp $(INC_DIR)/questao01/paralelepipedo.hpp \
	$(INC_DIR)/questao01/piramide.hpp $(INC_DIR)/questao01/quadrado.hpp $(INC_DIR)/questao01/retangulo.hpp \
	$(INC_DIR)/questao01/triangulo.hpp
	$(CC) $(CFLAGS) -c $(INC_DIR)/questao01/corpo_geometrico.hpp -o $(OBJ_DIR)/corpo_geometrico.o
	$(CC) $(CFLAGS) -c $(INC_DIR)/questao01/circulo.hpp -o $(OBJ_DIR)/circulo.o
	$(CC) $(CFLAGS) -c $(INC_DIR)/questao01/cubo.hpp -o $(OBJ_DIR)/cubo.o
	$(CC) $(CFLAGS) -c $(INC_DIR)/questao01/esfera.hpp -o $(OBJ_DIR)/esfera.o
	$(CC) $(CFLAGS) -c $(INC_DIR)/questao01/paralelepipedo.hpp -o $(OBJ_DIR)/paralelepipedo.o
	$(CC) $(CFLAGS) -c $(INC_DIR)/questao01/piramide.hpp -o $(OBJ_DIR)/piramide.o
	$(CC) $(CFLAGS) -c $(INC_DIR)/questao01/quadrado.hpp -o $(OBJ_DIR)/quadrado.o
	$(CC) $(CFLAGS) -c $(INC_DIR)/questao01/retangulo.hpp -o $(OBJ_DIR)/retangulo.o
	$(CC) $(CFLAGS) -c $(INC_DIR)/questao01/triangulo.hpp -o $(OBJ_DIR)/triangulo.o
	$(ARCHIVE) rcs $(LIB_DIR)/$@ $(OBJ_DIR)/circulo.o $(OBJ_DIR)/corpo_geometrico.o $(OBJ_DIR)/cubo.o \
	$(OBJ_DIR)/esfera.o $(OBJ_DIR)/paralelepipedo.o $(OBJ_DIR)/piramide.o $(OBJ_DIR)/quadrado.o \
	$(OBJ_DIR)/retangulo.o $(OBJ_DIR)/triangulo.o
	@echo "+++ [Static library created at $(LIB_DIR)/$@] +++"

lucas.dll: $(INC_DIR)/questao01/corpo_geometrico.hpp $(INC_DIR)/questao01/circulo.hpp \
	$(INC_DIR)/questao01/cubo.hpp $(INC_DIR)/questao01/esfera.hpp $(INC_DIR)/questao01/paralelepipedo.hpp \
	$(INC_DIR)/questao01/piramide.hpp $(INC_DIR)/questao01/quadrado.hpp $(INC_DIR)/questao01/retangulo.hpp \
	$(INC_DIR)/questao01/triangulo.hpp
	$(CC) $(CFLAGS) -x c++ -c $(INC_DIR)/questao01/corpo_geometrico.hpp -o $(OBJ_DIR)/corpo_geometrico.o
	$(CC) $(CFLAGS) -x c++ -c $(INC_DIR)/questao01/circulo.hpp -o $(OBJ_DIR)/circulo.o
	$(CC) $(CFLAGS) -x c++ -c $(INC_DIR)/questao01/cubo.hpp -o $(OBJ_DIR)/cubo.o
	$(CC) $(CFLAGS) -x c++ -c $(INC_DIR)/questao01/esfera.hpp -o $(OBJ_DIR)/esfera.o
	$(CC) $(CFLAGS) -x c++ -c $(INC_DIR)/questao01/paralelepipedo.hpp -o $(OBJ_DIR)/paralelepipedo.o
	$(CC) $(CFLAGS) -x c++ -c $(INC_DIR)/questao01/piramide.hpp -o $(OBJ_DIR)/piramide.o
	$(CC) $(CFLAGS) -x c++ -c $(INC_DIR)/questao01/quadrado.hpp -o $(OBJ_DIR)/quadrado.o
	$(CC) $(CFLAGS) -x c++ -c $(INC_DIR)/questao01/retangulo.hpp -o $(OBJ_DIR)/retangulo.o
	$(CC) $(CFLAGS) -x c++ -c $(INC_DIR)/questao01/triangulo.hpp -o $(OBJ_DIR)/triangulo.o
	$(CC) -shared -o $(LIB_DIR)/$@ $(OBJ_DIR)/circulo.o $(OBJ_DIR)/corpo_geometrico.o $(OBJ_DIR)/cubo.o \
	$(OBJ_DIR)/esfera.o $(OBJ_DIR)/paralelepipedo.o $(OBJ_DIR)/piramide.o $(OBJ_DIR)/quadrado.o \
	$(OBJ_DIR)/retangulo.o $(OBJ_DIR)/triangulo.o
	@echo "+++ [Dinamic library created at $(LIB_DIR)/$@] +++"

init:
	@mkdir -p $(BIN_DIR)/
	@mkdir -p $(OBJ_DIR)/
	@mkdir -p $(INC_DIR)/
	@mkdir -p $(SRC_DIR)/
	@mkdir -p $(DOC_DIR)/
	@mkdir -p $(LIB_DIR)/

doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
	$(RM) $(LIB_DIR)/*
	$(RM) $(DOC_DIR)/*