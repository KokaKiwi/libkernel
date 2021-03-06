#ifndef AZERTY_H
#define AZERTY_H

#include "../types.h"

/*      Normal - Shift - Alt - ?                        */
uchar keymap[] = {              //
        0x1B, 0x1B, 0x1B, 0x1B, // esc (0x01)
        '&', '1', '1', '1',     //                  - 8
        '�', '2', '~', '2',     //                  
        '"', '3', '#', '3',     //                  - 16
        '\'','4', '{', '4',     //
        '(', '5', '[', '5',     //                  - 24
        '-', '6', '|', '6',     //
        '�', '7', '`', '7',     //                  - 32
        '_', '8', '\\','8',     //
        '�', '9', '^', '9',     //                  - 40
        '�', '0', '@', '0',     //
        ')', '�', ']', '-',     //                  - 48
        '=', '+', '}', '=',     //
        0x08, 0x08, 0x7F, 0x08, // backspace        - 56
        0x09, 0x09, 0x09, 0x09, // tab
        'a', 'A', 'a', 'a',     //                  - 64
        'z', 'Z', 'z', 'z',     //
        'e', 'E', 'e', 'e',     //                  - 72
        'r', 'R', 'r', 'r',     //
        't', 'T', 't', 't',     //                  - 80
        'y', 'Y', 'y', 'y',     //
        'u', 'U', 'u', 'u',     //                  - 88
        'i', 'I', 'i', 'i',     //
        'o', 'O', 'o', 'o',     //                  - 96
        'p', 'P', 'p', 'p',     //
        '^', '�', '^', '^',     //                  - 104
        '$', '�', '$', '$',     //
        0x0A, 0x0A, 0x0A, 0x0A, // enter            - 112
        0xFF, 0xFF, 0xFF, 0xFF, // ctrl
        'q', 'Q', '8', '9',     //                  - 120
        's', 'S', 's', 's',     //
        'd', 'D', 'd', 'd',     //                  - 128
        'f', 'F', 'f', 'f',     //
        'g', 'G', 'g', 'g',     //                  - 136
        'h', 'H', 'h', 'h',     //
        'j', 'J', 'j', 'j',     //                  - 144
        'k', 'K', 'k', 'k',     //
        'l', 'L', 'l', 'l',     //                  - 152
        'm', 'M', 'm', 'm',     //
        0x27, 0x22, 0x27, 0x27, // '"               - 160
        '`', '~', '`', '`',     // `~
        0xFF, 0xFF, 0xFF, 0xFF, // Lshift (0x2a)    - 168
        '\\', '|', '\\', '\\',  //
        'w', 'W', 'w', 'w',     //                  - 176
        'x', 'X', 'x', 'x',     //
        'c', 'C', 'c', 'c',     //                  - 184
        'v', 'V', 'v', 'v',     //
        'b', 'B', 'b', 'b',     //                  - 192
        'n', 'N', 'n', 'n',     //
        ',', '?', ',', ',',     //                  - 200
        0x2C, 0x2C, 0x2C, 0x2C, // <
        0x2E, 0x2E, 0x2E, 0x2E, // >                - 208
        '!' , '�' , '!' , '!' , // !�
        0xFF, 0xFF, 0xFF, 0xFF, // Rshift (0x36)    - 216
        0xFF, 0xFF, 0xFF, 0xFF, // (0x37)
        0xFF, 0xFF, 0xFF, 0xFF, // (0x38)           - 224
        ' ', ' ', ' ', ' ',     // space 
        0xFF, 0xFF, 0xFF, 0xFF, // (0x3a)           - 232
        0xFF, 0xFF, 0xFF, 0xFF, // (0x3b)
        0xFF, 0xFF, 0xFF, 0xFF, // (0x3c)           - 240
        0xFF, 0xFF, 0xFF, 0xFF, // (0x3d)
        0xFF, 0xFF, 0xFF, 0xFF, // (0x3e)           - 248
        0xFF, 0xFF, 0xFF, 0xFF, // (0x3f)
        0xFF, 0xFF, 0xFF, 0xFF, // (0x40)           - 256
        0xFF, 0xFF, 0xFF, 0xFF, // (0x41)
        0xFF, 0xFF, 0xFF, 0xFF, // (0x42)           - 264
        0xFF, 0xFF, 0xFF, 0xFF, // (0x43)
        0xFF, 0xFF, 0xFF, 0xFF, // (0x44)           - 272
        0xFF, 0xFF, 0xFF, 0xFF, // (0x45)
        0xFF, 0xFF, 0xFF, 0xFF, // (0x46)           - 280
        0xFF, 0xFF, 0xFF, 0xFF, // (0x47)
        0xFF, 0xFF, 0xFF, 0xFF, // (0x48)           - 288
        0xFF, 0xFF, 0xFF, 0xFF, // (0x49)
        0xFF, 0xFF, 0xFF, 0xFF, // (0x4a)           - 296
        0xFF, 0xFF, 0xFF, 0xFF, // (0x4b)
        0xFF, 0xFF, 0xFF, 0xFF, // (0x4c)           - 304
        0xFF, 0xFF, 0xFF, 0xFF, // (0x4d)
        0xFF, 0xFF, 0xFF, 0xFF, // (0x4e)           - 312
        0xFF, 0xFF, 0xFF, 0xFF, // (0x4f)
        0xFF, 0xFF, 0xFF, 0xFF, // (0x50)           - 320
        0xFF, 0xFF, 0xFF, 0xFF, // (0x51)
        0xFF, 0xFF, 0xFF, 0xFF, // (0x52)           - 328
        0xFF, 0xFF, 0xFF, 0xFF, // (0x53)
        0xFF, 0xFF, 0xFF, 0xFF, // (0x54)           - 336
        0xFF, 0xFF, 0xFF, 0xFF, // (0x55)
        0xFF, 0xFF, 0xFF, 0xFF, // (0x56)           - 344
        0xFF, 0xFF, 0xFF, 0xFF, // (0x57)
        0xFF, 0xFF, 0xFF, 0xFF, // (0x58)           - 352
        0xFF, 0xFF, 0xFF, 0xFF, // (0x59)
        0xFF, 0xFF, 0xFF, 0xFF, // (0x5a)           - 360
        0xFF, 0xFF, 0xFF, 0xFF, // (0x5b)
        0xFF, 0xFF, 0xFF, 0xFF, // (0x5c)           - 368
        0xFF, 0xFF, 0xFF, 0xFF, // (0x5d)
        0xFF, 0xFF, 0xFF, 0xFF, // (0x5e)           - 376
        0xFF, 0xFF, 0xFF, 0xFF, // (0x5f)
        0xFF, 0xFF, 0xFF, 0xFF, // (0x60)           - 384
        0xFF, 0xFF, 0xFF, 0xFF  // (0x61)
};

#endif
