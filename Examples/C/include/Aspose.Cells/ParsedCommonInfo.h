#pragma once
#include "System/Int32.h"
#include "ParsedInfo.h"
#include "CellValueType.h"
#include "System/Object.h"
#define STATIC_PARSEDCOMMONINFO() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class ParsedCommonInfo : public Aspose::Cells::Internal::Format::ParsedInfo
	{
	private:

			void Init_Vars();
			Aspose::Cells::CellValueType _type;
	public:

			 virtual Aspose::Cells::CellValueType GetValueType();
			 virtual Aspose::Cells::System::Int32 GetRoughNumber();
			 virtual void Reset();
			void SetValueType(Aspose::Cells::CellValueType t);
			 ParsedCommonInfo();
		public:
			virtual ~ParsedCommonInfo();
	};

}

}

}

}
