#pragma once
#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_EXTERNALSHEET() 


namespace Aspose {
namespace Cells {
	class ExternalSheet : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::UInt16 SupbookIndex;
			Aspose::Cells::System::UInt16 FirstSheet;
			Aspose::Cells::System::UInt16 LastSheet;
			 ExternalSheet(Aspose::Cells::System::Int32 SupbookIndex , Aspose::Cells::System::Int32 FirstSheet , Aspose::Cells::System::Int32 LastSheet);
			bool Equals(intrusive_ptr<Aspose::Cells::ExternalSheet> es);
			 ExternalSheet();
		public:
			virtual ~ExternalSheet();
	};

}

}
