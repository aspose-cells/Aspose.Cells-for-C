#pragma once
#include "System/String.h"
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "WarningType.h"
#define STATIC_WARNINGINFO() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API WarningInfo : public Aspose::Cells::System::Object
#else	class WarningInfo : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::WarningType m_WarningType;
			intrusive_ptr<Aspose::Cells::System::String> m_Description;
	public:

			 WarningInfo(Aspose::Cells::WarningType warningType , intrusive_ptr<Aspose::Cells::System::String> description);
			Aspose::Cells::WarningType GetWarningType();
			intrusive_ptr<Aspose::Cells::System::String> GetDescription();
			 WarningInfo();
		public:
			virtual ~WarningInfo();
	};

}

}
