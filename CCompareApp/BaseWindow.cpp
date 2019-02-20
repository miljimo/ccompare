
#include "BaseWindow.h"
#include "CBaseWindowViewModel.h"

/***********************************************************
* @brief
*   The function will be use to handle the message event of the window.
*   
***********************************************************/
BEGIN_MESSAGE_MAP(BaseWindow, CFrameWnd)
ON_WM_PAINT()
END_MESSAGE_MAP()

/***********************************************************
* @brief
*  The
*
************************************************************/
BaseWindow::BaseWindow(CBaseWindowViewModel &ViewModel) :
CFrameWnd(),
__ViewModel(ViewModel)
{
 this->Create(nullptr, __ViewModel.GetWindowTitle());
}








