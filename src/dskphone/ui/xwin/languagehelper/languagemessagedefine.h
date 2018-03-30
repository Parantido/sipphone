#ifndef __LANGUAGE_MESSAGE_DEFINE_H__
#define __LANGUAGE_MESSAGE_DEFINE_H__


#include "languagedef.h"
#include "innermsgdefine.h"

#if IF_SUPPORT_TRAN_MULTI_THREAD
enum
{
    LANGUAGE_MESSAGE_HELPER_BEGIN                       = INNER_MSG_LANGUAGE_BEGIN + 50,

#if IF_SUPPORT_TRAN_TEXT_BIND
    LANGUAGE_MESSAGE_HELPER_TEXT_BIND_RE_INIT,
#endif

#if TRANSLATE_INFO_RECORD
    LANGUAGE_MESSAGE_HELPER_TRIGGER_RECORD_TRAN_INFO,
#endif
};
#endif

#endif
