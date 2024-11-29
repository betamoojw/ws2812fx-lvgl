/*******************************************************************************
 * Size: 20 px
 * Bpp: 4
 * Opts: --bpp 4 --size 20 --font /Users/felix/SquareLine/assets/Sony_Sketch_EF.ttf -o /Users/felix/SquareLine/assets/ui_font_sony20.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_SONY20
#define UI_FONT_SONY20 1
#endif

#if UI_FONT_SONY20

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0xaf, 0x4a, 0xf4, 0xaf, 0x4a, 0xf4, 0xaf, 0x4a,
    0xf4, 0xaf, 0x46, 0x93, 0xaf, 0x50,

    /* U+0022 "\"" */
    0xe5, 0xb7, 0xb3, 0x95,

    /* U+0023 "#" */
    0x0, 0x0, 0xcf, 0x0, 0x9f, 0x30, 0x0, 0x1,
    0xfa, 0x0, 0xde, 0x0, 0x8, 0xff, 0xff, 0xff,
    0xff, 0xfc, 0x0, 0x19, 0xf4, 0x16, 0xf7, 0x10,
    0x0, 0xc, 0xf0, 0x8, 0xf3, 0x0, 0x2f, 0xff,
    0xff, 0xff, 0xff, 0xf2, 0x2, 0x5f, 0x92, 0x2f,
    0xc2, 0x20, 0x0, 0x6f, 0x50, 0x3f, 0x80, 0x0,
    0x0, 0xaf, 0x10, 0x6f, 0x50, 0x0,

    /* U+0024 "$" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x45,
    0x0, 0x0, 0x6, 0xdf, 0xff, 0xff, 0xf5, 0x2f,
    0xe7, 0x89, 0x55, 0x51, 0x5f, 0xa0, 0x45, 0x0,
    0x0, 0x4f, 0xd2, 0x56, 0x0, 0x0, 0xa, 0xff,
    0xff, 0xff, 0x80, 0x0, 0x13, 0x78, 0x5e, 0xf3,
    0x0, 0x0, 0x45, 0xa, 0xf4, 0x15, 0x55, 0x89,
    0x6e, 0xf3, 0x5f, 0xff, 0xff, 0xfd, 0x70, 0x0,
    0x0, 0x45, 0x0, 0x0,

    /* U+0025 "%" */
    0x2d, 0xff, 0xfe, 0x60, 0x0, 0xc, 0xe1, 0x0,
    0x6, 0xf3, 0x0, 0xdc, 0x0, 0xa, 0xf3, 0x0,
    0x0, 0x6f, 0x20, 0xc, 0xc0, 0x7, 0xf4, 0x0,
    0x0, 0x6, 0xf3, 0x0, 0xcc, 0x5, 0xf8, 0xcf,
    0xff, 0xe5, 0x2c, 0xff, 0xfe, 0x63, 0xf9, 0x5f,
    0x40, 0xc, 0xc0, 0x0, 0x0, 0x1, 0xeb, 0x6,
    0xf2, 0x0, 0xbd, 0x0, 0x0, 0x0, 0xdd, 0x10,
    0x6f, 0x20, 0xb, 0xd0, 0x0, 0x0, 0xbe, 0x20,
    0x5, 0xf3, 0x0, 0xcc, 0x0, 0x0, 0x9f, 0x30,
    0x0, 0x1c, 0xff, 0xfe, 0x50,

    /* U+0026 "&" */
    0x0, 0x8e, 0xff, 0xfb, 0x20, 0x0, 0x0, 0x4f,
    0xd5, 0x48, 0xfb, 0x0, 0x0, 0x5, 0xf9, 0x0,
    0x3f, 0xb0, 0x0, 0x0, 0xb, 0xf8, 0xaf, 0xe3,
    0x0, 0x0, 0x2, 0xaf, 0xff, 0x70, 0x16, 0x40,
    0x2, 0xfe, 0x54, 0xef, 0x63, 0xfc, 0x0, 0x5f,
    0x90, 0x1, 0xbf, 0xdf, 0xb0, 0x3, 0xfe, 0x75,
    0x56, 0xef, 0xf6, 0x0, 0x5, 0xcf, 0xff, 0xff,
    0xae, 0xf6, 0x0,

    /* U+0027 "'" */
    0xe2, 0xd1, 0x30,

    /* U+0028 "(" */
    0x1d, 0xe3, 0x9f, 0x60, 0xcf, 0x30, 0xcf, 0x20,
    0xcf, 0x20, 0xcf, 0x20, 0xcf, 0x20, 0xcf, 0x20,
    0xcf, 0x20, 0xcf, 0x20, 0xcf, 0x30, 0x9f, 0x60,
    0x1d, 0xf3,

    /* U+0029 ")" */
    0x1b, 0xf5, 0x0, 0x1f, 0xf0, 0x0, 0xdf, 0x20,
    0xc, 0xf2, 0x0, 0xcf, 0x20, 0xc, 0xf2, 0x0,
    0xcf, 0x20, 0xc, 0xf2, 0x0, 0xcf, 0x20, 0xc,
    0xf2, 0x0, 0xdf, 0x20, 0x1f, 0xf0, 0xb, 0xf5,
    0x0,

    /* U+002A "*" */
    0x0, 0xa, 0x70, 0x0, 0x4, 0x9, 0x61, 0x40,
    0x1b, 0xee, 0xee, 0xa0, 0x0, 0x4f, 0xf1, 0x0,
    0x1, 0xe5, 0x8b, 0x0, 0x1, 0x50, 0x6, 0x0,

    /* U+002B "+" */
    0x0, 0x0, 0xdd, 0x0, 0x0, 0x0, 0x0, 0xdd,
    0x0, 0x0, 0x5f, 0xff, 0xff, 0xff, 0xf5, 0x0,
    0x0, 0xed, 0x0, 0x0, 0x0, 0x0, 0xed, 0x0,
    0x0, 0x0, 0x0, 0x44, 0x0, 0x0,

    /* U+002C "," */
    0x1c, 0x11, 0xf2, 0x2b, 0x0,

    /* U+002D "-" */
    0xff, 0xff, 0xf5,

    /* U+002E "." */
    0x2a, 0x4, 0xe1,

    /* U+002F "/" */
    0x0, 0x0, 0x0, 0x1e, 0xa0, 0x0, 0x0, 0x0,
    0xcd, 0x0, 0x0, 0x0, 0x8, 0xf2, 0x0, 0x0,
    0x0, 0x4f, 0x60, 0x0, 0x0, 0x1, 0xe9, 0x0,
    0x0, 0x0, 0xc, 0xd0, 0x0, 0x0, 0x0, 0x8f,
    0x20, 0x0, 0x0, 0x4, 0xf5, 0x0, 0x0, 0x0,
    0x2e, 0x90, 0x0, 0x0, 0x0,

    /* U+0030 "0" */
    0x1a, 0xef, 0xff, 0xfd, 0x80, 0xaf, 0xb6, 0x55,
    0x6d, 0xf5, 0xdf, 0x20, 0x0, 0x6, 0xf8, 0xdf,
    0x10, 0x0, 0x6, 0xf8, 0xdf, 0x10, 0x0, 0x6,
    0xf8, 0xdf, 0x10, 0x0, 0x6, 0xf8, 0xdf, 0x20,
    0x0, 0x6, 0xf8, 0xbf, 0xb6, 0x55, 0x6d, 0xf6,
    0x2b, 0xef, 0xff, 0xfe, 0x80,

    /* U+0031 "1" */
    0xef, 0xff, 0x65, 0x5b, 0xf6, 0x0, 0x8f, 0x60,
    0x8, 0xf6, 0x0, 0x8f, 0x60, 0x8, 0xf6, 0x0,
    0x8f, 0x60, 0x8, 0xf6, 0x0, 0x8f, 0x60,

    /* U+0032 "2" */
    0x7f, 0xff, 0xff, 0xfd, 0x50, 0x25, 0x55, 0x55,
    0x7f, 0xf1, 0x0, 0x0, 0x0, 0xc, 0xf2, 0x0,
    0x1, 0x11, 0x3e, 0xf1, 0x9, 0xff, 0xff, 0xff,
    0x90, 0x6f, 0xd5, 0x44, 0x31, 0x0, 0x7f, 0x70,
    0x0, 0x0, 0x0, 0x7f, 0xa5, 0x55, 0x55, 0x50,
    0x7f, 0xff, 0xff, 0xff, 0xf2,

    /* U+0033 "3" */
    0xbf, 0xff, 0xff, 0xfc, 0x34, 0x55, 0x55, 0x58,
    0xfd, 0x0, 0x0, 0x0, 0xf, 0xe0, 0x0, 0x1,
    0x14, 0xfc, 0x0, 0xd, 0xff, 0xfe, 0x20, 0x0,
    0x34, 0x47, 0xfb, 0x0, 0x0, 0x0, 0xf, 0xe4,
    0x55, 0x55, 0x69, 0xfd, 0xbf, 0xff, 0xff, 0xfb,
    0x30,

    /* U+0034 "4" */
    0x0, 0x0, 0x9f, 0x80, 0xfe, 0x0, 0x5, 0xfb,
    0x0, 0xfe, 0x0, 0x2f, 0xe1, 0x0, 0xfe, 0x0,
    0xdf, 0x30, 0x0, 0xfe, 0xa, 0xf7, 0x11, 0x11,
    0xfe, 0xf, 0xff, 0xff, 0xff, 0xfe, 0x1, 0x34,
    0x44, 0x44, 0xfe, 0x0, 0x0, 0x0, 0x0, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0xfe,

    /* U+0035 "5" */
    0x8f, 0xff, 0xff, 0xff, 0xf2, 0x8f, 0xa5, 0x55,
    0x55, 0x50, 0x8f, 0x71, 0x11, 0x0, 0x0, 0x8f,
    0xff, 0xff, 0xfd, 0x40, 0x24, 0x44, 0x44, 0x7f,
    0xf0, 0x0, 0x0, 0x0, 0xd, 0xf1, 0x0, 0x0,
    0x0, 0xd, 0xf1, 0x35, 0x55, 0x55, 0x8f, 0xe0,
    0x8f, 0xff, 0xff, 0xfc, 0x30,

    /* U+0036 "6" */
    0x3b, 0xef, 0xff, 0xff, 0xf3, 0xdf, 0x85, 0x55,
    0x55, 0x51, 0xff, 0x11, 0x11, 0x10, 0x0, 0xff,
    0xff, 0xff, 0xff, 0xb1, 0xff, 0x54, 0x44, 0x5c,
    0xf8, 0xff, 0x0, 0x0, 0x5, 0xfa, 0xef, 0x0,
    0x0, 0x5, 0xfa, 0xcf, 0xa6, 0x55, 0x6c, 0xf8,
    0x2b, 0xef, 0xff, 0xfe, 0x90,

    /* U+0037 "7" */
    0xaf, 0xff, 0xff, 0xff, 0xe1, 0x35, 0x55, 0x55,
    0x7f, 0xe0, 0x0, 0x0, 0x0, 0xaf, 0x50, 0x0,
    0x0, 0x4, 0xfb, 0x0, 0x0, 0x0, 0xd, 0xf2,
    0x0, 0x0, 0x0, 0x8f, 0x80, 0x0, 0x0, 0x2,
    0xfd, 0x0, 0x0, 0x0, 0xc, 0xf4, 0x0, 0x0,
    0x0, 0x6f, 0xa0, 0x0, 0x0,

    /* U+0038 "8" */
    0x3b, 0xef, 0xff, 0xfe, 0x90, 0xcf, 0xa6, 0x66,
    0x6d, 0xf7, 0xef, 0x0, 0x0, 0x5, 0xf9, 0xcf,
    0x51, 0x11, 0x2a, 0xf7, 0x1d, 0xff, 0xff, 0xff,
    0x90, 0xaf, 0x85, 0x44, 0x5b, 0xf5, 0xef, 0x0,
    0x0, 0x5, 0xf9, 0xdf, 0x95, 0x55, 0x6c, 0xf7,
    0x3c, 0xff, 0xff, 0xfe, 0xa0,

    /* U+0039 "9" */
    0x3c, 0xff, 0xff, 0xfe, 0x90, 0xdf, 0x85, 0x55,
    0x5c, 0xf7, 0xff, 0x0, 0x0, 0x5, 0xfa, 0xef,
    0x51, 0x11, 0x16, 0xfa, 0x7f, 0xff, 0xff, 0xff,
    0xfa, 0x1, 0x34, 0x44, 0x48, 0xfa, 0x0, 0x0,
    0x0, 0x5, 0xfa, 0x25, 0x55, 0x55, 0x6d, 0xf8,
    0x8f, 0xff, 0xff, 0xfe, 0xa0,

    /* U+003A ":" */
    0x0, 0x0, 0xe4, 0x2, 0x0, 0x0, 0xe, 0x40,
    0x20,

    /* U+003B ";" */
    0x0, 0x0, 0xf5, 0x3, 0x0, 0x0, 0x5, 0x20,
    0xa6, 0xa, 0x10,

    /* U+003C "<" */
    0x0, 0x0, 0x0, 0x16, 0xb5, 0x0, 0x2, 0x7c,
    0xfa, 0x50, 0x18, 0xdd, 0x94, 0x0, 0x0, 0x3e,
    0xe8, 0x30, 0x0, 0x0, 0x0, 0x38, 0xde, 0x95,
    0x0, 0x0, 0x0, 0x2, 0x7c, 0xf4, 0x0, 0x0,
    0x0, 0x0, 0x11,

    /* U+003D "=" */
    0x4f, 0xff, 0xff, 0xff, 0xf7, 0x3, 0x33, 0x33,
    0x33, 0x31, 0x3e, 0xee, 0xee, 0xee, 0xe6, 0x1,
    0x11, 0x11, 0x11, 0x10,

    /* U+003E ">" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x5c, 0x72, 0x0,
    0x0, 0x0, 0x4, 0x9e, 0xd8, 0x30, 0x0, 0x0,
    0x0, 0x38, 0xde, 0x92, 0x0, 0x0, 0x4, 0x9e,
    0xe3, 0x0, 0x5a, 0xfd, 0x83, 0x0, 0x4f, 0xc7,
    0x20, 0x0, 0x0, 0x11, 0x0, 0x0, 0x0, 0x0,

    /* U+003F "?" */
    0x9f, 0xff, 0xff, 0xfd, 0x40, 0x35, 0x55, 0x55,
    0x8f, 0xf0, 0x0, 0x0, 0x0, 0xd, 0xf1, 0x0,
    0x0, 0x0, 0x2f, 0xf0, 0x0, 0xb, 0xff, 0xff,
    0x90, 0x0, 0x4f, 0xc3, 0x31, 0x0, 0x0, 0x4f,
    0xa0, 0x0, 0x0, 0x0, 0x15, 0x30, 0x0, 0x0,
    0x0, 0x4f, 0xa0, 0x0, 0x0,

    /* U+0040 "@" */
    0x0, 0x2, 0x8c, 0xcc, 0xcc, 0x93, 0x0, 0x0,
    0x8d, 0x60, 0x0, 0x0, 0x4b, 0xa0, 0x9, 0xc0,
    0x8, 0xdd, 0xc7, 0xd0, 0x99, 0x1f, 0x20, 0xad,
    0x20, 0x2f, 0x90, 0x2e, 0x4e, 0x0, 0xf5, 0x0,
    0xe, 0x50, 0x4d, 0x2f, 0x10, 0xd9, 0x0, 0x7f,
    0x21, 0xd5, 0xa, 0xa0, 0x19, 0xba, 0x66, 0xbb,
    0x40, 0x0, 0x9c, 0x40, 0x0, 0x0, 0x3, 0x0,
    0x0, 0x2, 0x8c, 0xcc, 0xcc, 0xc9, 0x0,

    /* U+0041 "A" */
    0x0, 0x0, 0x6, 0xed, 0x20, 0x0, 0x0, 0x0,
    0x1, 0xfc, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x9f,
    0x29, 0xf4, 0x0, 0x0, 0x0, 0x2f, 0x90, 0x1e,
    0xc0, 0x0, 0x0, 0xa, 0xf2, 0x0, 0x7f, 0x50,
    0x0, 0x3, 0xff, 0xff, 0xff, 0xfd, 0x0, 0x0,
    0xbf, 0x43, 0x33, 0x37, 0xf6, 0x0, 0x4f, 0xa0,
    0x0, 0x0, 0xf, 0xe0, 0xc, 0xf4, 0x0, 0x0,
    0x0, 0x9f, 0x70,

    /* U+0042 "B" */
    0xff, 0xff, 0xff, 0xfe, 0xa0, 0xff, 0x55, 0x55,
    0x6c, 0xf7, 0xff, 0x0, 0x0, 0x5, 0xf9, 0xff,
    0x11, 0x11, 0x19, 0xf7, 0xff, 0xff, 0xff, 0xff,
    0xc0, 0xff, 0x44, 0x44, 0x4b, 0xf6, 0xff, 0x0,
    0x0, 0x5, 0xf9, 0xff, 0x55, 0x55, 0x6c, 0xf7,
    0xff, 0xff, 0xff, 0xfe, 0xa0,

    /* U+0043 "C" */
    0x3c, 0xff, 0xff, 0xff, 0xcd, 0xf9, 0x55, 0x55,
    0x54, 0xff, 0x0, 0x0, 0x0, 0xf, 0xf0, 0x0,
    0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0xf, 0xf0,
    0x0, 0x0, 0x0, 0xef, 0x0, 0x0, 0x0, 0xc,
    0xfa, 0x65, 0x55, 0x54, 0x2b, 0xff, 0xff, 0xff,
    0xb0,

    /* U+0044 "D" */
    0xff, 0xff, 0xff, 0xfe, 0xb1, 0xff, 0x55, 0x55,
    0x6b, 0xf9, 0xff, 0x0, 0x0, 0x3, 0xfb, 0xff,
    0x0, 0x0, 0x3, 0xfb, 0xff, 0x0, 0x0, 0x3,
    0xfb, 0xff, 0x0, 0x0, 0x3, 0xfb, 0xff, 0x0,
    0x0, 0x3, 0xfb, 0xff, 0x55, 0x55, 0x6c, 0xf9,
    0xff, 0xff, 0xff, 0xfe, 0xa1,

    /* U+0045 "E" */
    0x2b, 0xff, 0xff, 0xff, 0xbc, 0xfa, 0x65, 0x55,
    0x54, 0xff, 0x0, 0x0, 0x0, 0xf, 0xf1, 0x11,
    0x11, 0x10, 0xff, 0xff, 0xff, 0xff, 0x5f, 0xf4,
    0x44, 0x44, 0x41, 0xff, 0x0, 0x0, 0x0, 0xd,
    0xfa, 0x65, 0x55, 0x54, 0x3b, 0xff, 0xff, 0xff,
    0xb0,

    /* U+0046 "F" */
    0x3c, 0xff, 0xff, 0xff, 0xbd, 0xf9, 0x65, 0x55,
    0x54, 0xff, 0x0, 0x0, 0x0, 0xf, 0xf1, 0x11,
    0x11, 0x10, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xf4,
    0x44, 0x44, 0x43, 0xff, 0x0, 0x0, 0x0, 0xf,
    0xf0, 0x0, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0,
    0x0,

    /* U+0047 "G" */
    0x3b, 0xff, 0xff, 0xff, 0xe0, 0xdf, 0x95, 0x55,
    0x55, 0x40, 0xef, 0x0, 0x0, 0x0, 0x0, 0xff,
    0x0, 0x0, 0x0, 0x0, 0xff, 0x0, 0x0, 0x5,
    0xf9, 0xff, 0x0, 0x0, 0x5, 0xf9, 0xef, 0x0,
    0x0, 0x5, 0xf9, 0xdf, 0x95, 0x55, 0x6c, 0xf6,
    0x3b, 0xef, 0xff, 0xfe, 0x80,

    /* U+0048 "H" */
    0xff, 0x0, 0x0, 0x2, 0xfc, 0xff, 0x0, 0x0,
    0x2, 0xfc, 0xff, 0x0, 0x0, 0x2, 0xfc, 0xff,
    0x11, 0x11, 0x13, 0xfc, 0xff, 0xff, 0xff, 0xff,
    0xfc, 0xff, 0x44, 0x44, 0x45, 0xfc, 0xff, 0x0,
    0x0, 0x2, 0xfc, 0xff, 0x0, 0x0, 0x2, 0xfc,
    0xff, 0x0, 0x0, 0x2, 0xfc,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff,

    /* U+004A "J" */
    0x0, 0x5f, 0xa0, 0x5, 0xfa, 0x0, 0x5f, 0xa0,
    0x5, 0xfa, 0x0, 0x5f, 0xa0, 0x5, 0xfa, 0x0,
    0x5f, 0x94, 0x6c, 0xf8, 0xcf, 0xe9, 0x0,

    /* U+004B "K" */
    0xff, 0x0, 0x0, 0xaf, 0xa0, 0xff, 0x0, 0x1b,
    0xf8, 0x0, 0xff, 0x1, 0xdf, 0x60, 0x0, 0xff,
    0x3e, 0xf4, 0x0, 0x0, 0xff, 0xcf, 0x70, 0x0,
    0x0, 0xff, 0x2d, 0xf6, 0x0, 0x0, 0xff, 0x1,
    0xcf, 0x80, 0x0, 0xff, 0x0, 0xa, 0xfa, 0x0,
    0xff, 0x0, 0x0, 0x8f, 0xb0,

    /* U+004C "L" */
    0xff, 0x0, 0x0, 0x0, 0xf, 0xf0, 0x0, 0x0,
    0x0, 0xff, 0x0, 0x0, 0x0, 0xf, 0xf0, 0x0,
    0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0xf, 0xf0,
    0x0, 0x0, 0x0, 0xef, 0x0, 0x0, 0x0, 0xc,
    0xfa, 0x55, 0x55, 0x54, 0x2b, 0xef, 0xff, 0xff,
    0xb0,

    /* U+004D "M" */
    0x8f, 0xc1, 0x0, 0x0, 0x0, 0x7e, 0xd2, 0xef,
    0xfb, 0x0, 0x0, 0x3, 0xff, 0xf6, 0xfe, 0xcf,
    0x30, 0x0, 0xb, 0xfa, 0xf6, 0xfe, 0x3f, 0xc0,
    0x0, 0x4f, 0xb7, 0xf6, 0xfe, 0xa, 0xf4, 0x0,
    0xdf, 0x27, 0xf6, 0xfe, 0x1, 0xfc, 0x5, 0xf9,
    0x7, 0xf6, 0xfe, 0x0, 0x8f, 0x5d, 0xe1, 0x7,
    0xf6, 0xfe, 0x0, 0xe, 0xff, 0x70, 0x7, 0xf6,
    0xfe, 0x0, 0x4, 0xfb, 0x0, 0x7, 0xf6,

    /* U+004E "N" */
    0x9f, 0xc1, 0x0, 0x3, 0xfa, 0xef, 0xfb, 0x0,
    0x3, 0xfa, 0xfe, 0x8f, 0x60, 0x3, 0xfa, 0xfe,
    0xc, 0xf2, 0x3, 0xfa, 0xfe, 0x2, 0xfd, 0x3,
    0xfa, 0xfe, 0x0, 0x5f, 0x93, 0xfa, 0xfe, 0x0,
    0xa, 0xf7, 0xfa, 0xfe, 0x0, 0x0, 0xdf, 0xfa,
    0xfe, 0x0, 0x0, 0x3e, 0xe5,

    /* U+004F "O" */
    0x2b, 0xef, 0xff, 0xfd, 0x70, 0xcf, 0x95, 0x55,
    0x6e, 0xf4, 0xef, 0x0, 0x0, 0x8, 0xf6, 0xff,
    0x0, 0x0, 0x8, 0xf6, 0xff, 0x0, 0x0, 0x8,
    0xf6, 0xff, 0x0, 0x0, 0x8, 0xf6, 0xef, 0x0,
    0x0, 0x8, 0xf6, 0xcf, 0xa6, 0x55, 0x7e, 0xf4,
    0x2b, 0xef, 0xff, 0xfd, 0x70,

    /* U+0050 "P" */
    0xff, 0xff, 0xff, 0xfe, 0xa1, 0xff, 0x55, 0x55,
    0x6b, 0xf8, 0xff, 0x0, 0x0, 0x5, 0xf9, 0xff,
    0x11, 0x11, 0x29, 0xf9, 0xff, 0xff, 0xff, 0xff,
    0xe3, 0xff, 0x44, 0x44, 0x43, 0x0, 0xff, 0x0,
    0x0, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0,
    0xff, 0x0, 0x0, 0x0, 0x0,

    /* U+0051 "Q" */
    0x2c, 0xff, 0xff, 0xfe, 0x80, 0xcf, 0xa6, 0x55,
    0x6d, 0xf6, 0xef, 0x0, 0x0, 0x7, 0xf8, 0xff,
    0x0, 0x0, 0x6, 0xf8, 0xff, 0x0, 0x0, 0x6,
    0xf8, 0xff, 0x0, 0x0, 0x6, 0xf8, 0xff, 0x0,
    0x0, 0x6, 0xf8, 0xdf, 0x95, 0x55, 0x6d, 0xf6,
    0x3c, 0xff, 0xff, 0xff, 0x90, 0x0, 0x0, 0x7,
    0xfe, 0x40, 0x0, 0x0, 0x0, 0x48, 0x71,

    /* U+0052 "R" */
    0xff, 0xff, 0xff, 0xfe, 0xa0, 0xff, 0x55, 0x55,
    0x6d, 0xf7, 0xff, 0x0, 0x0, 0x6, 0xf9, 0xff,
    0x0, 0x0, 0x9, 0xf8, 0xff, 0xaf, 0xff, 0xff,
    0xc1, 0xff, 0x6f, 0xe4, 0x21, 0x0, 0xff, 0x3,
    0xef, 0x50, 0x0, 0xff, 0x0, 0x1b, 0xf9, 0x0,
    0xff, 0x0, 0x0, 0x8f, 0xc2,

    /* U+0053 "S" */
    0x5, 0xdf, 0xff, 0xff, 0xf6, 0x1f, 0xf7, 0x55,
    0x55, 0x52, 0x4f, 0xb0, 0x0, 0x0, 0x0, 0x3f,
    0xe3, 0x11, 0x0, 0x0, 0xa, 0xff, 0xff, 0xff,
    0x90, 0x0, 0x13, 0x44, 0x5d, 0xf4, 0x0, 0x0,
    0x0, 0x9, 0xf5, 0x15, 0x55, 0x55, 0x7e, 0xf4,
    0x3f, 0xff, 0xff, 0xfd, 0x70,

    /* U+0054 "T" */
    0xef, 0xff, 0xff, 0xff, 0xb5, 0x55, 0xbf, 0x95,
    0x53, 0x0, 0x9, 0xf5, 0x0, 0x0, 0x0, 0x9f,
    0x50, 0x0, 0x0, 0x9, 0xf5, 0x0, 0x0, 0x0,
    0x9f, 0x50, 0x0, 0x0, 0x9, 0xf5, 0x0, 0x0,
    0x0, 0x9f, 0x50, 0x0, 0x0, 0x9, 0xf5, 0x0,
    0x0,

    /* U+0055 "U" */
    0xff, 0x0, 0x0, 0x4, 0xfa, 0xff, 0x0, 0x0,
    0x4, 0xfa, 0xff, 0x0, 0x0, 0x4, 0xfa, 0xff,
    0x0, 0x0, 0x4, 0xfa, 0xff, 0x0, 0x0, 0x4,
    0xfa, 0xff, 0x0, 0x0, 0x4, 0xfa, 0xef, 0x0,
    0x0, 0x4, 0xfa, 0xdf, 0xa6, 0x55, 0x6c, 0xf8,
    0x2b, 0xff, 0xff, 0xff, 0x90,

    /* U+0056 "V" */
    0xe, 0xf2, 0x0, 0x0, 0x0, 0xdf, 0x30, 0x5f,
    0xa0, 0x0, 0x0, 0x6f, 0xa0, 0x0, 0xdf, 0x30,
    0x0, 0xe, 0xf2, 0x0, 0x4, 0xfb, 0x0, 0x7,
    0xf8, 0x0, 0x0, 0xb, 0xf3, 0x0, 0xef, 0x10,
    0x0, 0x0, 0x3f, 0xb0, 0x7f, 0x70, 0x0, 0x0,
    0x0, 0xaf, 0x5f, 0xe0, 0x0, 0x0, 0x0, 0x2,
    0xff, 0xf6, 0x0, 0x0, 0x0, 0x0, 0x7, 0xea,
    0x0, 0x0, 0x0,

    /* U+0057 "W" */
    0x9f, 0x40, 0x0, 0x5e, 0xc1, 0x0, 0xa, 0xf4,
    0x4f, 0x90, 0x0, 0xdf, 0xf7, 0x0, 0xf, 0xe0,
    0xe, 0xe0, 0x2, 0xfa, 0xfc, 0x0, 0x4f, 0x90,
    0x9, 0xf4, 0x7, 0xf4, 0xaf, 0x10, 0xaf, 0x40,
    0x4, 0xf9, 0xc, 0xf0, 0x6f, 0x60, 0xfe, 0x0,
    0x0, 0xee, 0x1f, 0xb0, 0x1f, 0xb5, 0xf9, 0x0,
    0x0, 0xaf, 0xaf, 0x60, 0xc, 0xfb, 0xf4, 0x0,
    0x0, 0x4f, 0xff, 0x10, 0x7, 0xff, 0xe0, 0x0,
    0x0, 0xa, 0xf8, 0x0, 0x1, 0xce, 0x60, 0x0,

    /* U+0058 "X" */
    0x5f, 0xd1, 0x0, 0x1, 0xdf, 0x50, 0x6, 0xfd,
    0x10, 0x1d, 0xf6, 0x0, 0x0, 0x6f, 0xc1, 0xcf,
    0x60, 0x0, 0x0, 0x7, 0xff, 0xf7, 0x0, 0x0,
    0x0, 0x0, 0xcf, 0xd0, 0x0, 0x0, 0x0, 0x9,
    0xfe, 0xf9, 0x0, 0x0, 0x0, 0x9f, 0xa0, 0xbf,
    0x90, 0x0, 0x8, 0xfb, 0x0, 0xb, 0xf8, 0x0,
    0x8f, 0xb0, 0x0, 0x0, 0xbf, 0x80,

    /* U+0059 "Y" */
    0xb, 0xf7, 0x0, 0x0, 0x1d, 0xf4, 0x1, 0xdf,
    0x40, 0x0, 0xcf, 0x70, 0x0, 0x2e, 0xe2, 0x9,
    0xf9, 0x0, 0x0, 0x4, 0xfd, 0x7f, 0xb0, 0x0,
    0x0, 0x0, 0x6f, 0xfd, 0x10, 0x0, 0x0, 0x0,
    0xc, 0xf4, 0x0, 0x0, 0x0, 0x0, 0xb, 0xf3,
    0x0, 0x0, 0x0, 0x0, 0xb, 0xf3, 0x0, 0x0,
    0x0, 0x0, 0xb, 0xf3, 0x0, 0x0,

    /* U+005A "Z" */
    0x4f, 0xff, 0xff, 0xff, 0xf5, 0x15, 0x55, 0x55,
    0x8f, 0xf3, 0x0, 0x0, 0x2, 0xef, 0x30, 0x0,
    0x0, 0x3e, 0xe3, 0x0, 0x0, 0x3, 0xee, 0x30,
    0x0, 0x0, 0x3e, 0xe3, 0x0, 0x0, 0x3, 0xee,
    0x20, 0x0, 0x0, 0x2f, 0xf8, 0x55, 0x55, 0x51,
    0x4e, 0xff, 0xff, 0xff, 0xf4,

    /* U+005B "[" */
    0x7e, 0xe5, 0x8f, 0x50, 0x8f, 0x30, 0x8f, 0x30,
    0x8f, 0x30, 0x8f, 0x30, 0x8f, 0x30, 0x8f, 0x30,
    0x8f, 0x30, 0x8f, 0x30, 0x8f, 0x30, 0x8f, 0x30,
    0x8f, 0xf5, 0x1, 0x10,

    /* U+005C "\\" */
    0x9e, 0x0, 0x0, 0x0, 0xd, 0xa0, 0x0, 0x0,
    0x3, 0xf5, 0x0, 0x0, 0x0, 0x8e, 0x10, 0x0,
    0x0, 0xc, 0xb0, 0x0, 0x0, 0x2, 0xf6, 0x0,
    0x0, 0x0, 0x6f, 0x20, 0x0, 0x0, 0xb, 0xc0,
    0x0, 0x0, 0x1, 0xe7,

    /* U+005D "]" */
    0xe, 0xeb, 0x1, 0xfc, 0x0, 0xfc, 0x0, 0xfc,
    0x0, 0xfc, 0x0, 0xfc, 0x0, 0xfc, 0x0, 0xfc,
    0x0, 0xfc, 0x0, 0xfc, 0x0, 0xfc, 0x0, 0xfc,
    0xf, 0xfc, 0x2, 0x21,

    /* U+005E "^" */
    0x0, 0x48, 0x30, 0x0, 0x4d, 0x5d, 0x20, 0x2d,
    0x20, 0x4d, 0x10,

    /* U+005F "_" */
    0xef, 0xff, 0xff, 0xff, 0xff, 0x1, 0x22, 0x22,
    0x22, 0x22, 0x20,

    /* U+0060 "`" */
    0x95, 0x3, 0xd0,

    /* U+0061 "a" */
    0xef, 0xff, 0xff, 0xe9, 0x2, 0x33, 0x33, 0x39,
    0xf5, 0x3c, 0xff, 0xff, 0xff, 0x6d, 0xe4, 0x22,
    0x27, 0xf6, 0xfc, 0x0, 0x0, 0x5f, 0x6d, 0xf5,
    0x33, 0x3a, 0xf5, 0x4c, 0xff, 0xff, 0xf9, 0x0,

    /* U+0062 "b" */
    0xfc, 0x0, 0x0, 0x0, 0xf, 0xc0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xff, 0xe9, 0xf, 0xd3, 0x33,
    0x39, 0xf6, 0xfc, 0x0, 0x0, 0x4f, 0x7f, 0xc0,
    0x0, 0x4, 0xf7, 0xfc, 0x0, 0x0, 0x4f, 0x7d,
    0xf5, 0x33, 0x39, 0xf6, 0x3c, 0xff, 0xff, 0xfa,
    0x0,

    /* U+0063 "c" */
    0x5d, 0xff, 0xff, 0xbe, 0xe4, 0x33, 0x32, 0xfc,
    0x0, 0x0, 0xf, 0xc0, 0x0, 0x0, 0xfc, 0x0,
    0x0, 0xd, 0xf5, 0x33, 0x32, 0x4d, 0xff, 0xff,
    0xc0,

    /* U+0064 "d" */
    0x0, 0x0, 0x0, 0x4f, 0x70, 0x0, 0x0, 0x4,
    0xf7, 0x4c, 0xff, 0xff, 0xff, 0x7d, 0xf5, 0x33,
    0x37, 0xf7, 0xfc, 0x0, 0x0, 0x4f, 0x7f, 0xc0,
    0x0, 0x4, 0xf7, 0xfc, 0x0, 0x0, 0x4f, 0x7d,
    0xf5, 0x33, 0x3a, 0xf6, 0x4d, 0xff, 0xff, 0xe9,
    0x0,

    /* U+0065 "e" */
    0x4d, 0xff, 0xff, 0xe9, 0xd, 0xf4, 0x22, 0x3a,
    0xf4, 0xfc, 0x0, 0x59, 0xef, 0x4f, 0xeb, 0xfd,
    0x94, 0x0, 0xfe, 0x62, 0x0, 0x0, 0xd, 0xf4,
    0x33, 0x33, 0x31, 0x3c, 0xff, 0xff, 0xff, 0x50,

    /* U+0066 "f" */
    0x4c, 0xff, 0xee, 0x31, 0xff, 0xff, 0xfd, 0x32,
    0xfc, 0x0, 0xfc, 0x0, 0xfc, 0x0, 0xfc, 0x0,
    0xfc, 0x0,

    /* U+0067 "g" */
    0x4d, 0xff, 0xff, 0xea, 0xd, 0xf5, 0x33, 0x4a,
    0xf5, 0xec, 0x0, 0x0, 0x4f, 0x7e, 0xc0, 0x0,
    0x4, 0xf7, 0xec, 0x0, 0x0, 0x4f, 0x7d, 0xf5,
    0x33, 0x37, 0xf7, 0x4c, 0xff, 0xff, 0xff, 0x70,
    0x0, 0x0, 0x5, 0xf7, 0x34, 0x44, 0x44, 0xbf,
    0x5f, 0xff, 0xff, 0xfe, 0x80,

    /* U+0068 "h" */
    0xfc, 0x0, 0x0, 0x0, 0xf, 0xc0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xff, 0xe7, 0xf, 0xe7, 0x77,
    0x8e, 0xf3, 0xfc, 0x0, 0x0, 0x6f, 0x5f, 0xc0,
    0x0, 0x5, 0xf5, 0xfc, 0x0, 0x0, 0x5f, 0x5f,
    0xc0, 0x0, 0x5, 0xf5, 0xfc, 0x0, 0x0, 0x5f,
    0x50,

    /* U+0069 "i" */
    0x2f, 0x80, 0x31, 0x3f, 0x83, 0xf8, 0x3f, 0x83,
    0xf8, 0x3f, 0x83, 0xf8, 0x3f, 0x80,

    /* U+006A "j" */
    0x0, 0xd, 0xc0, 0x0, 0x32, 0x0, 0xf, 0xc0,
    0x0, 0xfc, 0x0, 0xf, 0xc0, 0x0, 0xfc, 0x0,
    0xf, 0xc0, 0x0, 0xfc, 0x0, 0xf, 0xc0, 0x0,
    0xfc, 0x3, 0x7f, 0xa2, 0xff, 0xb2,

    /* U+006B "k" */
    0xfc, 0x0, 0x0, 0x0, 0xfc, 0x0, 0x0, 0x0,
    0xfc, 0x0, 0x1c, 0xe3, 0xfc, 0x3, 0xed, 0x20,
    0xfc, 0x5f, 0xb1, 0x0, 0xfd, 0xfe, 0x10, 0x0,
    0xfc, 0x3e, 0xd2, 0x0, 0xfc, 0x1, 0xde, 0x30,
    0xfc, 0x0, 0xb, 0xf6,

    /* U+006C "l" */
    0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc,
    0xfc,

    /* U+006D "m" */
    0x3c, 0xff, 0xfa, 0x6d, 0xff, 0xd5, 0xc, 0xf9,
    0x79, 0xff, 0xb7, 0x8f, 0xf1, 0xec, 0x0, 0xc,
    0xf0, 0x0, 0x8f, 0x3f, 0xc0, 0x0, 0xbf, 0x0,
    0x8, 0xf3, 0xfc, 0x0, 0xb, 0xf0, 0x0, 0x8f,
    0x3f, 0xc0, 0x0, 0xbf, 0x0, 0x8, 0xf3, 0xfc,
    0x0, 0xb, 0xf0, 0x0, 0x8f, 0x30,

    /* U+006E "n" */
    0x8, 0xef, 0xff, 0xfc, 0x33, 0xfe, 0x87, 0x7a,
    0xfc, 0x5f, 0x60, 0x0, 0xd, 0xd5, 0xf5, 0x0,
    0x0, 0xde, 0x5f, 0x50, 0x0, 0xd, 0xe5, 0xf5,
    0x0, 0x0, 0xde, 0x5f, 0x50, 0x0, 0xd, 0xe0,

    /* U+006F "o" */
    0x6, 0xef, 0xff, 0xfe, 0x70, 0x1f, 0xd3, 0x22,
    0x3c, 0xf1, 0x2f, 0x90, 0x0, 0x8, 0xf3, 0x2f,
    0x90, 0x0, 0x8, 0xf3, 0x2f, 0x90, 0x0, 0x8,
    0xf3, 0x1f, 0xd4, 0x33, 0x3c, 0xf1, 0x7, 0xef,
    0xff, 0xfe, 0x70,

    /* U+0070 "p" */
    0x4d, 0xff, 0xff, 0xe9, 0xd, 0xf5, 0x33, 0x3a,
    0xf4, 0xfc, 0x0, 0x0, 0x5f, 0x6f, 0xc0, 0x0,
    0x5, 0xf6, 0xfc, 0x0, 0x0, 0x5f, 0x6f, 0xd3,
    0x33, 0x3a, 0xf4, 0xff, 0xff, 0xff, 0xe8, 0xf,
    0xc0, 0x0, 0x0, 0x0, 0xfc, 0x0, 0x0, 0x0,
    0xf, 0xc0, 0x0, 0x0, 0x0,

    /* U+0071 "q" */
    0x4d, 0xff, 0xff, 0xe9, 0xd, 0xe4, 0x33, 0x3a,
    0xf4, 0xfc, 0x0, 0x0, 0x5f, 0x6f, 0xc0, 0x0,
    0x5, 0xf6, 0xfc, 0x0, 0x0, 0x5f, 0x6d, 0xe4,
    0x22, 0x27, 0xf6, 0x4d, 0xff, 0xff, 0xff, 0x60,
    0x0, 0x0, 0x5, 0xf6, 0x0, 0x0, 0x0, 0x5f,
    0x60, 0x0, 0x0, 0x5, 0xf6,

    /* U+0072 "r" */
    0x9, 0xef, 0xf5, 0x5f, 0xb3, 0x31, 0x6f, 0x50,
    0x0, 0x6f, 0x50, 0x0, 0x6f, 0x50, 0x0, 0x6f,
    0x50, 0x0, 0x6f, 0x50, 0x0,

    /* U+0073 "s" */
    0x8, 0xef, 0xff, 0xff, 0x52, 0xfb, 0x33, 0x33,
    0x31, 0x3f, 0xa0, 0x0, 0x0, 0x0, 0xaf, 0xff,
    0xff, 0xa0, 0x0, 0x12, 0x33, 0xaf, 0x40, 0x33,
    0x33, 0x3a, 0xf4, 0x4f, 0xff, 0xff, 0xf9, 0x0,

    /* U+0074 "t" */
    0xfc, 0x0, 0xfc, 0x0, 0xff, 0xff, 0xfd, 0x22,
    0xfc, 0x0, 0xfc, 0x0, 0xfc, 0x0, 0xfc, 0x0,
    0xfc, 0x0,

    /* U+0075 "u" */
    0xfc, 0x0, 0x0, 0x5f, 0x6f, 0xc0, 0x0, 0x5,
    0xf6, 0xfc, 0x0, 0x0, 0x5f, 0x6f, 0xc0, 0x0,
    0x5, 0xf6, 0xed, 0x0, 0x0, 0x5f, 0x6c, 0xfa,
    0x88, 0x8e, 0xf4, 0x3c, 0xff, 0xff, 0xe8, 0x0,

    /* U+0076 "v" */
    0xc, 0xe0, 0x0, 0x0, 0x2f, 0xa0, 0x3f, 0x80,
    0x0, 0xb, 0xf1, 0x0, 0x9f, 0x20, 0x5, 0xf7,
    0x0, 0x1, 0xec, 0x0, 0xed, 0x0, 0x0, 0x6,
    0xf5, 0x8f, 0x30, 0x0, 0x0, 0xc, 0xef, 0xa0,
    0x0, 0x0, 0x0, 0x2e, 0xd1, 0x0, 0x0,

    /* U+0077 "w" */
    0x8f, 0x20, 0x4, 0xe9, 0x0, 0xb, 0xe0, 0x3f,
    0x70, 0xb, 0xff, 0x20, 0x1f, 0x90, 0xd, 0xd0,
    0x1f, 0x7f, 0x80, 0x7f, 0x40, 0x8, 0xf3, 0x7f,
    0x1b, 0xd0, 0xce, 0x0, 0x2, 0xf8, 0xcb, 0x5,
    0xf5, 0xf8, 0x0, 0x0, 0xcf, 0xf6, 0x0, 0xff,
    0xf3, 0x0, 0x0, 0x4e, 0xc0, 0x0, 0x7e, 0x90,
    0x0,

    /* U+0078 "x" */
    0x4f, 0xc0, 0x0, 0xaf, 0x50, 0x4, 0xfc, 0x1a,
    0xf5, 0x0, 0x0, 0x4f, 0xff, 0x60, 0x0, 0x0,
    0xa, 0xfc, 0x0, 0x0, 0x0, 0x7f, 0xcf, 0x90,
    0x0, 0x7, 0xf9, 0x8, 0xf9, 0x0, 0x6f, 0x90,
    0x0, 0x8f, 0x90,

    /* U+0079 "y" */
    0xec, 0x0, 0x0, 0x5f, 0x6e, 0xc0, 0x0, 0x5,
    0xf6, 0xec, 0x0, 0x0, 0x5f, 0x6e, 0xc0, 0x0,
    0x5, 0xf6, 0xed, 0x0, 0x0, 0x5f, 0x6b, 0xfa,
    0x88, 0x8b, 0xf6, 0x2b, 0xff, 0xff, 0xef, 0x60,
    0x0, 0x0, 0x6, 0xf5, 0x48, 0x88, 0x89, 0xef,
    0x29, 0xff, 0xff, 0xfe, 0x60,

    /* U+007A "z" */
    0x5f, 0xff, 0xff, 0xff, 0xe2, 0x13, 0x33, 0x33,
    0xbf, 0xc0, 0x0, 0x0, 0x2c, 0xf7, 0x0, 0x0,
    0x6, 0xfd, 0x30, 0x0, 0x0, 0xaf, 0x90, 0x0,
    0x0, 0x2e, 0xf8, 0x33, 0x33, 0x30, 0x4e, 0xff,
    0xff, 0xff, 0xf0,

    /* U+007B "{" */
    0x0, 0x9d, 0xf2, 0x5, 0xf9, 0x20, 0x7, 0xf3,
    0x0, 0x7, 0xf3, 0x0, 0x7, 0xf3, 0x0, 0xb,
    0xf2, 0x0, 0x9f, 0x70, 0x0, 0x1c, 0xf1, 0x0,
    0x7, 0xf3, 0x0, 0x7, 0xf3, 0x0, 0x7, 0xf3,
    0x0, 0x6, 0xf7, 0x0, 0x1, 0xcf, 0xf2, 0x0,
    0x0, 0x20,

    /* U+007C "|" */
    0x11, 0xed, 0xed, 0xed, 0xed, 0xed, 0xed, 0xed,
    0xed, 0xed, 0xed, 0xed,

    /* U+007D "}" */
    0x9e, 0xc4, 0x0, 0x13, 0xee, 0x0, 0x0, 0xaf,
    0x0, 0x0, 0xaf, 0x0, 0x0, 0xaf, 0x0, 0x0,
    0x9f, 0x40, 0x0, 0x1d, 0xf2, 0x0, 0x7f, 0x80,
    0x0, 0xaf, 0x0, 0x0, 0xaf, 0x0, 0x0, 0xaf,
    0x0, 0x1, 0xdf, 0x0, 0x9f, 0xf7, 0x0, 0x11,
    0x0, 0x0,

    /* U+007E "~" */
    0x1, 0x9e, 0xfd, 0x94, 0x10, 0x5d, 0x20, 0xcc,
    0x43, 0x7b, 0xff, 0xfe, 0x60, 0x1, 0x0, 0x0,
    0x0, 0x21, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 94, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 79, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 90, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 18, .adv_w = 205, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 163, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 132, .adv_w = 284, .box_w = 17, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 193, .box_w = 13, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 56, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 271, .adv_w = 88, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 297, .adv_w = 87, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 330, .adv_w = 126, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 354, .adv_w = 160, .box_w = 10, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 384, .adv_w = 51, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 389, .adv_w = 86, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 392, .adv_w = 53, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 156, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 187, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 485, .adv_w = 129, .box_w = 5, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 508, .adv_w = 187, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 553, .adv_w = 183, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 594, .adv_w = 185, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 639, .adv_w = 187, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 684, .adv_w = 187, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 729, .adv_w = 187, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 774, .adv_w = 191, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 819, .adv_w = 191, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 864, .adv_w = 56, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 873, .adv_w = 54, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 884, .adv_w = 160, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 919, .adv_w = 160, .box_w = 10, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 939, .adv_w = 160, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 979, .adv_w = 164, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1024, .adv_w = 234, .box_w = 14, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1087, .adv_w = 187, .box_w = 13, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1146, .adv_w = 187, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1191, .adv_w = 175, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1232, .adv_w = 188, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1277, .adv_w = 179, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1318, .adv_w = 178, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1359, .adv_w = 186, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1404, .adv_w = 189, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1449, .adv_w = 65, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1458, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1481, .adv_w = 165, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1526, .adv_w = 158, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1567, .adv_w = 248, .box_w = 14, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1630, .adv_w = 188, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1675, .adv_w = 184, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1720, .adv_w = 186, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1765, .adv_w = 186, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1820, .adv_w = 182, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1865, .adv_w = 170, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1910, .adv_w = 141, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1951, .adv_w = 188, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1996, .adv_w = 180, .box_w = 13, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2055, .adv_w = 250, .box_w = 16, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2127, .adv_w = 176, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2181, .adv_w = 168, .box_w = 12, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2235, .adv_w = 161, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2280, .adv_w = 86, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2308, .adv_w = 143, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2344, .adv_w = 86, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2372, .adv_w = 114, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 2383, .adv_w = 160, .box_w = 11, .box_h = 2, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2394, .adv_w = 99, .box_w = 3, .box_h = 2, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 2397, .adv_w = 167, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2429, .adv_w = 169, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2470, .adv_w = 134, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2495, .adv_w = 169, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2536, .adv_w = 162, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2568, .adv_w = 96, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2586, .adv_w = 168, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2631, .adv_w = 167, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2672, .adv_w = 62, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2686, .adv_w = 61, .box_w = 5, .box_h = 12, .ofs_x = -2, .ofs_y = -3},
    {.bitmap_index = 2716, .adv_w = 145, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2752, .adv_w = 61, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2761, .adv_w = 228, .box_w = 13, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2807, .adv_w = 158, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2839, .adv_w = 165, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2874, .adv_w = 167, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2919, .adv_w = 167, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2964, .adv_w = 98, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2985, .adv_w = 149, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3017, .adv_w = 94, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3035, .adv_w = 167, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3067, .adv_w = 157, .box_w = 11, .box_h = 7, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 3106, .adv_w = 215, .box_w = 14, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3155, .adv_w = 146, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3190, .adv_w = 167, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3235, .adv_w = 157, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3270, .adv_w = 89, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3312, .adv_w = 160, .box_w = 2, .box_h = 12, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 3324, .adv_w = 89, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3366, .adv_w = 213, .box_w = 13, .box_h = 3, .ofs_x = 0, .ofs_y = 2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    14, 53,
    14, 55,
    14, 56,
    14, 57,
    14, 58,
    34, 14,
    34, 53,
    34, 55,
    34, 56,
    34, 58,
    34, 85,
    34, 87,
    34, 88,
    34, 90,
    36, 14,
    37, 13,
    37, 15,
    39, 13,
    39, 15,
    39, 34,
    39, 66,
    45, 53,
    45, 55,
    45, 56,
    45, 58,
    45, 87,
    45, 88,
    45, 90,
    48, 13,
    49, 13,
    49, 14,
    49, 15,
    49, 34,
    49, 66,
    49, 68,
    49, 69,
    49, 70,
    49, 72,
    49, 80,
    51, 14,
    51, 68,
    51, 69,
    51, 70,
    51, 80,
    51, 82,
    53, 13,
    53, 14,
    53, 15,
    53, 34,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 72,
    53, 78,
    53, 79,
    53, 80,
    53, 81,
    53, 82,
    53, 83,
    53, 84,
    53, 86,
    53, 87,
    53, 88,
    53, 89,
    53, 90,
    53, 91,
    55, 14,
    55, 15,
    55, 34,
    55, 66,
    55, 68,
    55, 69,
    55, 70,
    55, 72,
    55, 78,
    55, 79,
    55, 80,
    55, 81,
    55, 82,
    55, 83,
    55, 84,
    55, 86,
    56, 14,
    56, 15,
    56, 34,
    56, 66,
    56, 68,
    56, 69,
    56, 70,
    56, 80,
    56, 82,
    57, 14,
    57, 70,
    57, 80,
    57, 82,
    57, 90,
    58, 14,
    58, 34,
    58, 66,
    58, 68,
    58, 69,
    58, 70,
    58, 72,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 86,
    71, 13,
    71, 14,
    71, 15,
    76, 14,
    83, 13,
    83, 14,
    83, 15,
    85, 13,
    85, 14,
    85, 15,
    87, 13,
    87, 15,
    88, 13,
    88, 15,
    89, 14,
    90, 13,
    90, 15
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -32, -16, -10, -6, -19, -6, -16, -13,
    -6, -16, -6, -10, -6, -10, -6, -10,
    -10, -16, -16, -10, -6, -19, -19, -16,
    -19, -6, -6, -6, -10, -32, -6, -32,
    -10, -6, -6, -6, -6, -3, -6, -13,
    -6, -6, -6, -6, -6, -29, -32, -29,
    -16, -26, -26, -26, -26, -26, -19, -19,
    -26, -19, -26, -19, -26, -19, -26, -26,
    -19, -22, -19, -16, -26, -13, -13, -13,
    -13, -13, -13, -6, -6, -13, -6, -13,
    -6, -10, -6, -6, -16, -3, -6, -6,
    -6, -6, -6, -6, -6, -6, -6, -6,
    -10, -19, -16, -19, -13, -13, -13, -13,
    -6, -6, -13, -6, -13, -6, -10, -6,
    -13, -13, -13, -13, -19, -10, -19, 6,
    -10, 6, -16, -16, -10, -10, -13, -16,
    -16
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 129,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_sony20 = {
#else
lv_font_t ui_font_sony20 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_SONY20*/

