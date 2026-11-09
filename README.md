# 🔐 Szyfr XOR – WebAssembly (WASM)

Projekt implementuje szyfrowanie i deszyfrowanie tekstu za pomocą algorytmu XOR. Logika kryptograficzna została skompilowana do **WebAssembly (WASM)** przy użyciu narzędzia **Emscripten**, dzięki czemu może być wykonywana bezpośrednio w przeglądarce internetowej.

Aplikacja posiada prosty interfejs graficzny napisany w HTML, CSS i JavaScript, który komunikuje się z modułem WASM.

## ✨ Funkcjonalności

- 🔒 Szyfrowanie tekstu za pomocą operacji XOR.
- 🔓 Deszyfrowanie wcześniej wygenerowanego szyfrogramu.
- 🔑 Klucz szyfrujący o długości dokładnie 32 bajtów UTF-8.
- 🔤 Reprezentacja zaszyfrowanych danych w formacie HEX.
- 🌐 Działanie bezpośrednio w przeglądarce internetowej.
- ⚡ Wykorzystanie WebAssembly do wykonywania logiki szyfrującej.
- 🖥️ Prosty i przejrzysty interfejs użytkownika.

## 🛠️ Technologie

| Technologia | Zastosowanie |
|---|---|
| C/C++ | Implementacja algorytmu XOR |
| WebAssembly | Wykonywanie skompilowanego kodu |
| Emscripten | Kompilacja kodu do WASM |
| JavaScript | Komunikacja z modułem WASM |
| HTML5 | Struktura aplikacji |
| CSS3 | Wygląd interfejsu |

## ⚙️ Jak działa aplikacja?

1. Użytkownik wpisuje tekst przeznaczony do zaszyfrowania.
2. Podaje klucz szyfrujący o długości 32 bajtów.
3. JavaScript przekazuje tekst i klucz do funkcji `szyfrXOR()` udostępnionej przez moduł WebAssembly.
4. Moduł WASM wykonuje operację XOR.
5. Otrzymane dane binarne są konwertowane do postaci HEX.
6. Wynik zostaje wyświetlony w interfejsie aplikacji.

### Deszyfrowanie

1. Użytkownik wprowadza szyfrogram w formacie HEX.
2. Aplikacja konwertuje HEX na dane binarne.
3. Dane i klucz przekazywane są do modułu WASM.
4. Wykonywana jest ponownie operacja XOR.
5. Otrzymane dane są dekodowane z UTF-8 i wyświetlane jako tekst.

## 📁 Struktura projektu

```text
.
├── index.html    # Interfejs użytkownika i obsługa JavaScript
├── xor.js        # Moduł JavaScript wygenerowany przez Emscripten
├── xor.wasm      # Skompilowany moduł WebAssembly
└── README.md     # Dokumentacja projektu
```

## 🚀 Uruchomienie

### Wymagania

- Przeglądarka obsługująca WebAssembly.
- Lokalny serwer HTTP.
- Wygenerowane pliki `xor.js` oraz `xor.wasm`.

### Uruchomienie lokalne

Umieść wszystkie pliki projektu w jednym katalogu, a następnie uruchom serwer HTTP, np. za pomocą Pythona:

```bash
python -m http.server 8000
```

Otwórz w przeglądarce:

```text
http://localhost:8000
```

**Uwaga:** Aplikacja korzysta z modułu ES6 i ładuje plik WASM przez Emscripten, dlatego uruchomienie przez `file://` może nie działać poprawnie.

## 🔑 Format klucza

Aplikacja wymaga klucza o długości dokładnie 32 bajtów w kodowaniu UTF-8.

Przykładowy klucz:

```text
12345678901234567890123456789012
```

Długość klucza jest sprawdzana przed rozpoczęciem operacji szyfrowania lub deszyfrowania.

## ⚠️ Uwagi dotyczące bezpieczeństwa

Projekt ma charakter edukacyjny i demonstracyjny.

- XOR sam w sobie nie jest nowoczesnym, bezpiecznym algorytmem szyfrowania.
- Ponowne używanie tego samego klucza w klasycznym szyfrze XOR może prowadzić do ujawnienia danych.
- Klucz nie jest automatycznie generowany ani zarządzany przez aplikację.
- WebAssembly nie zapewnia automatycznie bezpieczeństwa kryptograficznego.

**Projekt nie powinien być wykorzystywany do ochrony poufnych danych ani jako zamiennik współczesnych algorytmów kryptograficznych, takich jak AES-256-GCM.**

## 🎯 Cel projektu

Celem projektu było zaprezentowanie możliwości technologii WebAssembly oraz integracji kodu skompilowanego w języku C/C++ z aplikacją internetową.

Projekt pokazuje, w jaki sposób można:

- skompilować kod natywny do WebAssembly za pomocą Emscripten,
- udostępnić funkcje C/C++ w JavaScript,
- przekazywać dane pomiędzy JavaScriptem a modułem WASM,
- obsługiwać dane binarne w przeglądarce,
- stworzyć prostą aplikację webową wykorzystującą WebAssembly.

---

**Technologie:** C/C++ · WebAssembly · Emscripten · JavaScript · HTML · CSS
