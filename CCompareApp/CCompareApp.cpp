#include<afx.h>
#include <afxwin.h>
#include "CCompareApp.h"


/*******************************************************************************
* @description
*   The MFC framework uses the MESSAGE_MAP archiecture to communicate between
* target command object and window objects.
* implemented in the base class CCmdTarget and CWnd class.
*
@Param {CCompareApp} The current application object
@Param {CWinApp} The base class of the application object.
********************************************************************************/
BEGIN_MESSAGE_MAP(CCompareApp, CWinApp)

END_MESSAGE_MAP()

/*****************************************************************
* @brief
*   The main constructor
*
******************************************************************/
CCompareApp::CCompareApp()
{

}

/******************************************************************
* @brief
*  The method is called when the Wnd object is ready to be initilised.
* @return {BOOL} Return True if success otherwise false.
******************************************************************/
BOOL CCompareApp::InitInstance()
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

/****************************************
* @brief
*   The function will get the current window object.
*    Cast it to the application framework window type.
****************************************/
CBaseWindow*  CCompareApp::GetWindow()
{
  CBaseWindow * Window_Ptr = nullptr;
  if (this->m_pMainWnd != nullptr)
       Window_Ptr = static_cast<CBaseWindow *>(this->m_pMainWnd);
  return Window_Ptr;
}

