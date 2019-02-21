#include "CViewModel.h"



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
CViewModel::CViewModel() : 
CCmdTarget()
{

}



/***********************************************************************
*@brief
* Clear up an resource created by the class 
***********************************************************************/
CViewModel::~CViewModel()
{

}