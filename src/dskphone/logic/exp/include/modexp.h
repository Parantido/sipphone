#ifndef	 __MOD_EXP_H__
#define  __MOD_EXP_H__
#include "exp_struct.h"
#include "dsskey/include/dsskey_enumtypes.h"
#include "explogicdefine.h"

/******************************************************************
** ��������:   ��ȡEXP����
** ������      ��
** ����:       exp������
******************************************************************/
int exp_GetEXPNum();

/*******************************************************************
** ��������:   ��ȡEXP֧�ֵ�dsskey����
** ������      ��
** ����:       exp��dsskey����
*******************************************************************/
int exp_GetExpKeyNumByType(DEVICE_TYPE_DEF devType);

/*******************************************************************
** ��������:   ��ȡEXP����
** ������      ��
** ����:       ����Exp����ģ��ĵ�ǰEXP����
*******************************************************************/
DEVICE_TYPE_DEF exp_GetEXPType();

/*******************************************************************
** ��������:   ��ȡEXP����
** ������      ��
** ����:       ����Exp ��Ӧdsskey����
*******************************************************************/
DSSKEY_MODULE_TYPE exp_GetEXPModuleType();

/*******************************************************************
** ��������:	   �Ƿ�EXP���͵İ���
** ����:		   [iDssKeyID] DssKey��ID
** ����:		   true����EXP   false: ����EXP
*******************************************************************/
bool exp_IsEXPKey(int iDssKeyID);

/*******************************************************************
** ��������:   ��ȡEXP����������
** ������      ��
** ����:       exp ������
*******************************************************************/
int exp_GetMaxExpNum();

/*******************************************************************
** ��������:   exp���봦��
** ������      [in] iExpIndex:EXP����� eExpType��exp����
** ����:       true�������ɹ� false������ʧ��
*******************************************************************/
bool exp_OnExpInsert(int iExpIndex, DSSKEY_MODULE_TYPE eExpType);

/*******************************************************************
** ��������:   exp�γ�����
** ������      [in] iExpIndex:EXP����� eExpType��exp����
** ����:       true�������ɹ� false������ʧ��
*******************************************************************/
bool exp_OnExpRemove(int iExpIndex, DSSKEY_MODULE_TYPE eExpType);

/*******************************************************************
** ��������:   ��ʼ�� exp logic manager
** ������      eExtType: exp֧������
** ����:       true�� ��ʼ���ɹ�  false����ʼ��ʧ��
*******************************************************************/
bool exp_InitExt(DSSKEY_EXT_TYPE eExtType);

/*******************************************************************
** ��������:   �Ƿ���ʹ�ò�����չ̨
** ������      NULL
** ����:       true�� ����  false���ǲ���
*******************************************************************/
bool exp_GetExpColor();

/*******************************************************************
** ��������:   ����exp��ͼ��
** ������      [in] dsskeyID  [in] icon:ͼ������
** ����:       1�����óɹ�
*******************************************************************/
int exp_SetExpIcon(int dsskeyID, int icon);

/*******************************************************************
** ��������:   ����exp���ı����ڰ����޷����������ı�
** ������      [in] dsskeyID  pStrLabel:�ı�����
** ����:       1�����óɹ�
*******************************************************************/
int exp_SetExpLabel(int dsskeyID, const char * pStrLabel);

/*******************************************************************
** ��������:   ����exp�Աȶ�
** ������      [in] expIndex��exp���  constrast:�Աȶȸߵ�
** ����:       1�����óɹ�
*******************************************************************/
int exp_SetExpContrast(int expIndex, int constrast);

/*******************************************************************
** ��������:   ���� exp
** ������      [in] expIndex��exp���  
** ����:       1���ɹ�
*******************************************************************/
int exp_RefreshExp(int expIndex);

/*******************************************************************
** ��������:   ��ҳ
** ������      [in] expIndex��exp��ǰ���
** ����:       
*******************************************************************/
void exp_Exp39Switch(int iExpIndex);

/*******************************************************************
** ��������:   ˢĳ��exp dsskey�� ֻ��ˢ��չ̨dsskey������ˢ��ҳ����
** ������      led_status����״̬
** ����:   
*******************************************************************/
int exp_SetExpLEDStatus(int dsskeyId, int led_status);

/*************************************************************************
** ��������: ���ò�����չ̨��������������������dsskey͸����ʹ�ã�
** ������  pStrBackGround������ȫ·����nTransparentLevel Ϊdsskey������͸����
** ����:
**************************************************************************/
int exp_SetExpBackGround(const char * pStrBackGround, int nTransparentLevel = 1);

/*************************************************************************
** ��������: exp����ڵ�
** ������	bEnter�� �����˳�
** ����:
**************************************************************************/
int exp_EnterExpScreenSaver(bool bEnter);

/*************************************************************************
** ��������: exp���ñ���
** ������	expIndex��exp��� bkLight�� ����ȼ�
** ����:
**************************************************************************/
int exp_SetExpBKLight(int expIndex, int bkLight);

/*************************************************************************
** ��������: exp key�Ƿ��ڵ�ǰҳ
** ������	dsskey id
** ����:		true���ڵ�ǰҳ  false�����ڵ�ǰҳ
**************************************************************************/
bool exp_IsExpKeyInCurrentPage(int dsskeyID);

/*************************************************************************
** ��������: ���̷���һ��exp���ݶ���
** ������	
** ����:
**************************************************************************/
void exp_FlushExpList();

/***********************************************************************
** ��������:	ˢ��ҳ����
** ������   iExpIndex����չID��nKeyIndex����nKeyIndex������led_status��״̬
** ����:
************************************************************************/
int exp_SetExpLEDStatusByIndex(int iExpIndex, int nKeyIndex, int led_status);

/*************************************************************************
** ��������: ����exp �������ı�����
** ������	pStrLabel���ı�����
** ����:
**************************************************************************/
void exp_SetExpEditingText(const char * pStrLabel);

/*************************************************************************
** ��������: ����ȫ����չ̨�ı��������
** ������	nLightLevel��0-100��nIndex��exp��ţ�nExpIndexΪ-1��ʾ��ȫ����չ̨
** ����:
**************************************************************************/
void exp_EXPBackLightUpdate(int nLightLevel, int nIndex = -1);

/*************************************************************************
** ��������: ���ݻ�����������ʼ��exp
** ������	 NA
** ����:      NA
**************************************************************************/
void exp_InitExtFollowPhoneType();

/*************************************************************************
** ��������: Dump exp ģ����Ϣ
** ������	strInfo��Dump��Ϣ
** ����:     NA
**************************************************************************/
void exp_DumpExpModelInfo(yl::string& strDumpInfo);

void exp_SetExpKeyEdit(bool bEdit, int nDsskeyID = -1);
//��������ģʽʹ��
void exp_ExpFillWithColor(const EXP_FILL_COLOR & objExpColor, int nIndex = 0);
void exp_ExpFillWithPicture(const char * pStrPicture, int nIndex = 0);
void exp_ExpDrawText(const char * pStrText, int nIndex = 0);
void exp_ExpShowLogo(int nIndex = 0);

//������չ̨dsskeyͼ�ꡢ��ǩ����״̬����ʾ״̬
//iconͼ���š�pStrLabel��ʾ��ǩ��led_status��״̬��
//displayFlagĬ��ֵΪ1��ʾ��߰�����ǩ����룬�ұ߰�����ǩ�Ҷ��롣
//DT_EXP_SWITCH����dsskey��ʾ��ʽ�����⴦����displayFlag����ΪEXP_MSGFL_REVERSE | EXP_MSGFL_CENTER���з�ѡ��ʾ
int exp_SetExpKeyDisp(int dsskeyID, int icon, const char * pStrLabel, int led_status,
	int displayFlag = 1, int nDsskeyBgType = -1, const char * pStrIcon = NULL, int nStatus = 0,
	int nAuxiliaryStatus = 0);

// todo
//��ʼ��EHSģ��
bool dsskey_InitEHSData();
//to do
//�ͷ�exp��Դ
bool exp_UnInitExp();

#endif // !__MOD_EXP_H__