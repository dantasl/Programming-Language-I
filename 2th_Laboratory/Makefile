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

all: pig_dice company_manager

debug: CFLAGS += -g -O0
debug: pig_dice company_manager

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

$(OBJ_DIR)/dice.o: $(SRC_DIR)/pig_dice/dice.cpp $(INC_DIR)/pig_dice/dice.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/player.o: $(SRC_DIR)/pig_dice/player.cpp $(INC_DIR)/pig_dice/player.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/game.o: $(SRC_DIR)/pig_dice/game.cpp $(INC_DIR)/pig_dice/game.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/main2.o: $(SRC_DIR)/pig_dice/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

company_manager: $(OBJ_DIR)/company.o $(OBJ_DIR)/employee.o $(OBJ_DIR)/manage_company.o $(OBJ_DIR)/main1.o
	@echo "============="
	@echo "Connecting the target $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executable company_manager created in $(BIN_DIR)] +++"
	@echo "============="

$(OBJ_DIR)/employee.o: $(SRC_DIR)/company_manager/employee.cpp $(INC_DIR)/company_manager/employee.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/company.o: $(SRC_DIR)/company_manager/company.cpp $(INC_DIR)/company_manager/company.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/manage_company.o: $(SRC_DIR)/company_manager/manage_company.cpp $(INC_DIR)/company_manager/manage_company.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/main1.o: $(SRC_DIR)/company_manager/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
	$(RM) $(DOC_DIR)/*
	$(RM) $(TEST_DIR)/*
