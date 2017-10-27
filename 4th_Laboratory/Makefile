RM = rm -rf

CC=g++

INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc

CFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

.PHONY: all clean distclean doxy

all: check_palindrome evaluate_expression

debug: CFLAGS += -g -O0
debug: check_palindrome evaluate_expression

init:
	@mkdir -p $(BIN_DIR)/
	@mkdir -p $(OBJ_DIR)/
	@mkdir -p $(INC_DIR)/
	@mkdir -p $(SRC_DIR)/
	@mkdir -p $(DOC_DIR)/

check_palindrome: $(OBJ_DIR)/string_manipulation.o $(OBJ_DIR)/check_palindrome.o
	@echo "============="
	@echo "Connecting the target $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executable check_palindrome created in $(BIN_DIR)] +++"
	@echo "============="

$(OBJ_DIR)/string_manipulation.o: $(SRC_DIR)/task_one/string_manipulation.cpp $(INC_DIR)/task_one/string_manipulation.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/check_palindrome.o: $(SRC_DIR)/task_one/check_palindrome.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

evaluate_expression: $(OBJ_DIR)/arithmetic_manipulation.o $(OBJ_DIR)/evaluate_expression.o
	@echo "============="
	@echo "Connecting the target $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executable evaluate_expression created in $(BIN_DIR)] +++"
	@echo "============="

$(OBJ_DIR)/arithmetic_manipulation.o: $(SRC_DIR)/task_two/arithmetic_manipulation.cpp $(INC_DIR)/task_two/arithmetic_manipulation.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/evaluate_expression.o: $(SRC_DIR)/task_two/evaluate_expression.cpp
	$(CC) -c $(CFLAGS) -o $@ $<
	
doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
	$(RM) $(DOC_DIR)/*