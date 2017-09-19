#include <assert.h>
#include <stdbool.h>

#include "pilha.h"

void testVerificaPalindromo() {
    char *p;
    p = "arara";

    assert(verificaPalindrome(&p) == 0
           && "test verificaPalindromo()");
}

static void testRunner() {
    testVerificaPalindromo();
}
