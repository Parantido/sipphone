#ifndef _DLG_AUTOREDIAL_UI_H
#define _DLG_AUTOREDIAL_UI_H

#include "dlgbasetalkui.h"
///////////talkuilogic//////////
#include "talkuilogic/uilogicautoredialuibase.h"

#include "talkwidget.h"

namespace talkui
{

class CDlgAutoRedialUI : public CDlgBaseTalkUI, public CUILogicAutoRedialUIBase
{
public:
    explicit CDlgAutoRedialUI();
    virtual ~CDlgAutoRedialUI();

public:
    virtual void loadChildrenElements(xml_node & node);

private:
    virtual void LoadLayout();

    ////////////////////////////////继承自  dlgbasetalkui /////////////////////
public:
    // 初始化
    virtual void Init();
    // 释放数据，将窗口清空回复到初始化状态
    virtual void Uninit();

    // 刷新窗口
    virtual void UpdateWnd(bool bUIReturn = false);

public:
    //获取 processor
    virtual CBaseTalkUIProcessor * GetTalkUIProcessor();

public:
    //是否显示DTMF条
    virtual bool IsShowDtmfLine() const;
    // 是否显示切换话路的滚动条
    virtual bool IsShowSessionScrollBar();
    // 能否切换Session
    virtual bool IsChangeSession(int iKey = PHONE_KEY_UP);

public:
    //刷新通话UI数据  这边需要从processor 获取 数据 设置到通话UI子界面上
    virtual void RefreshTalkUIData();
    ////////////////////////////////继承自  dlgbasetalkui 结束/////////////////////

    ////////////////////////////////继承自  CUILogicAutoRedialUIBase /////////////////////
    //设置UILogic 数据
    virtual void SetUILogicData(void * pData, UPDATE_REASON eReason = UPDATE_DEFAULT);

public:
    virtual void UpdateAutoRedialNote(AUTOREDIAL_STATUS eAutoRedialStatus, yl::string strInfo,
                                      int nRemainRedialTimes, int nRedialInterval);
    ////////////////////////////////继承自  CUILogicAutoRedialUIBase 结束 /////////////////////

protected:
    virtual void SetContactInfo(CAutoRedialUIData * pAutoRedialUIData);
    virtual void SetRedialInfo(CAutoRedialUIData * pAutoRedialUIData);

    void ResetWidget();

    //界面控件
private:
    CTalkWidget m_talkWidget;

    xView* m_pFinishHintFrame;
    xImageView* m_pRedialIcon;
    xTextView* m_pRedialHint;
};

}       //namespace talkui

#endif
