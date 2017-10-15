#ifndef _TURMA_H_
#define _TURMA_H_

#include "aluno.h"
#include <vector>
#include <iterator>

class Turma
{
private:
	std::vector<AlunoTurma> alunos;
public:
	Turma();
	~Turma();
	friend std::ostream& operator<< (std::ostream &o, std::vector<AlunoTurma>::iterator &i);
	friend bool operator==(std::string &_nome, std::vector<AlunoTurma>::iterator &aluno);
	friend bool operator==(AlunoTurma &_aluno, std::vector<AlunoTurma> &alunos);
	int addAluno(AlunoTurma _aluno);
	Aluno* buscaAlunoPorNome (std::string _nome);
	Aluno* buscaAlunoPorMatricula (std::string _matricula);
	int removeAlunoPorNome (std::string _nome);
	int removeAlunoPorMatricula (std::string _matricula);
	void listaAlunos();
};

#endif