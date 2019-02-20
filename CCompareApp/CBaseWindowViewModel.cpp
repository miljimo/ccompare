#include "CBaseWindowViewModel.h"


CBaseWindowViewModel::CBaseWindowViewModel(CResource & Resouce):
CViewModel(Resouce)
{
  __Title = this->GetResource().GetObject<CString>("application.main.window.text.title");
}