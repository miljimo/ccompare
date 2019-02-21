#include <afxwin.h>
#include "CBaseWindow.h"
#include "CBaseWindowViewModel.h"



struct MyApp : public CWinApp
{

  MyApp(CString title) :CWinApp(){

  };
  virtual BOOL InitInstance()
  {
    bool result = false;
    this->m_pMainWnd = new CBaseWindow(CBaseWindowViewModel());
    
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