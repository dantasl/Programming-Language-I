RM = rm -rf

CC=g++

INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc

CFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

.PHONY: all clean distclean doxy

all: closest_to_mean print_elements show_primos

debug: CFLAGS += -g -O0
debug: closest_to_mean print_elements show_primos

init:
	@mkdir -p $(BIN_DIR)/
	@mkdir -p $(OBJ_DIR)/
	@mkdir -p $(INC_DIR)/
	@mkdir -p $(SRC_DIR)/
	@mkdir -p $(DOC_DIR)/

closest_to_mean: $(OBJ_DIR)/closest_to_mean.o
	@echo "============="
	@echo "Connecting the target $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executable closest_to_mean created in $(BIN_DIR)] +++"
	@echo "============="

$(OBJ_DIR)/closest_to_mean.o: $(SRC_DIR)/task_one/closest_to_mean.cpp $(INC_DIR)/task_one/closest_to_mean.h
	$(CC) -c $(CFLAGS) -o $@ $<

print_elements: $(OBJ_DIR)/print_elements.o
	@echo "============="
	@echo "Connecting the target $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executable print_elements created in $(BIN_DIR)] +++"
	@echo "============="

$(OBJ_DIR)/print_elements.o: $(SRC_DIR)/task_two/print_elements.cpp $(INC_DIR)/task_two/print_elements.h
	$(CC) -c $(CFLAGS) -o $@ $<

show_primos: $(OBJ_DIR)/show_primes.o
	@echo "============="
	@echo "Connecting the target $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executable show_primos created in $(BIN_DIR)] +++"
	@echo "============="

$(OBJ_DIR)/show_primes.o: $(SRC_DIR)/task_three/show_primes.cpp $(INC_DIR)/task_three/show_primes.h
	$(CC) -c $(CFLAGS) -o $@ $< 

doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
	$(RM) $(DOC_DIR)/*