#include <stdio.h>

int main(int argc, char** argv) {
	unsigned char mario[] =
		"\x0a"
		"\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38"
		"\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b"
		"\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30"
		"\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20"
		"\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d"
		"\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38"
		"\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b"
		"\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x0a\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30"
		"\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20"
		"\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x34\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x34\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x34\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x34\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x36\x30\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x36\x30\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d"
		"\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38"
		"\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b"
		"\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x0a\x1b\x5b\x34\x38\x3b"
		"\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30"
		"\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x34"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x34"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x34"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x34"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x34"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x36\x30"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x36\x30"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20"
		"\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d"
		"\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x0a\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38"
		"\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b"
		"\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31"
		"\x33\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31"
		"\x33\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31"
		"\x33\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32"
		"\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32"
		"\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32"
		"\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32"
		"\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30"
		"\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32"
		"\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20"
		"\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d"
		"\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x0a\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38"
		"\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b"
		"\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x31\x33\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x31\x33\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30"
		"\x39\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20"
		"\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x0a\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d"
		"\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x31\x33\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x31\x33\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x31\x33\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x39\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38"
		"\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b"
		"\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30"
		"\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x0a\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20"
		"\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x33\x30\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x33\x30\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x39\x34\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x39\x34\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x39\x34\x6d\x20\x20\x1b\x5b\x30\x6d"
		"\x1b\x5b\x34\x38\x3b\x35\x3b\x39\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38"
		"\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b"
		"\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30"
		"\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x0a\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20"
		"\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d"
		"\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38"
		"\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b"
		"\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x0a\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30"
		"\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20"
		"\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d"
		"\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38"
		"\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b"
		"\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x0a\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30"
		"\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20"
		"\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d"
		"\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38"
		"\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b"
		"\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x31\x33\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30"
		"\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20"
		"\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x0a\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d"
		"\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38"
		"\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b"
		"\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31"
		"\x32\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x33\x30\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x33\x30\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20"
		"\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d"
		"\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x0a"
		"\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38"
		"\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b"
		"\x35\x3b\x31\x32\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x31\x32\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x31\x32\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31"
		"\x32\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x31\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20"
		"\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x33\x30\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x33\x30\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d"
		"\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x0a\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38"
		"\x3b\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b"
		"\x35\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x30\x39\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x31\x32\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31"
		"\x32\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x31"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20"
		"\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x33\x30\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x33\x30\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d"
		"\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38"
		"\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x0a\x1b\x5b\x34\x38"
		"\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b"
		"\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x32\x32\x34\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31"
		"\x32\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x39"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20"
		"\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b\x5b\x30\x6d"
		"\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x31\x33\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x31\x33\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38"
		"\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b"
		"\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30"
		"\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x0a\x1b\x5b\x34\x38\x3b\x35\x3b\x30"
		"\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x33\x30\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x33\x30\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x33\x30\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20"
		"\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b\x5b\x30\x6d"
		"\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38"
		"\x3b\x35\x3b\x31\x33\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38"
		"\x3b\x35\x3b\x31\x33\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38"
		"\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b"
		"\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30"
		"\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x0a\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20"
		"\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x33\x30\x6d\x20"
		"\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x33\x30\x6d\x20"
		"\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x33\x30\x6d\x20"
		"\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b\x5b\x30\x6d"
		"\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x31\x32\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38"
		"\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b"
		"\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30"
		"\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20"
		"\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x0a\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x33\x30\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x31\x33\x30\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d"
		"\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34"
		"\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38"
		"\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b"
		"\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35"
		"\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b"
		"\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30"
		"\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30"
		"\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d"
		"\x20\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20"
		"\x20\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20"
		"\x1b\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b"
		"\x5b\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b"
		"\x30\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30"
		"\x6d\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d"
		"\x1b\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b"
		"\x5b\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x1b\x5b"
		"\x34\x38\x3b\x35\x3b\x30\x30\x6d\x20\x20\x1b\x5b\x30\x6d\x0a\x0a\x20"
		"\x20\x20\x20\x20\x20\x20\x20\x20Hola! Soy super mario!\n\n";

	printf("%s", mario);

	return 0;
}
