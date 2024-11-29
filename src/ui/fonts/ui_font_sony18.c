/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: --bpp 1 --size 18 --font /Users/felix/SquareLine/assets/Sony_Sketch_EF.ttf -o /Users/felix/SquareLine/assets/ui_font_sony18.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_SONY18
#define UI_FONT_SONY18 1
#endif

#if UI_FONT_SONY18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xfc, 0xc0,

    /* U+0022 "\"" */
    0xb4,

    /* U+0023 "#" */
    0x11, 0x4, 0xcf, 0xfc, 0xc8, 0x32, 0x3f, 0xe6,
    0x61, 0x98, 0x66, 0x0,

    /* U+0024 "$" */
    0x10, 0x7f, 0xd0, 0xd0, 0xd0, 0x7e, 0x13, 0x13,
    0x13, 0xfe, 0x10,

    /* U+0025 "%" */
    0xfc, 0x21, 0x98, 0xc3, 0x33, 0x6, 0x67, 0xff,
    0xd6, 0x60, 0x4c, 0xc1, 0x99, 0x86, 0x33, 0x8,
    0x7e,

    /* U+0026 "&" */
    0x3c, 0x19, 0x86, 0x61, 0xb8, 0x38, 0x3e, 0x6c,
    0x7b, 0xe, 0x7f, 0x80,

    /* U+0027 "'" */
    0xc0,

    /* U+0028 "(" */
    0x7b, 0x6d, 0xb6, 0xdb, 0x66,

    /* U+0029 ")" */
    0xcd, 0xb6, 0xdb, 0x6d, 0xbc,

    /* U+002A "*" */
    0x21, 0x3e, 0xc5, 0x0,

    /* U+002B "+" */
    0x18, 0x18, 0xff, 0x18, 0x18,

    /* U+002C "," */
    0xe0,

    /* U+002D "-" */
    0xf8,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x3, 0x2, 0x4, 0xc, 0x8, 0x10, 0x30, 0x20,
    0x40,

    /* U+0030 "0" */
    0x7f, 0x60, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0x7f, 0x0,

    /* U+0031 "1" */
    0xf3, 0x33, 0x33, 0x33, 0x30,

    /* U+0032 "2" */
    0xfe, 0x3, 0x3, 0x3, 0x7e, 0xc0, 0xc0, 0xc0,
    0xff,

    /* U+0033 "3" */
    0xfe, 0x3, 0x3, 0x3, 0x1e, 0x3, 0x3, 0x3,
    0xfe,

    /* U+0034 "4" */
    0x1b, 0x33, 0x63, 0x63, 0xc3, 0xff, 0x3, 0x3,
    0x3,

    /* U+0035 "5" */
    0xff, 0xc0, 0xc0, 0xfe, 0x3, 0x3, 0x3, 0x3,
    0xfe,

    /* U+0036 "6" */
    0x7f, 0xe0, 0x30, 0x1f, 0xec, 0x1e, 0xf, 0x7,
    0x83, 0x7f, 0x0,

    /* U+0037 "7" */
    0xff, 0x3, 0x6, 0x6, 0xc, 0xc, 0x18, 0x10,
    0x30,

    /* U+0038 "8" */
    0x7f, 0x60, 0xf0, 0x78, 0x33, 0xe6, 0xf, 0x7,
    0x83, 0x7f, 0x0,

    /* U+0039 "9" */
    0x7f, 0x60, 0xf0, 0x78, 0x37, 0xf8, 0xc, 0x6,
    0x3, 0xff, 0x0,

    /* U+003A ":" */
    0x90,

    /* U+003B ";" */
    0xc0, 0x60,

    /* U+003C "<" */
    0x3, 0xe, 0x70, 0xe0, 0x1c, 0x7,

    /* U+003D "=" */
    0xff, 0x0, 0xff,

    /* U+003E ">" */
    0xc0, 0x78, 0xf, 0x7, 0x38, 0xc0,

    /* U+003F "?" */
    0xfe, 0x3, 0x3, 0x3, 0x3e, 0x30, 0x30, 0x0,
    0x30,

    /* U+0040 "@" */
    0x1f, 0x83, 0x6, 0x4f, 0xb9, 0x99, 0x90, 0x99,
    0x13, 0x4e, 0xe6, 0x0, 0x1f, 0xc0,

    /* U+0041 "A" */
    0xc, 0x1, 0xc0, 0x68, 0x9, 0x83, 0x30, 0x63,
    0x1f, 0xe3, 0x6, 0xc0, 0xc0,

    /* U+0042 "B" */
    0xff, 0x60, 0xf0, 0x78, 0x3f, 0xf6, 0xf, 0x7,
    0x83, 0xff, 0x0,

    /* U+0043 "C" */
    0x7f, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0x7f,

    /* U+0044 "D" */
    0xff, 0x60, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xff, 0x0,

    /* U+0045 "E" */
    0x7f, 0xc0, 0xc0, 0xc0, 0xff, 0xc0, 0xc0, 0xc0,
    0x7f,

    /* U+0046 "F" */
    0x7f, 0xc0, 0xc0, 0xc0, 0xff, 0xc0, 0xc0, 0xc0,
    0xc0,

    /* U+0047 "G" */
    0x7f, 0x60, 0x30, 0x18, 0xc, 0x1e, 0xf, 0x7,
    0x83, 0x7f, 0x0,

    /* U+0048 "H" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3f, 0xfe, 0xf, 0x7,
    0x83, 0xc1, 0x80,

    /* U+0049 "I" */
    0xff, 0xff, 0xc0,

    /* U+004A "J" */
    0x33, 0x33, 0x33, 0x33, 0xe0,

    /* U+004B "K" */
    0xc3, 0x63, 0x33, 0x1b, 0xf, 0x6, 0xc3, 0x31,
    0x8c, 0xc3, 0x0,

    /* U+004C "L" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0x7f,

    /* U+004D "M" */
    0xe0, 0x7e, 0x7, 0xf0, 0xfd, 0xb, 0xd9, 0xbc,
    0x93, 0xcf, 0x3c, 0x63, 0xc6, 0x30,

    /* U+004E "N" */
    0xe1, 0xf0, 0xfc, 0x7b, 0x3c, 0x9e, 0x6f, 0x1f,
    0x87, 0xc3, 0x80,

    /* U+004F "O" */
    0x7f, 0x60, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0x7f, 0x0,

    /* U+0050 "P" */
    0xff, 0x60, 0xf0, 0x78, 0x3f, 0xf6, 0x3, 0x1,
    0x80, 0xc0, 0x0,

    /* U+0051 "Q" */
    0x7f, 0x60, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0x7f, 0x3, 0x80, 0xe0,

    /* U+0052 "R" */
    0xff, 0x60, 0xf0, 0x78, 0x3f, 0xf7, 0xc3, 0x31,
    0x8c, 0xc3, 0x0,

    /* U+0053 "S" */
    0x7f, 0xc0, 0xc0, 0xc0, 0x7e, 0x3, 0x3, 0x3,
    0xfe,

    /* U+0054 "T" */
    0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18,

    /* U+0055 "U" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0x7f, 0x0,

    /* U+0056 "V" */
    0xc0, 0xd0, 0x36, 0x18, 0x86, 0x33, 0x4, 0xc1,
    0xe0, 0x78, 0xc, 0x0,

    /* U+0057 "W" */
    0xc3, 0xd, 0xe, 0x26, 0x79, 0x99, 0xe6, 0x24,
    0x98, 0xf3, 0x43, 0xcf, 0xf, 0x1c, 0x18, 0x60,

    /* U+0058 "X" */
    0x61, 0x9c, 0xc3, 0x30, 0x78, 0xc, 0x7, 0x83,
    0x31, 0x86, 0xe1, 0xc0,

    /* U+0059 "Y" */
    0xc0, 0xd8, 0x63, 0x30, 0x78, 0x1e, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x0,

    /* U+005A "Z" */
    0xff, 0x7, 0xe, 0xc, 0x18, 0x30, 0x60, 0xc0,
    0xff,

    /* U+005B "[" */
    0xfb, 0x6d, 0xb6, 0xdb, 0x6e,

    /* U+005C "\\" */
    0xc0, 0x80, 0x81, 0x81, 0x3, 0x2, 0x2, 0x6,

    /* U+005D "]" */
    0xed, 0xb6, 0xdb, 0x6d, 0xbe,

    /* U+005E "^" */
    0x30, 0xe4, 0x80,

    /* U+005F "_" */
    0xff, 0x80,

    /* U+0060 "`" */
    0x90,

    /* U+0061 "a" */
    0xfe, 0x3, 0x7f, 0xc3, 0xc3, 0xc3, 0x7e,

    /* U+0062 "b" */
    0xc0, 0xc0, 0xfe, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0x7e,

    /* U+0063 "c" */
    0x7f, 0xc, 0x30, 0xc3, 0x7, 0xc0,

    /* U+0064 "d" */
    0x3, 0x3, 0x7f, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0x7e,

    /* U+0065 "e" */
    0x7e, 0xc3, 0xc7, 0xfc, 0xe0, 0xc0, 0x7f,

    /* U+0066 "f" */
    0x7c, 0xfc, 0xcc, 0xcc, 0xc0,

    /* U+0067 "g" */
    0x7e, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x7f, 0x3,
    0x3, 0xfe,

    /* U+0068 "h" */
    0xc0, 0xc0, 0xfe, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3,

    /* U+0069 "i" */
    0xcf, 0xff, 0xc0,

    /* U+006A "j" */
    0x30, 0x33, 0x33, 0x33, 0x33, 0x3e,

    /* U+006B "k" */
    0xc0, 0xc0, 0xc6, 0xcc, 0xd8, 0xf0, 0xd8, 0xcc,
    0xc6,

    /* U+006C "l" */
    0xff, 0xff, 0xc0,

    /* U+006D "m" */
    0x7f, 0xb3, 0x3c, 0xcf, 0x33, 0xcc, 0xf3, 0x3c,
    0xcc,

    /* U+006E "n" */
    0x7e, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,

    /* U+006F "o" */
    0x7e, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x7e,

    /* U+0070 "p" */
    0x7e, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xfe, 0xc0,
    0xc0, 0xc0,

    /* U+0071 "q" */
    0x7e, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x7f, 0x3,
    0x3, 0x3,

    /* U+0072 "r" */
    0x7e, 0x31, 0x8c, 0x63, 0x0,

    /* U+0073 "s" */
    0x7f, 0x83, 0x3, 0xf0, 0x60, 0xff, 0x0,

    /* U+0074 "t" */
    0xcc, 0xfc, 0xcc, 0xcc, 0xc0,

    /* U+0075 "u" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x7e,

    /* U+0076 "v" */
    0xc1, 0xa0, 0x98, 0xc4, 0xc3, 0x60, 0xe0, 0x60,

    /* U+0077 "w" */
    0xc6, 0x34, 0x62, 0x6f, 0x26, 0x96, 0x29, 0x43,
    0x9c, 0x30, 0xc0,

    /* U+0078 "x" */
    0x63, 0x26, 0x3c, 0x18, 0x3c, 0x66, 0x43,

    /* U+0079 "y" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x7f, 0x3,
    0x3, 0xfe,

    /* U+007A "z" */
    0xff, 0x7, 0xe, 0x18, 0x30, 0xe0, 0xff,

    /* U+007B "{" */
    0x3b, 0x18, 0xc6, 0x33, 0xc, 0x63, 0x18, 0xc3,
    0x80,

    /* U+007C "|" */
    0xff, 0xff, 0xfc,

    /* U+007D "}" */
    0xe1, 0x8c, 0x63, 0x18, 0x66, 0x31, 0x8c, 0x6e,
    0x0,

    /* U+007E "~" */
    0x78, 0x61, 0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 85, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 71, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 81, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 5, .adv_w = 185, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 146, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 28, .adv_w = 256, .box_w = 15, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 173, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 51, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 58, .adv_w = 79, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 63, .adv_w = 78, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 68, .adv_w = 113, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 72, .adv_w = 144, .box_w = 8, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 77, .adv_w = 46, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 78, .adv_w = 77, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 79, .adv_w = 48, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 140, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 89, .adv_w = 168, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 116, .box_w = 4, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 168, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 165, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 123, .adv_w = 166, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 168, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 168, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 168, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 172, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 172, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 50, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 184, .adv_w = 48, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 144, .box_w = 8, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 192, .adv_w = 144, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 195, .adv_w = 144, .box_w = 8, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 201, .adv_w = 147, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 211, .box_w = 12, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 168, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 168, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 248, .adv_w = 157, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 170, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 161, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 160, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 168, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 170, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 58, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 311, .adv_w = 82, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 148, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 142, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 223, .box_w = 12, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 350, .adv_w = 169, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 361, .adv_w = 166, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 167, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 167, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 396, .adv_w = 164, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 407, .adv_w = 153, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 416, .adv_w = 127, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 425, .adv_w = 169, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 436, .adv_w = 162, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 448, .adv_w = 225, .box_w = 14, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 464, .adv_w = 159, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 476, .adv_w = 151, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 488, .adv_w = 145, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 497, .adv_w = 77, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 502, .adv_w = 129, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 510, .adv_w = 77, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 515, .adv_w = 103, .box_w = 6, .box_h = 3, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 518, .adv_w = 144, .box_w = 9, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 520, .adv_w = 89, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 521, .adv_w = 151, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 528, .adv_w = 152, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 537, .adv_w = 121, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 543, .adv_w = 152, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 552, .adv_w = 146, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 87, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 564, .adv_w = 151, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 574, .adv_w = 150, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 56, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 586, .adv_w = 55, .box_w = 4, .box_h = 12, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 592, .adv_w = 131, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 601, .adv_w = 55, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 604, .adv_w = 206, .box_w = 10, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 613, .adv_w = 142, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 620, .adv_w = 149, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 627, .adv_w = 151, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 637, .adv_w = 151, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 647, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 652, .adv_w = 134, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 659, .adv_w = 85, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 664, .adv_w = 151, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 142, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 679, .adv_w = 193, .box_w = 12, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 690, .adv_w = 131, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 697, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 707, .adv_w = 141, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 714, .adv_w = 80, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 723, .adv_w = 144, .box_w = 2, .box_h = 11, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 726, .adv_w = 80, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 735, .adv_w = 192, .box_w = 10, .box_h = 2, .ofs_x = 1, .ofs_y = 3}
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
    -29, -14, -9, -6, -17, -6, -14, -12,
    -6, -14, -6, -9, -6, -9, -6, -9,
    -9, -14, -14, -9, -6, -17, -17, -14,
    -17, -6, -6, -6, -9, -29, -6, -29,
    -9, -6, -6, -6, -6, -3, -6, -12,
    -6, -6, -6, -6, -6, -26, -29, -26,
    -14, -23, -23, -23, -23, -23, -17, -17,
    -23, -17, -23, -17, -23, -17, -23, -23,
    -17, -20, -17, -14, -23, -12, -12, -12,
    -12, -12, -12, -6, -6, -12, -6, -12,
    -6, -9, -6, -6, -14, -3, -6, -6,
    -6, -6, -6, -6, -6, -6, -6, -6,
    -9, -17, -14, -17, -12, -12, -12, -12,
    -6, -6, -12, -6, -12, -6, -9, -6,
    -12, -12, -12, -12, -17, -9, -17, 6,
    -9, 6, -14, -14, -9, -9, -12, -14,
    -14
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
    .bpp = 1,
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
const lv_font_t ui_font_sony18 = {
#else
lv_font_t ui_font_sony18 = {
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



#endif /*#if UI_FONT_SONY18*/

