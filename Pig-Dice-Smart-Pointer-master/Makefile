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

all: pig_dice

debug: CFLAGS += -g -O0
debug: pig_dice

init:
	@mkdir -p $(BIN_DIR)/
	@mkdir -p $(OBJ_DIR)/
	@mkdir -p $(INC_DIR)/
	@mkdir -p $(SRC_DIR)/
	@mkdir -p $(DOC_DIR)/
	@mkdir -p $(TEST_DIR)/

pig_dice: $(OBJ_DIR)/dice.o $(OBJ_DIR)/player.o $(OBJ_DIR)/game.o $(OBJ_DIR)/main2.o
	@echo "============="
	@echo "Connecting the target $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executable pig_dice created in $(BIN_DIR)] +++"
	@echo "============="

$(OBJ_DIR)/dice.o: $(SRC_DIR)/dice.cpp $(INC_DIR)/dice.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/player.o: $(SRC_DIR)/player.cpp $(INC_DIR)/player.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/game.o: $(SRC_DIR)/game.cpp $(INC_DIR)/game.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/main2.o: $(SRC_DIR)/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
	$(RM) $(DOC_DIR)/*
	$(RM) $(TEST_DIR)/*
