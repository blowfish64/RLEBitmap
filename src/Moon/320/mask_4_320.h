
//
//  This file is AUTOMATICALLY GENERATED, and should not be edited unless you are certain
//  that it will not be re-generated anytime in the future.  As generated code, the
//  copyright owner(s) of the generating program do NOT claim any copyright on the code
//  generated.
//
//  Run Length Encoded (RLE) bitmaps.  Each run is encoded as either one or two bytes,
//  with NO PADDING.  Thus, the data for each line of the bitmap is VARIABLE LENGTH, and
//  there is no way of determining where any line other than the first starts without
//  walking though the data.  
//
//  Note that one byte encoding ONLY occurs if the total number of colors is 16 or less,
//  and in that case the 'flags' member of the 'RLEBitmapInfo' will have the first bit
//  (0x01) set.
//
//  In that case, if the high 4 bits of the first byte are ZERO, then this is a 2 byte
//  run.  The first byte is the index of the color in the color palette, and the second
//  byte is the length.
//
//  Else, the lower 4 bits are the color index, and the upper 4 bits are the run length.
//
//  If the 'flags' member first bit is zero, then ALL runs are 2 byte runs.  The first
//  byte is the palette index, and the second is the run length.
//
//  In order to save PROGMEM for other uses, the bitmap data is placed in a section that
//  occurs near the END of the used FLASH.  So, this data should only be accessed using
//  the 'far' versions of the progmem functions - the usual versions are limited to the
//  first 64K of FLASH.
//
//  Data is from file 'images\320\mask_4_320.bmp'.
//

const byte mask_4_320_RLEBM_data[] PROGMEM_LATE = 
{
	0x00, 0xa0, 0xe1, 0x00, 0x92, 
	0x00, 0xa9, 0xe1, 0x00, 0x89, 
	0x00, 0xb0, 0xd1, 0x00, 0x83, 
	0x00, 0xb4, 0xe1, 0x00, 0x7e, 
	0x00, 0xb8, 0xe1, 0x00, 0x7a, 
	0x00, 0xbb, 0xf1, 0x00, 0x76, 
	0x00, 0xbe, 0x01, 0x10, 0x00, 0x72, 
	0x00, 0xc0, 0x01, 0x11, 0x00, 0x6f, 
	0x00, 0xc2, 0x01, 0x12, 0x00, 0x6c, 
	0x00, 0xc5, 0x01, 0x12, 0x00, 0x69, 
	0x00, 0xc7, 0x01, 0x12, 0x00, 0x67, 
	0x00, 0xc8, 0x01, 0x14, 0x00, 0x64, 
	0x00, 0xca, 0x01, 0x14, 0x00, 0x62, 
	0x00, 0xcc, 0x01, 0x15, 0x00, 0x5f, 
	0x00, 0xce, 0x01, 0x15, 0x00, 0x5d, 
	0x00, 0xcf, 0x01, 0x16, 0x00, 0x5b, 
	0x00, 0xd1, 0x01, 0x16, 0x00, 0x59, 
	0x00, 0xd2, 0x01, 0x17, 0x00, 0x57, 
	0x00, 0xd3, 0x01, 0x18, 0x00, 0x55, 
	0x00, 0xd5, 0x01, 0x18, 0x00, 0x53, 
	0x00, 0xd6, 0x01, 0x19, 0x00, 0x51, 
	0x00, 0xd7, 0x01, 0x19, 0x00, 0x50, 
	0x00, 0xd9, 0x01, 0x19, 0x00, 0x4e, 
	0x00, 0xda, 0x01, 0x1a, 0x00, 0x4c, 
	0x00, 0xdb, 0x01, 0x1a, 0x00, 0x4b, 
	0x00, 0xdc, 0x01, 0x1b, 0x00, 0x49, 
	0x00, 0xdd, 0x01, 0x1b, 0x00, 0x48, 
	0x00, 0xde, 0x01, 0x1c, 0x00, 0x46, 
	0x00, 0xdf, 0x01, 0x1c, 0x00, 0x45, 
	0x00, 0xe0, 0x01, 0x1d, 0x00, 0x43, 
	0x00, 0xe1, 0x01, 0x1d, 0x00, 0x42, 
	0x00, 0xe2, 0x01, 0x1d, 0x00, 0x41, 
	0x00, 0xe3, 0x01, 0x1e, 0x00, 0x3f, 
	0x00, 0xe4, 0x01, 0x1e, 0x00, 0x3e, 
	0x00, 0xe5, 0x01, 0x1e, 0x00, 0x3d, 
	0x00, 0xe6, 0x01, 0x1e, 0x00, 0x3c, 
	0x00, 0xe7, 0x01, 0x1f, 0x00, 0x3a, 
	0x00, 0xe8, 0x01, 0x1f, 0x00, 0x39, 
	0x00, 0xe9, 0x01, 0x1f, 0x00, 0x38, 
	0x00, 0xe9, 0x01, 0x20, 0x00, 0x37, 
	0x00, 0xea, 0x01, 0x20, 0x00, 0x36, 
	0x00, 0xeb, 0x01, 0x20, 0x00, 0x35, 
	0x00, 0xec, 0x01, 0x20, 0x00, 0x34, 
	0x00, 0xed, 0x01, 0x21, 0x00, 0x32, 
	0x00, 0xed, 0x01, 0x22, 0x00, 0x31, 
	0x00, 0xee, 0x01, 0x22, 0x00, 0x30, 
	0x00, 0xef, 0x01, 0x22, 0x00, 0x2f, 
	0x00, 0xef, 0x01, 0x23, 0x00, 0x2e, 
	0x00, 0xf0, 0x01, 0x23, 0x00, 0x2d, 
	0x00, 0xf1, 0x01, 0x23, 0x00, 0x2c, 
	0x00, 0xf2, 0x01, 0x22, 0x00, 0x2c, 
	0x00, 0xf2, 0x01, 0x23, 0x00, 0x2b, 
	0x00, 0xf3, 0x01, 0x23, 0x00, 0x2a, 
	0x00, 0xf3, 0x01, 0x24, 0x00, 0x29, 
	0x00, 0xf4, 0x01, 0x24, 0x00, 0x28, 
	0x00, 0xf5, 0x01, 0x24, 0x00, 0x27, 
	0x00, 0xf5, 0x01, 0x25, 0x00, 0x26, 
	0x00, 0xf6, 0x01, 0x25, 0x00, 0x25, 
	0x00, 0xf7, 0x01, 0x24, 0x00, 0x25, 
	0x00, 0xf7, 0x01, 0x25, 0x00, 0x24, 
	0x00, 0xf8, 0x01, 0x25, 0x00, 0x23, 
	0x00, 0xf8, 0x01, 0x26, 0x00, 0x22, 
	0x00, 0xf9, 0x01, 0x26, 0x00, 0x21, 
	0x00, 0xf9, 0x01, 0x26, 0x00, 0x21, 
	0x00, 0xfa, 0x01, 0x26, 0x00, 0x20, 
	0x00, 0xfa, 0x01, 0x27, 0x00, 0x1f, 
	0x00, 0xfb, 0x01, 0x27, 0x00, 0x1e, 
	0x00, 0xfb, 0x01, 0x27, 0x00, 0x1e, 
	0x00, 0xfc, 0x01, 0x27, 0x00, 0x1d, 
	0x00, 0xfc, 0x01, 0x28, 0x00, 0x1c, 
	0x00, 0xfd, 0x01, 0x27, 0x00, 0x1c, 
	0x00, 0xfd, 0x01, 0x28, 0x00, 0x1b, 
	0x00, 0xfe, 0x01, 0x28, 0x00, 0x1a, 
	0x00, 0xfe, 0x01, 0x28, 0x00, 0x1a, 
	0x00, 0xff, 0x01, 0x28, 0x00, 0x19, 
	0x00, 0xff, 0x01, 0x29, 0x00, 0x18, 
	0x00, 0xff, 0x10, 0x01, 0x28, 0x00, 0x18, 
	0x00, 0xff, 0x10, 0x01, 0x29, 0x00, 0x17, 
	0x00, 0xff, 0x20, 0x01, 0x28, 0x00, 0x17, 
	0x00, 0xff, 0x20, 0x01, 0x29, 0x00, 0x16, 
	0x00, 0xff, 0x20, 0x01, 0x2a, 0x00, 0x15, 
	0x00, 0xff, 0x30, 0x01, 0x29, 0x00, 0x15, 
	0x00, 0xff, 0x30, 0x01, 0x2a, 0x00, 0x14, 
	0x00, 0xff, 0x40, 0x01, 0x29, 0x00, 0x14, 
	0x00, 0xff, 0x40, 0x01, 0x2a, 0x00, 0x13, 
	0x00, 0xff, 0x40, 0x01, 0x2a, 0x00, 0x13, 
	0x00, 0xff, 0x50, 0x01, 0x2a, 0x00, 0x12, 
	0x00, 0xff, 0x50, 0x01, 0x2a, 0x00, 0x12, 
	0x00, 0xff, 0x50, 0x01, 0x2b, 0x00, 0x11, 
	0x00, 0xff, 0x60, 0x01, 0x2a, 0x00, 0x11, 
	0x00, 0xff, 0x60, 0x01, 0x2b, 0x00, 0x10, 
	0x00, 0xff, 0x60, 0x01, 0x2b, 0x00, 0x10, 
	0x00, 0xff, 0x70, 0x01, 0x2b, 0xf0, 
	0x00, 0xff, 0x70, 0x01, 0x2b, 0xf0, 
	0x00, 0xff, 0x70, 0x01, 0x2c, 0xe0, 
	0x00, 0xff, 0x80, 0x01, 0x2b, 0xe0, 
	0x00, 0xff, 0x80, 0x01, 0x2c, 0xd0, 
	0x00, 0xff, 0x80, 0x01, 0x2c, 0xd0, 
	0x00, 0xff, 0x90, 0x01, 0x2b, 0xd0, 
	0x00, 0xff, 0x90, 0x01, 0x2c, 0xc0, 
	0x00, 0xff, 0x90, 0x01, 0x2c, 0xc0, 
	0x00, 0xff, 0x90, 0x01, 0x2d, 0xb0, 
	0x00, 0xff, 0xa0, 0x01, 0x2c, 0xb0, 
	0x00, 0xff, 0xa0, 0x01, 0x2c, 0xb0, 
	0x00, 0xff, 0xa0, 0x01, 0x2d, 0xa0, 
	0x00, 0xff, 0xb0, 0x01, 0x2c, 0xa0, 
	0x00, 0xff, 0xb0, 0x01, 0x2c, 0xa0, 
	0x00, 0xff, 0xb0, 0x01, 0x2d, 0x90, 
	0x00, 0xff, 0xb0, 0x01, 0x2d, 0x90, 
	0x00, 0xff, 0xc0, 0x01, 0x2c, 0x90, 
	0x00, 0xff, 0xc0, 0x01, 0x2d, 0x80, 
	0x00, 0xff, 0xc0, 0x01, 0x2d, 0x80, 
	0x00, 0xff, 0xc0, 0x01, 0x2d, 0x80, 
	0x00, 0xff, 0xc0, 0x01, 0x2e, 0x70, 
	0x00, 0xff, 0xd0, 0x01, 0x2d, 0x70, 
	0x00, 0xff, 0xd0, 0x01, 0x2d, 0x70, 
	0x00, 0xff, 0xd0, 0x01, 0x2e, 0x60, 
	0x00, 0xff, 0xd0, 0x01, 0x2e, 0x60, 
	0x00, 0xff, 0xd0, 0x01, 0x2e, 0x60, 
	0x00, 0xff, 0xe0, 0x01, 0x2d, 0x60, 
	0x00, 0xff, 0xe0, 0x01, 0x2e, 0x50, 
	0x00, 0xff, 0xe0, 0x01, 0x2e, 0x50, 
	0x00, 0xff, 0xe0, 0x01, 0x2e, 0x50, 
	0x00, 0xff, 0xe0, 0x01, 0x2e, 0x50, 
	0x00, 0xff, 0xf0, 0x01, 0x2e, 0x40, 
	0x00, 0xff, 0xf0, 0x01, 0x2e, 0x40, 
	0x00, 0xff, 0xf0, 0x01, 0x2e, 0x40, 
	0x00, 0xff, 0xf0, 0x01, 0x2e, 0x40, 
	0x00, 0xff, 0xf0, 0x01, 0x2e, 0x40, 
	0x00, 0xff, 0xf0, 0x01, 0x2f, 0x30, 
	0x00, 0xff, 0xf0, 0x01, 0x2f, 0x30, 
	0x00, 0xff, 0x00, 0x10, 0x01, 0x2e, 0x30, 
	0x00, 0xff, 0x00, 0x10, 0x01, 0x2e, 0x30, 
	0x00, 0xff, 0x00, 0x10, 0x01, 0x2e, 0x30, 
	0x00, 0xff, 0x00, 0x10, 0x01, 0x2f, 0x20, 
	0x00, 0xff, 0x00, 0x10, 0x01, 0x2f, 0x20, 
	0x00, 0xff, 0x00, 0x10, 0x01, 0x2f, 0x20, 
	0x00, 0xff, 0x00, 0x10, 0x01, 0x2f, 0x20, 
	0x00, 0xff, 0x00, 0x10, 0x01, 0x2f, 0x20, 
	0x00, 0xff, 0x00, 0x10, 0x01, 0x2f, 0x20, 
	0x00, 0xff, 0x00, 0x10, 0x01, 0x2f, 0x20, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2e, 0x20, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x30, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x30, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x30, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x30, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x30, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x30, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x30, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x30, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2f, 0x10, 
	0x00, 0xff, 0x00, 0x11, 0x01, 0x2e, 0x20, 
	0x00, 0xff, 0x00, 0x10, 0x01, 0x2f, 0x20, 
	0x00, 0xff, 0x00, 0x10, 0x01, 0x2f, 0x20, 
	0x00, 0xff, 0x00, 0x10, 0x01, 0x2f, 0x20, 
	0x00, 0xff, 0x00, 0x10, 0x01, 0x2f, 0x20, 
	0x00, 0xff, 0x00, 0x10, 0x01, 0x2f, 0x20, 
	0x00, 0xff, 0x00, 0x10, 0x01, 0x2f, 0x20, 
	0x00, 0xff, 0x00, 0x10, 0x01, 0x2f, 0x20, 
	0x00, 0xff, 0x00, 0x10, 0x01, 0x2e, 0x30, 
	0x00, 0xff, 0x00, 0x10, 0x01, 0x2e, 0x30, 
	0x00, 0xff, 0x00, 0x10, 0x01, 0x2e, 0x30, 
	0x00, 0xff, 0xf0, 0x01, 0x2f, 0x30, 
	0x00, 0xff, 0xf0, 0x01, 0x2f, 0x30, 
	0x00, 0xff, 0xf0, 0x01, 0x2e, 0x40, 
	0x00, 0xff, 0xf0, 0x01, 0x2e, 0x40, 
	0x00, 0xff, 0xf0, 0x01, 0x2e, 0x40, 
	0x00, 0xff, 0xf0, 0x01, 0x2e, 0x40, 
	0x00, 0xff, 0xf0, 0x01, 0x2e, 0x40, 
	0x00, 0xff, 0xe0, 0x01, 0x2e, 0x50, 
	0x00, 0xff, 0xe0, 0x01, 0x2e, 0x50, 
	0x00, 0xff, 0xe0, 0x01, 0x2e, 0x50, 
	0x00, 0xff, 0xe0, 0x01, 0x2e, 0x50, 
	0x00, 0xff, 0xe0, 0x01, 0x2d, 0x60, 
	0x00, 0xff, 0xd0, 0x01, 0x2e, 0x60, 
	0x00, 0xff, 0xd0, 0x01, 0x2e, 0x60, 
	0x00, 0xff, 0xd0, 0x01, 0x2e, 0x60, 
	0x00, 0xff, 0xd0, 0x01, 0x2d, 0x70, 
	0x00, 0xff, 0xd0, 0x01, 0x2d, 0x70, 
	0x00, 0xff, 0xc0, 0x01, 0x2e, 0x70, 
	0x00, 0xff, 0xc0, 0x01, 0x2d, 0x80, 
	0x00, 0xff, 0xc0, 0x01, 0x2d, 0x80, 
	0x00, 0xff, 0xc0, 0x01, 0x2d, 0x80, 
	0x00, 0xff, 0xc0, 0x01, 0x2c, 0x90, 
	0x00, 0xff, 0xb0, 0x01, 0x2d, 0x90, 
	0x00, 0xff, 0xb0, 0x01, 0x2d, 0x90, 
	0x00, 0xff, 0xb0, 0x01, 0x2c, 0xa0, 
	0x00, 0xff, 0xb0, 0x01, 0x2c, 0xa0, 
	0x00, 0xff, 0xa0, 0x01, 0x2d, 0xa0, 
	0x00, 0xff, 0xa0, 0x01, 0x2c, 0xb0, 
	0x00, 0xff, 0xa0, 0x01, 0x2c, 0xb0, 
	0x00, 0xff, 0x90, 0x01, 0x2d, 0xb0, 
	0x00, 0xff, 0x90, 0x01, 0x2c, 0xc0, 
	0x00, 0xff, 0x90, 0x01, 0x2c, 0xc0, 
	0x00, 0xff, 0x90, 0x01, 0x2b, 0xd0, 
	0x00, 0xff, 0x80, 0x01, 0x2c, 0xd0, 
	0x00, 0xff, 0x80, 0x01, 0x2c, 0xd0, 
	0x00, 0xff, 0x80, 0x01, 0x2b, 0xe0, 
	0x00, 0xff, 0x70, 0x01, 0x2c, 0xe0, 
	0x00, 0xff, 0x70, 0x01, 0x2b, 0xf0, 
	0x00, 0xff, 0x70, 0x01, 0x2b, 0xf0, 
	0x00, 0xff, 0x60, 0x01, 0x2b, 0x00, 0x10, 
	0x00, 0xff, 0x60, 0x01, 0x2b, 0x00, 0x10, 
	0x00, 0xff, 0x60, 0x01, 0x2a, 0x00, 0x11, 
	0x00, 0xff, 0x50, 0x01, 0x2b, 0x00, 0x11, 
	0x00, 0xff, 0x50, 0x01, 0x2a, 0x00, 0x12, 
	0x00, 0xff, 0x50, 0x01, 0x2a, 0x00, 0x12, 
	0x00, 0xff, 0x40, 0x01, 0x2a, 0x00, 0x13, 
	0x00, 0xff, 0x40, 0x01, 0x2a, 0x00, 0x13, 
	0x00, 0xff, 0x40, 0x01, 0x29, 0x00, 0x14, 
	0x00, 0xff, 0x30, 0x01, 0x2a, 0x00, 0x14, 
	0x00, 0xff, 0x30, 0x01, 0x29, 0x00, 0x15, 
	0x00, 0xff, 0x20, 0x01, 0x2a, 0x00, 0x15, 
	0x00, 0xff, 0x20, 0x01, 0x29, 0x00, 0x16, 
	0x00, 0xff, 0x20, 0x01, 0x28, 0x00, 0x17, 
	0x00, 0xff, 0x10, 0x01, 0x29, 0x00, 0x17, 
	0x00, 0xff, 0x10, 0x01, 0x28, 0x00, 0x18, 
	0x00, 0xff, 0x01, 0x29, 0x00, 0x18, 
	0x00, 0xff, 0x01, 0x28, 0x00, 0x19, 
	0x00, 0xfe, 0x01, 0x28, 0x00, 0x1a, 
	0x00, 0xfe, 0x01, 0x28, 0x00, 0x1a, 
	0x00, 0xfd, 0x01, 0x28, 0x00, 0x1b, 
	0x00, 0xfd, 0x01, 0x27, 0x00, 0x1c, 
	0x00, 0xfc, 0x01, 0x28, 0x00, 0x1c, 
	0x00, 0xfc, 0x01, 0x27, 0x00, 0x1d, 
	0x00, 0xfb, 0x01, 0x27, 0x00, 0x1e, 
	0x00, 0xfb, 0x01, 0x27, 0x00, 0x1e, 
	0x00, 0xfa, 0x01, 0x27, 0x00, 0x1f, 
	0x00, 0xfa, 0x01, 0x26, 0x00, 0x20, 
	0x00, 0xf9, 0x01, 0x26, 0x00, 0x21, 
	0x00, 0xf9, 0x01, 0x26, 0x00, 0x21, 
	0x00, 0xf8, 0x01, 0x26, 0x00, 0x22, 
	0x00, 0xf8, 0x01, 0x25, 0x00, 0x23, 
	0x00, 0xf7, 0x01, 0x25, 0x00, 0x24, 
	0x00, 0xf7, 0x01, 0x24, 0x00, 0x25, 
	0x00, 0xf6, 0x01, 0x25, 0x00, 0x25, 
	0x00, 0xf5, 0x01, 0x25, 0x00, 0x26, 
	0x00, 0xf5, 0x01, 0x24, 0x00, 0x27, 
	0x00, 0xf4, 0x01, 0x24, 0x00, 0x28, 
	0x00, 0xf3, 0x01, 0x24, 0x00, 0x29, 
	0x00, 0xf3, 0x01, 0x23, 0x00, 0x2a, 
	0x00, 0xf2, 0x01, 0x23, 0x00, 0x2b, 
	0x00, 0xf2, 0x01, 0x22, 0x00, 0x2c, 
	0x00, 0xf1, 0x01, 0x23, 0x00, 0x2c, 
	0x00, 0xf0, 0x01, 0x23, 0x00, 0x2d, 
	0x00, 0xef, 0x01, 0x23, 0x00, 0x2e, 
	0x00, 0xef, 0x01, 0x22, 0x00, 0x2f, 
	0x00, 0xee, 0x01, 0x22, 0x00, 0x30, 
	0x00, 0xed, 0x01, 0x22, 0x00, 0x31, 
	0x00, 0xed, 0x01, 0x21, 0x00, 0x32, 
	0x00, 0xec, 0x01, 0x20, 0x00, 0x34, 
	0x00, 0xeb, 0x01, 0x20, 0x00, 0x35, 
	0x00, 0xea, 0x01, 0x20, 0x00, 0x36, 
	0x00, 0xe9, 0x01, 0x20, 0x00, 0x37, 
	0x00, 0xe9, 0x01, 0x1f, 0x00, 0x38, 
	0x00, 0xe8, 0x01, 0x1f, 0x00, 0x39, 
	0x00, 0xe7, 0x01, 0x1f, 0x00, 0x3a, 
	0x00, 0xe6, 0x01, 0x1e, 0x00, 0x3c, 
	0x00, 0xe5, 0x01, 0x1e, 0x00, 0x3d, 
	0x00, 0xe4, 0x01, 0x1e, 0x00, 0x3e, 
	0x00, 0xe3, 0x01, 0x1e, 0x00, 0x3f, 
	0x00, 0xe2, 0x01, 0x1d, 0x00, 0x41, 
	0x00, 0xe1, 0x01, 0x1d, 0x00, 0x42, 
	0x00, 0xe0, 0x01, 0x1d, 0x00, 0x43, 
	0x00, 0xdf, 0x01, 0x1c, 0x00, 0x45, 
	0x00, 0xde, 0x01, 0x1c, 0x00, 0x46, 
	0x00, 0xdd, 0x01, 0x1b, 0x00, 0x48, 
	0x00, 0xdc, 0x01, 0x1b, 0x00, 0x49, 
	0x00, 0xdb, 0x01, 0x1a, 0x00, 0x4b, 
	0x00, 0xda, 0x01, 0x1a, 0x00, 0x4c, 
	0x00, 0xd9, 0x01, 0x19, 0x00, 0x4e, 
	0x00, 0xd7, 0x01, 0x19, 0x00, 0x50, 
	0x00, 0xd6, 0x01, 0x19, 0x00, 0x51, 
	0x00, 0xd5, 0x01, 0x18, 0x00, 0x53, 
	0x00, 0xd3, 0x01, 0x18, 0x00, 0x55, 
	0x00, 0xd2, 0x01, 0x17, 0x00, 0x57, 
	0x00, 0xd1, 0x01, 0x16, 0x00, 0x59, 
	0x00, 0xcf, 0x01, 0x16, 0x00, 0x5b, 
	0x00, 0xce, 0x01, 0x15, 0x00, 0x5d, 
	0x00, 0xcc, 0x01, 0x15, 0x00, 0x5f, 
	0x00, 0xca, 0x01, 0x14, 0x00, 0x62, 
	0x00, 0xc8, 0x01, 0x14, 0x00, 0x64, 
	0x00, 0xc7, 0x01, 0x12, 0x00, 0x67, 
	0x00, 0xc5, 0x01, 0x12, 0x00, 0x69, 
	0x00, 0xc2, 0x01, 0x12, 0x00, 0x6c, 
	0x00, 0xc0, 0x01, 0x11, 0x00, 0x6f, 
	0x00, 0xbe, 0x01, 0x10, 0x00, 0x72, 
	0x00, 0xbb, 0xf1, 0x00, 0x76, 
	0x00, 0xb8, 0xe1, 0x00, 0x7a, 
	0x00, 0xb4, 0xe1, 0x00, 0x7e, 
	0x00, 0xb0, 0xd1, 0x00, 0x83, 
	0x00, 0xa9, 0xe1, 0x00, 0x89, 
	0x00, 0xa0, 0xe1, 0x00, 0x92, 
	
}; // 320x320 Bitmap (102400 pixels) in 1990 bytes

const uint16_t mask_4_320_RLEBM_palette[] PROGMEM_LATE = 
{
	// Palette has 2 entries
	0x0000, 0xffff, 
};



//  Some platforms don't fully implement the pgmspace.h interface.  Assume ordinary
//  addresses will do.
#if not defined pgm_get_far_address
#define pgm_get_far_address(x) ((uint32_t)(&(x)))
#endif

//  Returns the info needed to render the bitmap.
inline void get_mask_4_320_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(mask_4_320_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(mask_4_320_RLEBM_palette);
	bmInfo.width = 320;
	bmInfo.height = 320;
	bmInfo.flags = 0x01;
}
