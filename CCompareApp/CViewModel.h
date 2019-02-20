#ifndef C_VIEWMODEL_H
#define C_VIEWMODEL_H
#include <afxwin.h>

//Forward Declaration of all the class that is require 
//by the CViewModel.
struct CResource;
/************************************************************
*@brief
*  The base class to every UI Object
*  Its expose the UI 
*************************************************************/
struct CViewModel : public CCmdTarget
{
  virtual ~CViewModel();
protected:
  CViewModel(CResource & Resource);
  /***************************************
  *@brief
  *  The function will be use to get the
  *  current application resource 
  * @return {CResource &} 
  ****************************************/
  virtual CResource&         GetResource();
  virtual const CResource &  GetResource()const;

  /*******************************************************
  * @brief
  *   The function will be used to raise the property change
  *  model object.
  ********************************************************/
  virtual void RaisePropertyChanged(const CString & Name);
protected:
  DECLARE_MESSAGE_MAP();
private:
  CResource &__Resource;
};

#endif