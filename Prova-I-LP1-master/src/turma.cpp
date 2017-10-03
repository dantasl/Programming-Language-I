#include <iostream>
#include "turma.h"

Turma::Turma() {}

Turma::~Turma() {}

std::ostream& operator<< (std::ostream &o, std::vector<AlunoTurma>::iterator &i)
{
	auto temp = i->getDiscente();
	o << temp->getMatricula() << std::endl;
	o << temp->getNome() << std::endl;
	o << "Nota: " << i->getNota() << std::endl;
	o << "Faltas: " << i->getFaltas() << std::endl << std::endl;
    return o;
}

bool operator==(std::string &_nome, std::vector<AlunoTurma>::iterator &aluno)
{
	/* Comentário adicionado por Lucas Dantas:
	   Para aproveitar o código, assumo que uma matrícula não terá o formato do nome de algum aluno.
	   A situação chega a ser falha por não haver nada que valide a string da matrícula, mas para 
	   o escopo dessa questão, creio ser suficiente. */	
	auto temp = aluno->getDiscente();
    if( _nome.compare( temp->getNome() ) == 0 )
    {
    	return true;
    }
    else if( _nome.compare( temp->getMatricula() ) == 0)
    {
    	return true;
    } 
    return false;
}

bool operator==(AlunoTurma &_aluno, std::vector<AlunoTurma> &al)
{
	std::vector<AlunoTurma>::iterator j = al.begin();
	Aluno* temp = _aluno.getDiscente();
	for(; j != al.end(); ++j)
	{
		Aluno* temp_iterator = j->getDiscente();
		if( temp->getNome().compare( temp_iterator->getNome() ) == 0 or
			temp->getMatricula().compare( temp_iterator->getMatricula() ) == 0 )
			return true;
	}
	return false;	
}

int 
Turma::addAluno(AlunoTurma _aluno) {
	/* Adiciona um aluno na lista de alunos */
	if(_aluno == alunos)
	{
		/* Aluno não entra para o vector, mas mesmo assim ele foi criado e os atributos estáticos
		   foram incrementados. Sendo assim, é necessário retirar a diferença. */  
		AlunoTurma::quantidade_alunos-=1;
		AlunoTurma::soma_notas_alunos-=_aluno.getNota();
	}
	else
	{
		alunos.push_back(_aluno);
	}	
	
	return -1;
}

Aluno* 
Turma::buscaAlunoPorNome (std::string _nome) {
	/* Busca por um aluno na lista de alunos com o nome indicado. 
	   Retorna um apontador para o objeto aluno se encontrado. 
	   Retorna nulo, caso não encontre um aluno com o nome indicado. */
	std::vector<AlunoTurma>::iterator a = alunos.begin();
	for(; a != alunos.end(); ++a)
	{
		if(_nome == a)
			return a->getDiscente();
	}
	return NULL;
}

Aluno* 
Turma::buscaAlunoPorMatricula (std::string _matricula) {
	/* Busca por um aluno na lista de alunos com a matricula indicada. 
       Retorna um apontador para o objeto aluno se encontrado. 
       Retorna nulo, caso não encontre um aluno com a matricula indicada. */
    std::vector<AlunoTurma>::iterator c = alunos.begin();
	for(; c != alunos.end(); ++c)
	{
		if(_matricula == c)
			return c->getDiscente();
	}   
	return NULL;
}

int 
Turma::removeAlunoPorNome (std::string _nome) {
	/* Remove o aluno com o nome indicado.
	   Retorna 0 caso o aluno seja encontrado e removido com sucesso.
	   Retorna -1 em caso contrário.
	   Dica: Para remover um elemento do vetor, utilize o metodo erase().
	*/
	std::vector<AlunoTurma>::iterator b = alunos.begin();
	for(; b != alunos.end(); ++b)
	{
		if(_nome == b)
		{
			AlunoTurma::quantidade_alunos-=1;
			AlunoTurma::soma_notas_alunos-=b->getNota();
			alunos.erase(b);
			return 0;
		}	
	}   
	return -1;
}

int 
Turma::removeAlunoPorMatricula (std::string _matricula) {
    /* Remove o aluno com a matricula indicada.
	   Retorna 0 caso o aluno seja encontrado e removido com sucesso.
	   Retorna -1 em caso contrário.
	   Dica: Para remover um elemento do vetor, utilize o metodo erase().
	*/
	std::vector<AlunoTurma>::iterator g = alunos.begin();
	for(; g != alunos.end(); ++g)
	{
		if(_matricula == g)
		{
			AlunoTurma::quantidade_alunos-=1;
			AlunoTurma::soma_notas_alunos-=g->getNota();
			alunos.erase(g);
			return 0;
		}	
	}   
	return -1;
}

void 
Turma::listaAlunos() {
	/* Lista os dados de todos os alunos da turma, incluindo o total de faltas e nota. Utilize a sobrecarga do operador de inserção para a impressão dos dados do aluno. Deve listar ainda a quantidade de alunos e a média das notas dos alunos nesta turma.
	*/
	std::vector<AlunoTurma>::iterator i = alunos.begin();
	std::cout << std::endl << "Quantidade de alunos na turma: " << AlunoTurma::quantidade_alunos << std::endl;
	std::cout << "Media de notas dos alunos na turma: " << AlunoTurma::soma_notas_alunos / (double) AlunoTurma::quantidade_alunos << std::endl << std::endl; 
	for(; i != alunos.end(); ++i)
	{
		std::cout << i;
	}
}