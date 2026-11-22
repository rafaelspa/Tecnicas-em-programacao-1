#include "../servicos/servicos.hpp"
#include "apresentaraplicacao.hpp"

void ApresentarAplicacao::apresentarAplicacao() {
    bool sair = false;
    int opcao = 9999;
    ServicoPessoa ServicoPessoa;
    cout << "=================================" << endl;
    cout << " Bem vindo ao Gestor de Projetos " << endl;
    cout << "=================================" << endl;
    cout << endl;
    while (true) {
        cout << "Selecione uma opcao:" << endl;
        cout << "1 - Logar" << endl;
        cout << "2 - Cadastrar" << endl;
        cout << "0 - Sair do programa" << endl;
        cout << endl;
        cout << "Opcao: ";
        cin >> opcao;
        switch (opcao) {
            case 0:{
                cout << "Fechando o programa." << endl;
                return;
            }
//            case 1:
//                logar();
            case 2: {
                string strEmail;
                string strNome;
                string strSenha;
                Email email;
                Nome nome;
                Senha senha;
                Papel papel;
                Pessoa pessoa;

                try {
                    cout << "Qual o email: ";
                    cin >> strEmail;
                    email.setEmail(strEmail);
                    cout << "Qual o nome: ";
                    cin >> strNome;
                    nome.setNome(strNome);
                    cout << "Qual a senha: ";
                    cin >> strSenha;
                    senha.setSenha(strSenha);
                    while (true) {
                        cout << "Qual o papel: " << endl;
                        cout << "1-GESTOR" << endl;
                        cout << "2-DESENVOLVEDOR" << endl;
                        cout << "Opcao: ";
                        cin >> opcao;
                        switch (opcao) {
                            case 1:
                                papel.setPapel("GESTOR");
                                pessoa.setPapel(papel);
                                break;
                            case 2:
                                papel.setPapel("DESENVOLVEDOR");
                                pessoa.setPapel(papel);
                                break;
                            default:
                                cout << "Escolha uma opcao valida." << endl;
                        }
                    }
                    pessoa.setEmail(email);
                    pessoa.setNome(nome);
                    pessoa.setSenha(senha);
                    pessoa.setPapel(papel);
                    ServicoPessoa.cadastrarPessoa(pessoa);
                } catch (exception& ex) {
                    cout << ex.what() << endl;
                }
                break;
            }
            default:{
                cout << endl;
                cout << "Escolha uma opcao valida." << endl;
                cout << endl;
                break;
            }
        }
    }
}


