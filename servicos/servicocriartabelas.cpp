#include "servicos.hpp"
#include <cstdio>


void ServicoCriarTabelas::criarTabelas() {
    sqlite3* db = nullptr;
    char* erro = nullptr;

    int status = remove("gestorprojeto.db");

    if (sqlite3_open("gestorprojeto.db", &db) != SQLITE_OK) {
        std::cerr << "Erro ao abrir: " << sqlite3_errmsg(db) << "\n";
        return;
    }

    char* sqlCriarEntidades[4] = {
        "CREATE TABLE IF NOT EXISTS pessoa ("
        "email VARCHAR(320) PRIMARY KEY NOT NULL,"
        "nome  VARCHAR(15)              NOT NULL,"
        "senha VARCHAR(5)               NOT NULL,"
        "papel VARCHAR(20)              NOT NULL);"
        ,
        "CREATE TABLE IF NOT EXISTS projeto ("
        "identificador VARCHAR(6)  PRIMARY KEY NOT NULL,"
        "email_pessoa  VARCHAR(320)            NOT NULL,"
        "nome          VARCHAR(15)             NOT NULL,"
        "limite        INTEGER                 NOT NULL,"
        "descricao     TEXT                    NOT NULL,"
        "inicio        CHAR(16)                NOT NULL,"
        "termino       CHAR(16)                NOT NULL,"
        "CONSTRAINT fk_pessoa "
        "    FOREIGN KEY (email_pessoa)"
        "    REFERENCES pessoa(email));"
        ,
        "CREATE TABLE IF NOT EXISTS quadro ("
        "identificador         VARCHAR(6) PRIMARY KEY NOT NULL,"
        "identificador_projeto VARCHAR(6)             NOT NULL,"
        "nome                  VARCHAR(15)            NOT NULL,"
        "limite                INTEGER                NOT NULL,"
        "CONSTRAINT fk_projeto "
        "    FOREIGN KEY(identificador_projeto)"
        "    REFERENCES projeto(identificador));"
        ,
        "CREATE TABLE IF NOT EXISTS cartao ("
        "identificador        VARCHAR(6)  PRIMARY KEY NOT NULL,"
        "email_pessoa         VARCHAR(320)            NOT NULL,"
        "identificador_quadro VARCHAR(6)              NOT NULL,"
        "nome                 VARCHAR(15)             NOT NULL,"
        "descricao            TEXT                    NOT NULL,"
        "prioridade           VARCHAR(20)             NOT NULL,"
        "estado               VARCHAR(20)             NOT NULL,"
        "tamanho              VARCHAR(20)             NOT NULL,"
        "entrada              CHAR(16)                NOT NULL,"
        "inicio               CHAR(16)                NOT NULL,"
        "termino              CHAR(16)                NOT NULL,"
        "CONSTRAINT fk_pessoa "
        "    FOREIGN KEY(email_pessoa) "
        "    REFERENCES pessoa(email)"
        "CONSTRAINT fk_quadro "
        "    FOREIGN KEY(identificador_quadro)"
        "    REFERENCES quadro(identificador));"
    };

    for (int i = 0; i < 4; i++) {
        if (sqlite3_exec(db, sqlCriarEntidades[i], nullptr, nullptr, &erro) != SQLITE_OK) {
            std::cerr << "Erro: " << erro << "\n";
            sqlite3_free(erro);
        }
    }

}
