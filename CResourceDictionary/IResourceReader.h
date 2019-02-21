#include<afx.h>

struct CResourceDirectory;

struct ICResourceReader
{  
  virtual CResourceDirectory & Read(const CString &FileName) =  0;
};


class CXMLResourceReader : public ICResourceReader
{
public:
  virtual CResourceDirectory & Read(const CString &FileName);
protected:
  virtual bool const IsFileExists(const CString &FileName);
private:
    
};