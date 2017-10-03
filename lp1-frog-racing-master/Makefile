RM = rm -rf

CC=g++

INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc
TEST_DIR=./test

CFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

.PHONY: all clean distclean doxy

all: frog_racing

debug: CFLAGS += -g -O0
debug: frog_racing

init:
	@mkdir -p $(BIN_DIR)/
	@mkdir -p $(OBJ_DIR)/
	@mkdir -p $(DOC_DIR)/
	@mkdir -p $(TEST_DIR)/

frog_racing: $(OBJ_DIR)/frog.o $(OBJ_DIR)/race.o $(OBJ_DIR)/main.o
	@echo "============="
	@echo "Connecting the target $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executable frog_racing created in $(BIN_DIR)] +++"
	@echo "============="

$(OBJ_DIR)/frog.o: $(SRC_DIR)/frog.cpp $(INC_DIR)/frog.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/race.o: $(SRC_DIR)/race.cpp $(INC_DIR)/race.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
	$(RM) $(DOC_DIR)/*
	$(RM) $(TEST_DIR)/*
# FIM do Makefile
