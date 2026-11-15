#include <stdio.h>
#include <stdlib.h>

#include "zlib.h"
#include "png.h"
#include "ssl.h"

int main(void) {
    printf("SCA demo application starting\n");
    printf("zlib: %s\n", ZLIB_VERSION);
    printf("libpng: %s\n", PNG_LIBPNG_VER_STRING);
    printf("OpenSSL: %s\n", OPENSSL_VERSION_TEXT);
    return EXIT_SUCCESS;
}
