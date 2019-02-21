#ifndef BASE_WINDOW_VIEW_MODEL_H
#define BASE_WINDOW_VIEW_MODEL_H
#include <afx.h>
#include "CViewModel.h"

/*******************************************************************************************
* @brief
*  The main viewmodel for the main BaseWindow of the application.
*  The function is use to expose property that need to be show by the view.
********************************************************************************************/
struct CBaseWindowViewModel : protected CViewModel 
{
  //Get the  window model title
  CBaseWindowViewModel();

  /***********************************************
  * @brief
  * Get the current window Object.
  * @return {CString const } Title
  *************************************************/
  const CString GetTitle()const; 

  /***********************************************
  * @brief
  * Set the Window property and update the UI
  * @param {CString const & } Title to update
  *************************************************/
  void SetTitle(CString const &  Title);


  virtual ~CBaseWindowViewModel();
public:

protected:

private:
  //helper functions
  CString __Title;
private:
  //static members

};

#endif