#include <afx.h>

struct CResource
{
  explicit CResource(const CString & Filename);
  virtual ~CResource();
private:
  CFile _File;
};