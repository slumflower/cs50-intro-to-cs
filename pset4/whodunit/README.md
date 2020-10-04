# Questions

## What's `stdint.h`?

<stdint.h> is a header file that defines interger types and their corresponding widths. Interger types have widths of 8,16,32,or 64 bits.
By using <stdint.h> you can better specify the integer type and bits you need for a program.

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

These are exact-width integer types. Using them tells the compiler writer to use the exact integer size (8,16,32,64 bit) that will fulfill the specific request.

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

A 'BYTE' is 8-bits = 1 bytes. 'DWORD' is 32-bit = 4 bytes. 'LONG' is 32-bits = 4 bytes. 'WORD' is 16-bits = 2 bytes.

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

0x4d42

## What's the difference between `bfSize` and `biSize`?

'bfSize' is the size, in bytes, of a bitmap file. 'biSize' is the number of bytes required by struct BITMAPINFOHEADER

## What does it mean if `biHeight` is negative?

If biHeight is negative, the bitmap is a top-down bitmap and its starts in the upper-left corner.

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

biBitCount

## Why might `fopen` return `NULL` in lines 24 and 32 of `copy.c`?

because the system may fail to open the file

## Why is the third argument to `fread` always `1` in our code?

fread() returns the number of items read. because it is reading 1 file it should return 1

## What value does line 65 of `copy.c` assign to `padding` if `bi.biWidth` is `3`?

3

## What does `fseek` do?

changes the location of the file pointer.in this case, it's moving the file pointer past any padding

## What is `SEEK_CUR`?

moves file pointer to a given location

## Whodunit?

professor plum killed mr. boddy with a candlestick in the library

