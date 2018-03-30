#ifndef CDLGCONTRAST_H
#define CDLGCONTRAST_H

#include "setting/include/common.h"
#include "cdlgbasesubpage.h"

class qCheckBox;

class CDlgContrast : public CDlgBaseSubPage
{
    Q_OBJECT

public:
    explicit CDlgContrast(QWidget * parent = 0);
    ~CDlgContrast();

public:

    //通过控制获取已有配置数据，通过V层在界面上显示出来
    virtual bool LoadPageData();

    //通过控制获取配置数据，与GetPageData值比较，有改动时返回true
    virtual bool IsStatusChanged();

    //读取当前界面的配置，通过C层保存
    virtual bool SavePageData();

    //获取当前页面上的对比度
    int GetCurrentPageData();

    // 对输入框的数据进行验证
    virtual bool IsInputDataValid(InputDataErrorInfo & objErrorContent);

    //取得实例
    static CBaseDialog * CreateInstance()
    {
        return new CDlgContrast();
    }

    //用于初始化数据。在构造函数中调用。设置控件的属性、样式、数据等都在其中进行
    virtual void InitData();
public slots:
    void OnCmbBoxIndexChange(int iCurrentIndex);

private:
    //设置当前页面数据
    void SetCurrentPageData(int iContrastLevel);

private:
    //设置开关对应的滑块
    QComboBox * m_pCmbBoxContrast_level;
    bool m_bHaveEXP;
};

#endif // CDLGCONTRAST_H
