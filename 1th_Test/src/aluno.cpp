#include "aluno.h"

double AlunoTurma::soma_notas_alunos = 0.0;
int AlunoTurma::quantidade_alunos = 0;

Aluno::Aluno(){}

Aluno::Aluno(std::string _matricula, std::string _nome)
{
	matricula = _matricula;
	nome = _nome;
}

std::string Aluno::getMatricula()
{
	return matricula;
}

std::string Aluno::getNome()
{
	return nome;
}

int Aluno::getFaltas()
{
	return faltas;
}

double Aluno::getNota()
{
	return nota;
}

int AlunoTurma::getFaltas()
{
	return faltas;
}

double AlunoTurma::getNota()
{
	return nota;
}

AlunoTurma::AlunoTurma(){}

AlunoTurma::AlunoTurma(Aluno* _discente, int _faltas, double _nota)
{
	discente = _discente;
	faltas = _faltas;
	nota = _nota;
	quantidade_alunos+=1;
	soma_notas_alunos+=_nota;
}

Aluno* AlunoTurma::getDiscente()
{
	return discente;
}