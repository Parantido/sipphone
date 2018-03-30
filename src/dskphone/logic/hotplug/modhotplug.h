#ifndef _MOD_HOTPLUG_H_
#define _MOD_HOTPLUG_H_
#include "commondefine.h"
#include "service_dsk_define.h"

/************************************************************************/
/*
    热插拔初始化接口，由外部模块负责初始化，初始化顺序优先级最低
*/
/************************************************************************/
void modhotplug_Init();

#ifdef IF_SUPPORT_VIDEO
/************************************************************************/
/* 功能  ： 外部模块获取当前摄像头插拔状态                                */
/* 参数说明 ：    无                                                      */
/* 返回值 ： CameraStatusType 摄像头状态                                */
/************************************************************************/
CameraStatusType modhotplug_GetCameraStatus();

/************************************************************************/
/* 功能  ： 外部模块设置摄像头开关,控制是否产生黑色特殊数据流                */
/* 参数说明 ：    无                                                    */
/* 返回值 ：                                 */
/************************************************************************/
void modhotplug_CtrlCamera(bool bOpen, bool bSpecStream, bool bForce = false);
#endif //#ifdef IF_SUPPORT_VIDEO

#ifdef IF_SUPPORT_HDMI
/************************************************************************/
/* 功能  ： 扩展屏是否已经连接                                          */
/* 参数说明 ：                                                          */
/* 返回值 ： true已经连接，false未连接                                  */
/************************************************************************/
bool modhotplug_IsHdmiConnected();

/************************************************************************/
/* 功能  ： 设置扩展屏开关                                                */
/* 参数说明 ：                                                          */
/* 返回值 ： true设置成功，false设置失败                                  */
/************************************************************************/
bool modhotplug_SetHdmiSwitch(bool bEnable);

/************************************************************************/
/* 功能  ： 读取扩展屏开关                                                */
/* 参数说明 ：                                                          */
/* 返回值 ： true 开，false 关                                  */
/************************************************************************/
bool modhotplug_GetHdmiSwitch();

/************************************************************************/
/* 功能  ： 读取扩展屏功能开关                                          */
/* 参数说明 ：                                                          */
/* 返回值 ： true 开，false 关                                  */
/************************************************************************/
bool modhotplug_IsHdmiEnable();

/************************************************************************/
/* 功能  ： 读取扩展屏设备信息                                          */
/* 参数说明 ：                                                          */
/* 返回值 ：                                                             */
/************************************************************************/
void modhotplug_GetHdmiInfo(DskDisplayDevInfo & info);
#endif //#ifdef IF_SUPPORT_HDMI

#endif // _MOD_HOTPLUG_H_
