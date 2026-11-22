#include "servicos.hpp"
#include "../dominios/dominios.hpp"
#include "../sqlite3.h"


void ServicoPessoa::cadastrarPessoa(Pessoa pessoa) {
    sqlite3* db = nullptr;
    char* erro = nullptr;

    if (sqlite3_open("gestorprojeto.db", &db) != SQLITE_OK) {
        std::cerr << "Erro ao abrir: " << sqlite3_errmsg(db) << "\n";
        return;
    }

    sqlite3_stmt* stmt = nullptr;

    const char* sqlInserir =
        "INSERT INTO pessoas (email, nome, senha, papel) "
        "VALUES (?, ?, ?, ?);";

    if (sqlite3_prepare_v2(db, sqlInserir, -1, &stmt, nullptr) == SQLITE_OK) {
        sqlite3_bind_text(stmt, 1, pessoa.getEmail().getEmail().c_str(), -1, SQLITE_TRANSIENT);
        sqlite3_bind_text(stmt, 2, pessoa.getNome().getNome().c_str(), -1, SQLITE_TRANSIENT);
        sqlite3_bind_text(stmt, 3, pessoa.getSenha().getSenha().c_str(), -1, SQLITE_TRANSIENT);
        sqlite3_bind_text(stmt, 4, pessoa.getPapel().getPapel().c_str(), -1, SQLITE_TRANSIENT);

        if (sqlite3_step(stmt) != SQLITE_DONE) {
            std::cerr << "Erro ao inserir: " << sqlite3_errmsg(db) << "\n";
        }
    }
}

static int callback(void* /*dados*/, int numCols, char** valores, char** nomes) {
    for (int i = 0; i < numCols; i++) {
        std::cout << nomes[i] << " = " << (valores[i] ? valores[i] : "NULL") << "  ";
    }
    std::cout << "\n";
    return 0;
}
