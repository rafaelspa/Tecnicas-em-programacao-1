#include <iostream>
#include <stdexcept>

#include "dominio/Email.h"
#include "dominio/Estado.h"
#include "dominio/Identificador.h"
#include "dominio/Limite.h"
#include "dominio/Nome.h"
#include "dominio/Papel.h"
#include "dominio/Prioridade.h"
#include "dominio/Senha.h"
#include "dominio/Tamanho.h"
#include "dominio/Texto.h"
#include "dominio/Timestamp.h"

/**
 * @brief Testes de sanidade (smoke test) das classes domínio.
 *
 * Este main NAO substitui o teste fumaça do sistema integrado (atividade 6
 * da especificacao); serve apenas para validar rapidamente as classes
 * domínio enquanto o restante do sistema ainda nao existe.
 */

static int totalTestes = 0;
static int testesOk = 0;

template <typename Func>
void testarValido(const std::string& descricao, Func func) {
    totalTestes++;
    try {
        func();
        std::cout << "[OK]   " << descricao << "\n";
        testesOk++;
    } catch (const std::exception& e) {
        std::cout << "[FAIL] " << descricao << " -> excecao inesperada: " << e.what() << "\n";
    }
}

template <typename Func>
void testarInvalido(const std::string& descricao, Func func) {
    totalTestes++;
    try {
        func();
        std::cout << "[FAIL] " << descricao << " -> deveria ter lancado excecao\n";
    } catch (const std::invalid_argument&) {
        std::cout << "[OK]   " << descricao << "\n";
        testesOk++;
    }
}

int main() {
    std::cout << "=== Smoke test das classes dominio ===\n\n";

    testarValido("Email valido (joao.silva@empresa.com.br)", [] {
        Email e("joao.silva@empresa.com.br");
        (void) e.getValor();
    });
    testarInvalido("Email invalido (sem @)", [] { Email e("joaoempresa.com"); });
    testarInvalido("Email invalido (parte local iniciando com ponto)", [] { Email e(".joao@empresa.com"); });

    testarValido("Estado valido (FAZENDO)", [] { Estado e("FAZENDO"); });
    testarInvalido("Estado invalido (EM_ANDAMENTO)", [] { Estado e("EM_ANDAMENTO"); });

    testarValido("Identificador valido (abc123)", [] { Identificador i("abc123"); });
    testarInvalido("Identificador invalido (ab1230)", [] { Identificador i("ab1230"); });

    testarValido("Limite valido (10)", [] { Limite l(10); });
    testarInvalido("Limite invalido (26)", [] { Limite l(26); });

    testarValido("Nome valido (Joao Silva)", [] { Nome n("Joao Silva"); });
    testarInvalido("Nome invalido (termina com espaco)", [] { Nome n("Joao "); });

    testarValido("Papel valido (GESTOR)", [] { Papel p("GESTOR"); });
    testarInvalido("Papel invalido (ADMIN)", [] { Papel p("ADMIN"); });

    testarValido("Prioridade valida (ALTA)", [] { Prioridade p("ALTA"); });
    testarInvalido("Prioridade invalida (URGENTE)", [] { Prioridade p("URGENTE"); });

    testarValido("Senha valida (abc12)", [] { Senha s("abc12"); });
    testarInvalido("Senha invalida (sem digito: abcde)", [] { Senha s("abcde"); });

    testarValido("Tamanho valido (MEDIO)", [] { Tamanho t("MEDIO"); });
    testarInvalido("Tamanho invalido (ENORME)", [] { Tamanho t("ENORME"); });

    testarValido("Texto valido (Ola, mundo.)", [] { Texto t("Ola, mundo."); });
    testarInvalido("Texto invalido (nao termina com ponto)", [] { Texto t("Ola mundo"); });

    testarValido("Timestamp valido (5-JAN-2024-14:30)", [] { Timestamp t("5-JAN-2024-14:30"); });
    testarInvalido("Timestamp invalido (30-FEV-2024-10:00)", [] { Timestamp t("30-FEV-2024-10:00"); });
    testarValido("Timestamp valido - ano bissexto (29-FEV-2024-00:00)", [] { Timestamp t("29-FEV-2024-00:00"); });
    testarInvalido("Timestamp invalido - ano nao bissexto (29-FEV-2023-00:00)", [] { Timestamp t("29-FEV-2023-00:00"); });

    std::cout << "\n=== Resultado: " << testesOk << "/" << totalTestes << " testes OK ===\n";
    return (testesOk == totalTestes) ? 0 : 1;
}
