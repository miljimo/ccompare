#include <MsXml2.h>
#include "CResourceDictionary.h"


CResourceDictionary::CResourceDictionary(const CString & File)
  :__FileName(File)
{
  XMLDoc_Ptr = nullptr;

  if (IsExist(File)){
    auto  xmlDoc = new ::XMLDocument("Msxml2.DOMDocument.3.0");
    XMLDoc_Ptr = ::XMLDocument::lpoc
  }
}