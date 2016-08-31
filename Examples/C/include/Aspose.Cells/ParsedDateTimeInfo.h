#pragma once
#include "System/Object.h"
#include "DateTimeFieldType.h"
#include "System/Int32.h"
#include "CellValueType.h"
#include "ParsedInfo.h"
#define STATIC_PARSEDDATETIMEINFO() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class ParsedDateTimeInfo : public Aspose::Cells::Internal::Format::ParsedInfo
	{
	private:

			void Init_Vars();
			 static const Aspose::Cells::DateTimeFieldType DATE;
			 static const Aspose::Cells::DateTimeFieldType TIME;
			Aspose::Cells::DateTimeFieldType _fields;
	public:

			 virtual Aspose::Cells::CellValueType GetValueType();
			 virtual Aspose::Cells::System::Int32 GetRoughNumber();
			 virtual void Reset();
			void SetHasField(Aspose::Cells::DateTimeFieldType field);
			bool HasField(Aspose::Cells::DateTimeFieldType field);
			 ParsedDateTimeInfo();
		public:
			virtual ~ParsedDateTimeInfo();
	};

}

}

}

}
