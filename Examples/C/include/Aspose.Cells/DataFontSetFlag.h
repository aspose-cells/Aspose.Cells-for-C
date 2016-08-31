#pragma once
#include "DataFontSetFlagEnum.h"
#include "System/UInt32.h"
#include "System/Object.h"
#define STATIC_DATAFONTSETFLAG() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataFontSetFlag : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::UInt32 m_SetFlag;
	public:

			bool IsFlagSet(Aspose::Cells::OpenXML::DataFontSetFlagEnum flag);
			void SetFlag(Aspose::Cells::OpenXML::DataFontSetFlagEnum flag);
			 DataFontSetFlag();
		public:
			virtual ~DataFontSetFlag();
	};

}

}

}
