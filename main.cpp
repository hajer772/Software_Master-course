#include <string>
#include <emscripten/emscripten.h>

extern "C" {

EMSCRIPTEN_KEEPALIVE
const char* greet(const char* name) {
    static std::string result;
    result = "Hello, ";
    result += name;
    result += "!";
    return result.c_str();
}

}
