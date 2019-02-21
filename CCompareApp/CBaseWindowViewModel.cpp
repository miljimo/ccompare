#include "CBaseWindowViewModel.h"


CBaseWindowViewModel::CBaseWindowViewModel():
CViewModel()
{
  __Title = CString("MZX Compare");
}


/***********************************************
* @brief
* Get the current window Object.
* @return {CString const } Title
*************************************************/
const CString CBaseWindowViewModel::GetTitle()const
{
  return __Title;
}

/***********************************************
* @brief
* Set the Window property and update the UI
* @param {CString const & } Title to update
*************************************************/
 void CBaseWindowViewModel::SetTitle(CString const &Title)
{
  if (Title != __Title){
    __Title =  Title;
  }
}

/*********************************************
* @brief
*   destroy all object created by this class.
*   For safy, the function should not delete any
*   object  it did not create.
**********************************************/
CBaseWindowViewModel::~CBaseWindowViewModel()
{

}