
#include <string>
#include <stdexcept>
#include <emscripten/bind.h>

using namespace std;

string szyfrXOR(string tekst, string klucz) {

    if (klucz.size() != 32) {
        throw invalid_argument(
            "Klucz musi miec dokladnie 32 bajty!"
        );
    }

    for (size_t i = 0; i < tekst.size(); i++) {
        tekst[i] ^= klucz[i % 32];
    }

    return tekst;
}

EMSCRIPTEN_BINDINGS(xor_module) {
    emscripten::function("szyfrXOR", &szyfrXOR);
}
