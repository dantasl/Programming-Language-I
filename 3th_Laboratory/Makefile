RM = rm -rf

CC=g++

INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc

CFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

.PHONY: all clean distclean doxy

all: store

debug: CFLAGS += -g -O0
debug: store

init:
	@mkdir -p $(BIN_DIR)/
	@mkdir -p $(OBJ_DIR)/
	@mkdir -p $(INC_DIR)/
	@mkdir -p $(SRC_DIR)/
	@mkdir -p $(DOC_DIR)/

store: $(OBJ_DIR)/product.o $(OBJ_DIR)/fruit.o $(OBJ_DIR)/beverage.o $(OBJ_DIR)/main.o
	@echo "============="
	@echo "Connecting the target $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executable store created in $(BIN_DIR)] +++"
	@echo "============="

$(OBJ_DIR)/product.o: $(SRC_DIR)/task_one/product.cpp $(INC_DIR)/task_one/product.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/fruit.o: $(SRC_DIR)/task_one/fruit.cpp $(INC_DIR)/task_one/fruit.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/beverage.o: $(SRC_DIR)/task_one/beverage.cpp $(INC_DIR)/task_one/beverage.h
	$(CC) -c $(CFLAGS) -o $@ $<		

$(OBJ_DIR)/main.o: $(SRC_DIR)/task_one/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
	$(RM) $(DOC_DIR)/*