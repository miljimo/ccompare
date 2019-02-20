#include <afxwin.h>


struct BaseWindow : public CFrameWnd
{
  BaseWindow(const CString & title){
    Create(nullptr, title);
  }
protected:
  DECLARE_MESSAGE_MAP()
  afx_msg void OnDestroy();
  afx_msg void OnCreate();
  afx_msg void OnPaint();
  
};


void BaseWindow::OnPaint()
{
  //Do nothing
  CPaintDC dc(this);
  CRect rect;
  GetClientRect(&rect);
  dc.DrawText(_T("Project Compare : PJT Files"), -1, &rect, DT_SINGLELINE | DT_CENTER | DT_VCENTER);
}

BEGIN_MESSAGE_MAP(BaseWindow, CFrameWnd)
  ON_WM_PAINT()
END_MESSAGE_MAP()

struct MyApp : public CWinApp
{

  MyApp(CString title) :CWinApp(){

  };
  virtual BOOL InitInstance()
  {
    bool result = false;
    this->m_pMainWnd = new BaseWindow("Project Compare: default");
    
    if (this->m_pMainWnd != nullptr)
    {
      this->m_pMainWnd->ShowWindow(TRUE);
      result = true;
    }
    
    return result;
  }
protected:

};



MyApp App("Hello World");