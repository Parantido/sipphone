#ifndef CDLGLANGUAGE_H
#define CDLGLANGUAGE_H

#include "setting/include/common.h"
#include "cdlgbasesubpage.h"
#include <QDialog>

class CDlgLanguage : public CDlgBaseSubPage
{
    Q_OBJECT

public:
    explicit CDlgLanguage(QWidget * parent = 0);
    ~CDlgLanguage();

    static CBaseDialog * CreateInstance()
    {
        return new CDlgLanguage();
    }

private:

    //从V层读取当前界面的值
    //bool GetPageData(String *pData);

    //通过C层获取已有配置数据，通过V层在界面上显示出来
    virtual bool LoadPageData();

    //通过C层获取配置数据，与GetPageData值比较，有改动时返回true
    virtual bool IsStatusChanged();

    //从V层读取当前界面的配置，通过C层保存
    virtual bool SavePageData();

    //用于初始化数据。在构造函数中调用。设置控件的属性、样式、数据等都在其中进行
    virtual void InitData();

    virtual bool eventFilter(QObject * pObject, QEvent * pEvent);

private Q_SLOTS:
    void OnSaveLanguageData();

private:
    std::vector<yl::string> m_vecOrigName;
};

#endif // CDLGLANGUAGE_H
