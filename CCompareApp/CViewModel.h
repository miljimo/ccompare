#ifndef C_VIEWMODEL_H
#define C_VIEWMODEL_H
#include <afxwin.h>

//Forward Declaration of all the class that is require 


/************************************************************
*@brief
*  The base class to every UI Object
*  Its expose the UI 
*************************************************************/

struct CViewModel : public CCmdTarget
{
  virtual ~CViewModel();

  /*****************************************************************
  * @brief
  *   The command msg event is use to handle all event send to the target object.
  * @param{UINT}
  * @param{int}
  * @param{void*}
  * @param{AFX_CMDHANDLERINFO*}
  ******************************************************************/
  virtual BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra,
                AFX_CMDHANDLERINFO* pHandlerInfo)override;
protected:
  CViewModel();

protected:
  DECLARE_MESSAGE_MAP();
private:

};

#endif