/*----------------------------------------------------------------------------
 *      Name:    Font_6x8_h.h
 *      Purpose: ASCII font characters (width 6 pixels, height 8 pixels,
 *               horizontal pixel packing)
 *      Rev.:    V4.70
 *----------------------------------------------------------------------------
 *      This code is part of the RealView Run-Time Library.
 *      Copyright (c) 2004-2013 KEIL - An ARM Company. All rights reserved.
 *---------------------------------------------------------------------------*/

#ifndef __FONT_6x8_H_H
#define __FONT_6x8_H_H

const unsigned char Font_6x8_h[] = {
  /* 0x20: Space ' ' */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  /* 0x21: '!' */
  0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x04, 0x00,
  /* 0x22: '"' */
  0x0A, 0x0A, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00,
  /* 0x23: '#' */
  0x0A, 0x0A, 0x1F, 0x0A, 0x1F, 0x0A, 0x0A, 0x00,
  /* 0x24: '$' */
  0x04, 0x1E, 0x05, 0x0E, 0x14, 0x0F, 0x04, 0x00,
  /* 0x25: '%' */
  0x03, 0x13, 0x08, 0x04, 0x02, 0x19, 0x18, 0x00,
  /* 0x26: '&' */
  0x02, 0x05, 0x05, 0x02, 0x15, 0x09, 0x16, 0x00,
  /* 0x27: ''' */
  0x0C, 0x0C, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00,
  /* 0x28: '(' */
  0x08, 0x04, 0x02, 0x02, 0x02, 0x04, 0x08, 0x00,
  /* 0x29: ')' */
  0x02, 0x04, 0x08, 0x08, 0x08, 0x04, 0x02, 0x00,
  /* 0x2A: '*' */
  0x00, 0x04, 0x15, 0x0E, 0x0E, 0x15, 0x04, 0x00,
  /* 0x2B: '+' */
  0x00, 0x04, 0x04, 0x1F, 0x04, 0x04, 0x00, 0x00,
  /* 0x2C: ',' */
  0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x04, 0x02,
  /* 0x2D: '-' */
  0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00,
  /* 0x2E: '.' */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00,
  /* 0x2F: '/' */
  0x00, 0x10, 0x08, 0x04, 0x02, 0x01, 0x00, 0x00,
  /* 0x30: '0' */
  0x0E, 0x11, 0x13, 0x15, 0x19, 0x11, 0x0E, 0x00,
  /* 0x31: '1' */
  0x04, 0x06, 0x04, 0x04, 0x04, 0x04, 0x0E, 0x00,
  /* 0x32: '2' */
  0x0E, 0x11, 0x10, 0x0E, 0x01, 0x01, 0x1F, 0x00,
  /* 0x33: '3' */
  0x1F, 0x10, 0x08, 0x0C, 0x10, 0x11, 0x0E, 0x00,
  /* 0x34: '4' */
  0x08, 0x0C, 0x0A, 0x09, 0x1F, 0x08, 0x08, 0x00,
  /* 0x35: '5' */
  0x1F, 0x01, 0x0F, 0x10, 0x10, 0x11, 0x0E, 0x00,
  /* 0x36: '6' */
  0x1C, 0x02, 0x01, 0x0F, 0x11, 0x11, 0x0E, 0x00,
  /* 0x37: '7' */
  0x1F, 0x10, 0x10, 0x08, 0x04, 0x02, 0x01, 0x00,
  /* 0x38: '8' */
  0x0E, 0x11, 0x11, 0x0E, 0x11, 0x11, 0x0E, 0x00,
  /* 0x39: '9' */
  0x0E, 0x11, 0x11, 0x1E, 0x10, 0x08, 0x07, 0x00,
  /* 0x3A: ':' */
  0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00,
  /* 0x3B: ';' */
  0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x02, 0x00,
  /* 0x3C: '<' */
  0x10, 0x08, 0x04, 0x02, 0x04, 0x08, 0x10, 0x00,
  /* 0x3D: '=' */
  0x00, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x00, 0x00,
  /* 0x3E: '>' */
  0x02, 0x04, 0x08, 0x10, 0x08, 0x04, 0x02, 0x00,
  /* 0x3F: '?' */
  0x0E, 0x11, 0x10, 0x0C, 0x04, 0x00, 0x04, 0x00,
  /* 0x40: '@' */
  0x0E, 0x11, 0x15, 0x1D, 0x0D, 0x01, 0x1E, 0x00,
  /* 0x41: 'A' */
  0x04, 0x0A, 0x11, 0x11, 0x1F, 0x11, 0x11, 0x00,
  /* 0x42: 'B' */
  0x0F, 0x11, 0x11, 0x0F, 0x11, 0x11, 0x0F, 0x00,
  /* 0x43: 'C' */
  0x0E, 0x11, 0x01, 0x01, 0x01, 0x11, 0x0E, 0x00,
  /* 0x44: 'D' */
  0x0F, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0F, 0x00,
  /* 0x45: 'E' */
  0x1F, 0x01, 0x01, 0x0F, 0x01, 0x01, 0x1F, 0x00,
  /* 0x46: 'F' */
  0x1F, 0x01, 0x01, 0x0F, 0x01, 0x01, 0x01, 0x00,
  /* 0x47: 'G' */
  0x1E, 0x11, 0x01, 0x01, 0x19, 0x11, 0x1E, 0x00,
  /* 0x48: 'H' */
  0x11, 0x11, 0x11, 0x1F, 0x11, 0x11, 0x11, 0x00,
  /* 0x49: 'I' */
  0x0E, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0E, 0x00,
  /* 0x4A: 'J' */
  0x1C, 0x08, 0x08, 0x08, 0x08, 0x09, 0x06, 0x00,
  /* 0x4B: 'K' */
  0x11, 0x09, 0x05, 0x03, 0x05, 0x09, 0x11, 0x00,
  /* 0x4C: 'L' */
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1F, 0x00,
  /* 0x4D: 'M' */
  0x11, 0x1B, 0x15, 0x15, 0x15, 0x11, 0x11, 0x00,
  /* 0x4E: 'N' */
  0x11, 0x11, 0x13, 0x15, 0x19, 0x11, 0x11, 0x00,
  /* 0x4F: 'O' */
  0x0E, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0E, 0x00,
  /* 0x50: 'P' */
  0x0F, 0x11, 0x11, 0x0F, 0x01, 0x01, 0x01, 0x00,
  /* 0x51: 'Q' */
  0x0E, 0x11, 0x11, 0x11, 0x15, 0x09, 0x16, 0x00,
  /* 0x52: 'R' */
  0x0F, 0x11, 0x11, 0x0F, 0x05, 0x09, 0x11, 0x00,
  /* 0x53: 'S' */
  0x0E, 0x11, 0x01, 0x0E, 0x10, 0x11, 0x0E, 0x00,
  /* 0x54: 'T' */
  0x1F, 0x15, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00,
  /* 0x55: 'U' */
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0E, 0x00,
  /* 0x56: 'V' */
  0x11, 0x11, 0x11, 0x11, 0x11, 0x0A, 0x04, 0x00,
  /* 0x57: 'W' */
  0x11, 0x11, 0x11, 0x15, 0x15, 0x15, 0x0A, 0x00,
  /* 0x58: 'X' */
  0x11, 0x11, 0x0A, 0x04, 0x0A, 0x11, 0x11, 0x00,
  /* 0x59: 'Y' */
  0x11, 0x11, 0x0A, 0x04, 0x04, 0x04, 0x04, 0x00,
  /* 0x5A: 'Z' */
  0x1F, 0x10, 0x08, 0x0E, 0x02, 0x01, 0x1F, 0x00,
  /* 0x5B: '[' */
  0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x1E, 0x00,
  /* 0x5C: '\' */
  0x00, 0x01, 0x02, 0x04, 0x08, 0x10, 0x00, 0x00,
  /* 0x5D: ']' */
  0x1E, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1E, 0x00,
  /* 0x5E: '^' */
  0x04, 0x0A, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00,
  /* 0x5F: '_' */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00,
  /* 0x60: ''' */
  0x06, 0x06, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00,
  /* 0x61: 'a' */
  0x00, 0x00, 0x06, 0x08, 0x0E, 0x09, 0x1E, 0x00,
  /* 0x62: 'b' */
  0x01, 0x01, 0x0D, 0x13, 0x11, 0x13, 0x0D, 0x00,
  /* 0x63: 'c' */
  0x00, 0x00, 0x0E, 0x11, 0x01, 0x11, 0x0E, 0x00,
  /* 0x64: 'd' */
  0x10, 0x10, 0x16, 0x19, 0x11, 0x19, 0x16, 0x00,
  /* 0x65: 'e' */
  0x00, 0x00, 0x0E, 0x11, 0x1F, 0x01, 0x0E, 0x00,
  /* 0x66: 'f' */
  0x08, 0x14, 0x04, 0x0E, 0x04, 0x04, 0x04, 0x00,
  /* 0x67: 'g' */
  0x00, 0x00, 0x0E, 0x19, 0x19, 0x16, 0x10, 0x0E,
  /* 0x68: 'h' */
  0x01, 0x01, 0x0D, 0x13, 0x11, 0x11, 0x11, 0x00,
  /* 0x69: 'i' */
  0x04, 0x00, 0x06, 0x04, 0x04, 0x04, 0x0E, 0x00,
  /* 0x6A: 'j' */
  0x08, 0x00, 0x08, 0x08, 0x08, 0x09, 0x06, 0x00,
  /* 0x6B: 'k' */
  0x01, 0x01, 0x09, 0x05, 0x03, 0x05, 0x09, 0x00,
  /* 0x6C: 'l' */
  0x06, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0E, 0x00,
  /* 0x6D: 'm' */
  0x00, 0x00, 0x0B, 0x15, 0x15, 0x15, 0x15, 0x00,
  /* 0x6E: 'n' */
  0x00, 0x00, 0x0D, 0x13, 0x11, 0x11, 0x11, 0x00,
  /* 0x6F: 'o' */
  0x00, 0x00, 0x0E, 0x11, 0x11, 0x11, 0x0E, 0x00,
  /* 0x70: 'p' */
  0x00, 0x00, 0x0D, 0x13, 0x13, 0x0D, 0x01, 0x01,
  /* 0x71: 'q' */
  0x00, 0x00, 0x16, 0x19, 0x19, 0x16, 0x10, 0x10,
  /* 0x72: 'r' */
  0x00, 0x00, 0x0D, 0x13, 0x01, 0x01, 0x01, 0x00,
  /* 0x73: 's' */
  0x00, 0x00, 0x1E, 0x01, 0x0E, 0x10, 0x0F, 0x00,
  /* 0x74: 't' */
  0x04, 0x04, 0x1F, 0x04, 0x04, 0x14, 0x08, 0x00,
  /* 0x75: 'u' */
  0x00, 0x00, 0x11, 0x11, 0x11, 0x19, 0x16, 0x00,
  /* 0x76: 'v' */
  0x00, 0x00, 0x11, 0x11, 0x11, 0x0A, 0x04, 0x00,
  /* 0x77: 'w' */
  0x00, 0x00, 0x11, 0x11, 0x15, 0x15, 0x0A, 0x00,
  /* 0x78: 'x' */
  0x00, 0x00, 0x11, 0x0A, 0x04, 0x0A, 0x11, 0x00,
  /* 0x79: 'y' */
  0x00, 0x00, 0x11, 0x11, 0x1E, 0x10, 0x11, 0x0E,
  /* 0x7A: 'z' */
  0x00, 0x00, 0x1F, 0x08, 0x04, 0x02, 0x1F, 0x00,
  /* 0x7B: '{' */
  0x08, 0x04, 0x04, 0x02, 0x04, 0x04, 0x08, 0x00,
  /* 0x7C: '|' */
  0x04, 0x04, 0x04, 0x00, 0x04, 0x04, 0x04, 0x00,
  /* 0x7D: '}' */
  0x02, 0x04, 0x04, 0x08, 0x04, 0x04, 0x02, 0x00,
  /* 0x7E: '~' */
  0x02, 0x15, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
  /* 0x7F: ' ' */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

  /* Special Symbols  starting at character 0x80 */
  /* 0x80: Circle - Empty */
  0x00, 0x00, 0x0C, 0x12, 0x12, 0x0C, 0x00, 0x00,
  /* 0x81: Circle - Full */
  0x00, 0x00, 0x0C, 0x1E, 0x1E, 0x0C, 0x00, 0x00,
  /* 0x82: Square - Empty */
  0x00, 0x00, 0x1E, 0x12, 0x12, 0x1E, 0x00, 0x00,
  /* 0x83: Square - Full */
  0x00, 0x00, 0x1E, 0x1E, 0x1E, 0x1E, 0x00, 0x00,
  /* 0x84: Up - Empty */
  0x00, 0x00, 0x0C, 0x0C, 0x12, 0x1E, 0x00, 0x00,
  /* 0x85: Up - Full */
  0x00, 0x00, 0x0C, 0x0C, 0x1E, 0x1E, 0x00, 0x00,
  /* 0x86: Down - Empty */
  0x00, 0x00, 0x1E, 0x12, 0x0C, 0x0C, 0x00, 0x00,
  /* 0x87: Down - Full */
  0x00, 0x00, 0x1E, 0x1E, 0x0C, 0x0C, 0x00, 0x00,
  /* 0x88: Left - Empty */
  0x00, 0x00, 0x18, 0x16, 0x16, 0x18, 0x00, 0x00,
  /* 0x89: Left - Full */
  0x00, 0x00, 0x18, 0x1E, 0x1E, 0x18, 0x00, 0x00,
  /* 0x8A: Right - Empty */
  0x00, 0x00, 0x06, 0x1A, 0x1A, 0x06, 0x00, 0x00,
  /* 0x8B: Right - Full */
  0x00, 0x00, 0x06, 0x1E, 0x1E, 0x06, 0x00, 0x00,
  /* 0x8C: Wait - Empty */
  0x00, 0x00, 0x0C, 0x12, 0x12, 0x0C, 0x00, 0x00,
  /* 0x8D: Wait - Full */
  0x00, 0x00, 0x0C, 0x1E, 0x1E, 0x0C, 0x00, 0x00,
  /* 0x8E: Walk - Empty */
  0x00, 0x00, 0x1E, 0x12, 0x12, 0x1E, 0x00, 0x00,
  /* 0x8F: Walk - Full */
  0x00, 0x00, 0x1E, 0x1E, 0x1E, 0x1E, 0x00, 0x00,
};

#endif /* __FONT_6x8_H_H */
