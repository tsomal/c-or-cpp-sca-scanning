#ifndef ZLIB_H
#define ZLIB_H

#define ZLIB_VERSION "1.2.11"

unsigned long adler32(unsigned char *buf, unsigned int len);
unsigned long crc32(unsigned char *buf, unsigned int len);

#endif
