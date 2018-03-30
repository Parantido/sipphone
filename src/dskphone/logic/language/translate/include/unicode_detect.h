#include "config.h"
#include "language/common/lang_config.h"
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <ctime>


#ifdef IF_SUPPORT_UTF8_TRANS

enum UniMode
{
    uniUnkown = -1,
    uni8Bit = 0,     // ASCII编码,包含Extern Latin字符 范围0-255
    uniUTF8 = 1,     // utf8带BOM编码
    uni16BE = 2,     // UTF-16 BE、UCS-2 BE 带BOM编码
    uni16LE = 3,     // UTF-16 LE、UCS-2 LE 带BOM编码
    uniCookie = 4,   // utf8无BOM编码
    uni7Bit = 5,     // ASCII编码,只包含Basic Latin字符 范围0-127
#ifdef _MSVC  // 话机上不检测此类型
    uni16BE_NoBOM = 6, // UTF-16 BE、UCS-2 BE 无BOM编码
    uni16LE_NoBOM = 7, // UTF-16 LE、UCS-2 LE 无BOM编码
#endif
    uniEnd
};


UniMode determineEncoding(const unsigned char * buf, int bufLen);

UniMode DetectFileEncodeType(const char * chPath);

bool IsUTF8Encode(const char * chPath);

#endif
