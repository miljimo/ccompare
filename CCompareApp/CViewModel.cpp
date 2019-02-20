#include "CViewModel.h"
#include "CResource.h"


BEGIN_MESSAGE_MAP(CViewModel, CCmdTarget)

END_MESSAGE_MAP()
/*************************************************************************
* @brief
*   The constructor for the base viewmodel.
*   CViewModel : this is the base class that 
*   expose all the UI interface.
* @param{CResource &} the parameter is use to pass
*  application resource down to each ViewModel.
**************************************************************************/
CViewModel::CViewModel(CResource & Resource)
  :__Resource(Resource)
{

}

/**************************************************************************
* @brief
*   The function is use to send view update to the
*   bind UI that is listening to event send 
*@pram{const CString&} propertyName the name of the property that changes.
**************************************************************************/
void CViewModel::RaisePropertyChanged(const CString& propertyName)
{
  // Do the clever stuff here.
}


/**************************************************************************
* @brief
*   The function is use to send view update to the
*   bind UI that is listening to event send
*@pram{const CString&} propertyName the name of the property that changes.
**************************************************************************/
CResource & CViewModel::GetResource()
{
  return (static_cast<CResource&>(this->__Resource));
}


/**************************************************************************
* @brief
*   The function is use to send view update to the
*   bind UI that is listening to event send
*@pram{const CString&} propertyName the name of the property that changes.
**************************************************************************/
const CResource & CViewModel::GetResource() const
{
  return (static_cast<const CResource&>(this->__Resource));
}


/***********************************************************************
*@brief
* Clear up an resource created by the class 
***********************************************************************/
CViewModel::~CViewModel()
{

}