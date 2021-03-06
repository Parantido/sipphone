#pragma once

#include <dsklog/log.h>
#include <ylstring.h>
#include "configiddefine.h"
#include "configparser/modconfigparser.h"
#include <etlmsghandler/modetlmsghandler.h>
#include <regexp/modregexp.h>
#include <xmlparser/xmlparser.hpp>
#include <commonapi/stringhelperapi.h>
#include <commonapi/systemhelperapi.h>
#include <ylstringalgorithm.h>
#include <ETLLib/ETLLib.hpp>
#include "taskaction/modtaskaction.h"
#include "taskaction/taskaction.h"
#include "taskaction/taskactioncallbackbase.h"

#include "dsskey/include/moddsskey.h"
#include "account/include/modaccount.h"
#include "idlescreen/include/modidlescreen.h"
#include "exp/include/modexp.h"
#include "voip/modvoip.h"
#include "voice/include/modvoice.h"
#include "autopcontrol/include/modautopcontrol.h"
#include "adapterbox/include/modadapterbox.h"
#include "keyguard/include/modkeyguard.h"
#include "extended/xmlbrowser/include/modxmlbrowser.h"
#include "extended/actionuri_url/include/modactionuri_url.h"
#include "autoset/include/modautoset.h"
#include "blf/include/modblf.h"
#include "feature/include/modfeature.h"
#include "contacts/directory/include/moddirinterface.h"
#include "extended/event/include/modevent.h"
#include "record/include/modrecord.h"
#include "broadsoft/callcenter/include/modcallcenter.h"
#include "broadsoft/executiveassistant/include/modexecutiveassistant.h"
#include "broadsoft/callpark/include/modcallpark.h"
#include "broadsoft/callpark/include/callparkcommon.h"
#include "broadsoft/xsiactionhelper/include/modxsicommon.h"
#include "broadsoft/callrecording/include/modcallrecording.h"
#include "threadtask/include/modthreadtask.h"
#include "lamp/backlight/include/modbacklight.h"
#include "lamp/powerled/include/modpowerledlogic.h"
#include "wireless/bluetoothNew/include/modbluetooth.h"

#include "talk/talklogic/include/modtalklogic.h"
#include "talk/talklogic/include/sessionproxy.h"
#include "talk/talklogic/include/talklogic_common.h"
#include "talk/talklogic/include/uiandlogic_common.h"
#include "talk/talklogic/include/commonfunctions.h"
#include "talk/talklogic/include/talkmsgdefine.h"

#include "talk/talklogic/src/multicastpage.h"
#include "talk/talklogic/src/aocmanager.h"
#include "talk/talklogic/src/autoredialmanager.h"
#include "talk/talklogic/src/tipteladapter.h"
#include "talk/talklogic/src/voiceinterface.h"

#include "talk/emergency/include/modemergency.h"
#include "talk/emergency/include/modemergencyheld.h"
#include "talk/callcompletion/include/modcallcompletion.h"
#include "talk/broadsoftsca/include/modbroadsoft_sca.h"
#include "talk/fwd_dnd/include/modfwddnd.h"

#include "talk/talkasync/include/modtalkasync.h"
#include "talk/talkdsskey/include/modtalkdsskey.h"
#include "talk/talkhelp/include/modtalkhelp.h"
#include "talk/dialplan/include/moddialplan.h"

#include "talk/talkproxy/include/scopedelapse.h"
#include "talk/talkproxy/include/helpclass.h"
#include "talk/talkproxy/include/scopedtimerex.h"
#include "talk/talkproxy/include/noanswerfwdasyncproxy.h"
#include "talk/talkproxy/include/autoanswerasyncproxy.h"
#include "talk/talkproxy/include/autorefuseasyncproxy.h"

#include "talk/talkadapter/include/scopedwndupdate.h"
#include "talk/talkadapter/include/sessionstateproxy.h"

#include "talksignaliddefine.h"
#include "basetalklistener.h"
#include "listencenter.h"
#include "sequencehelp.h"
#include "modtalklistener.h"
#include "talklistenertypes.h"
#include "vqrtcplistener.h"
#include "vqrtcplistener.h"
#include "backlightlistener.h"
#include "usbrecordlistener.h"
#include "commonlistener.h"
#include "dialplanlistener.h"
#include "bsftrecordlistener.h"
#include "bwlistener.h"
#include "eventlistener.h"
#include "mutelistener.h"
#include "dsskeybindlistener.h"
#include "callcenterlistener.h"
#include "fwddndlistener.h"
#include "contractlistener.h"
#include "callmisclistener.h"
#include "listenfunction.h"
#include "doorphonelistener.h"
#include "scalistener.h"
#include "commonrecordlistener.h"
#include "autoanswerlistener.h"
#include "voicelistener.h"
#include "sipmsgfliter.h"

