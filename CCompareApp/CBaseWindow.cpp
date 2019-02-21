
#include "CBaseWindow.h"
#include "CBaseWindowViewModel.h"

/***********************************************************
* @brief
*   The function will be use to handle the message event of the window.
*   
***********************************************************/
BEGIN_MESSAGE_MAP(CBaseWindow, CFrameWnd)
ON_WM_PAINT()
END_MESSAGE_MAP()

/***********************************************************
* @brief
*  Parameterised constructor
*
************************************************************/
CBaseWindow::CBaseWindow(CBaseWindowViewModel &ViewModel) :
CFrameWnd(),
__ViewModel(ViewModel)
{
 this->Create(nullptr, __ViewModel.GetTitle());
}


/**********************************************************
*@brief
*  The method is use to paint the dialog object.
***********************************************************/
void CBaseWindow::OnPaint()
{
  //Do nothing
  CPaintDC dc(this);
  CRect rect;
  GetClientRect(&rect);
  dc.DrawText(_T("Project Compare : PJT Files"), -1, &rect, DT_SINGLELINE | DT_CENTER | DT_VCENTER);
}

/************************************************************
* @brief
*   The constructor is use to clean up all resource that require cleanup.
*************************************************************/
CBaseWindow::~CBaseWindow()
{

}







