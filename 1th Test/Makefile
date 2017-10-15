RM = rm -rf

CC=g++

INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin


CFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

.PHONY: all clean distclean

all: code

debug: CFLAGS += -g -O0
debug: code

init:
	@mkdir -p $(BIN_DIR)/
	@mkdir -p $(OBJ_DIR)/
	@mkdir -p $(INC_DIR)/
	@mkdir -p $(SRC_DIR)/
	@mkdir -p $(DOC_DIR)/
	@mkdir -p $(TEST_DIR)/

code: $(OBJ_DIR)/aluno.o  $(OBJ_DIR)/turma.o $(OBJ_DIR)/main.o
	@echo "============="
	@echo "Connecting the target $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executable code created in $(BIN_DIR)] +++"
	@echo "============="

$(OBJ_DIR)/aluno.o: $(SRC_DIR)/aluno.cpp $(INC_DIR)/aluno.h	
	$(CC) -c $(CFLAGS) -o $@ $<	

$(OBJ_DIR)/turma.o: $(SRC_DIR)/turma.cpp $(INC_DIR)/turma.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp 
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
	$(RM) $(DOC_DIR)/*
	$(RM) $(TEST_DIR)/*