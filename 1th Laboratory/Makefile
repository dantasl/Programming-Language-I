RM = rm -rf

CC=g++

# Subdirect
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc
TEST_DIR=./test

# Outras variaveis

# Opcoes de compilacao
CFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

# Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome
.PHONY: all clean distclean doxy

# Define o alvo (target) para a compilacao completa.
# Define os alvos questao01, questao02 e questao03 como dependencias.

# Ao final da compilacao, remove os arquivos objeto.
all: geometrica anterior

debug: CFLAGS += -g -pg -O0
debug: geometrica anterior

# Cria o diretório bin/build/doc
init:
	@mkdir -p $(BIN_DIR)/
	@mkdir -p $(OBJ_DIR)/
	@mkdir -p $(DOC_DIR)/
	@mkdir -p $(TEST_DIR)/	

# Alvo (target) para a construcao do executavel geometrica
# Define os arquivos area.o, volume.o, perimetro.o, calcula.o e main.o como dependencias
geometrica: $(OBJ_DIR)/area.o $(OBJ_DIR)/perimetro.o $(OBJ_DIR)/volume.o $(OBJ_DIR)/calcula.o $(OBJ_DIR)/main.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel geometrica criado em $(BIN_DIR)] +++"
	@echo "============="

# Alvo (target) para a construcao do objeto area.o
# Define os arquivos area.cpp e area.h como dependencias.
$(OBJ_DIR)/area.o: $(SRC_DIR)/questao1/area.cpp $(INC_DIR)/questao1/area.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto perimetro.o
# Define os arquivos perimetro.cpp e perimetro.h como dependencias.
$(OBJ_DIR)/perimetro.o: $(SRC_DIR)/questao1/perimetro.cpp $(INC_DIR)/questao1/perimetro.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto volume.o
# Define o arquivo volume.cpp e volume.h como dependencias.
$(OBJ_DIR)/volume.o: $(SRC_DIR)/questao1/volume.cpp $(INC_DIR)/questao1/volume.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto calcula.o
# Define o arquivo calcula.cpp e calcula.h como dependencias.
$(OBJ_DIR)/calcula.o: $(SRC_DIR)/questao1/calcula.cpp $(INC_DIR)/questao1/calcula.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto main.o
# Define o arquivo main.cpp como dependencia.
$(OBJ_DIR)/main.o: $(SRC_DIR)/questao1/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

anterior: $(OBJ_DIR)/fatorial.o $(OBJ_DIR)/primalidade.o $(OBJ_DIR)/main1.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel anterior criado em $(BIN_DIR)] +++"
	@echo "=============" 	

# Alvo (target) para a construcao do objeto fatorial.o
# Define os arquivos fatorial.cpp e fatorial.o como dependencias.
$(OBJ_DIR)/fatorial.o: $(SRC_DIR)/questao2/fatorial.cpp $(INC_DIR)/questao2/fatorial.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto primalidade.o
# Define os arquivos primalidade.cpp e primalidade.o como dependencias.
$(OBJ_DIR)/primalidade.o: $(SRC_DIR)/questao2/primalidade.cpp $(INC_DIR)/questao2/primalidade.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto main1.o
$(OBJ_DIR)/main1.o: $(SRC_DIR)/questao2/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a geração automatica de documentacao usando o Doxygen.
# Sempre remove a documentacao anterior (caso exista) e gera uma nova.
doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

# Alvo (target) usado para limpar os arquivos temporarios (objeto)
# gerados durante a compilacao, assim como os arquivos binarios/executaveis.
clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
	$(RM) $(DOC_DIR)/*
	$(RM) $(TEST_DIR)/*
# FIM do Makefile