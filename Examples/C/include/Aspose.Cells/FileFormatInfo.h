#pragma once
#include "System/Object.h"
#include "System/Guid.h"
#include "LoadFormat.h"
#include "FileFormatType.h"
#define STATIC_FILEFORMATINFO() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API FileFormatInfo : public Aspose::Cells::System::Object
#else	class FileFormatInfo : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::FileFormatType m_FileFormatType;
			bool m_IsEncrypted;
			bool m_IsDefaultEncrypted;
			bool m_IsProtectedByRMS;
			intrusive_ptr<Aspose::Cells::System::Guid> m_Clsid;
			bool IsProtectedByRMS();
			bool IsEncrypted();
			bool IsDefaultEncrypted();
			void SetDefaultEncrypted(bool f);
			Aspose::Cells::FileFormatType GetFileFormatType();
			Aspose::Cells::LoadFormat GetLoadFormat();
			 FileFormatInfo();
		public:
			virtual ~FileFormatInfo();
	};

}

}
