#include <bits/stdc++.h>
using namespace std;
 
struct aluno{
	string nome;
	int ra;
	char nota;
};

struct disciplina{
	int sala;
	string prof;
	aluno alunos[10];
};

bool compNome(aluno a, aluno b){
	if(a.nome < b.nome) return 1;
	else return 0;
}

bool compNota(aluno a, aluno b){
	if(a.nota < b.nota) return 1;
	else if(a.nota == b.nota) return compNome(a, b);
}

int main(){
	ios_base::sync_with_stdio(false);

		const int N = 100;

		aluno v[N];
		int n;
		cin >> n;

		for(int i = 0; i < n; i++){
			cout << "Nome: ";
			cin >> v[i].nome;

			cout << "RA: ";
			cin >> v[i].ra;

			cout << "Nota: ";
			cin >> v[i].nota;
		}

		//sort(v, v+n, compNome);
		sort(v, v+n, compNota);

		for(int i = 0; i < n; i++){
			cout << v[i].nome << endl;
			cout << v[i].ra << endl;
			cout << v[i].nota << endl;
			cout << endl;
		}

	return 0;
}
