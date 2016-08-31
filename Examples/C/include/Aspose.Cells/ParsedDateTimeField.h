#pragma once
#include "System/String.h"
#include "System/Object.h"
#include "System/Int32.h"
#include "DateTimeFieldType.h"
#define STATIC_PARSEDDATETIMEFIELD() 


namespace Aspose {
namespace Cells {
	class ParsedDateTimeField : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::DateTimeFieldType FieldType;
			Aspose::Cells::System::Int32 Value;
			intrusive_ptr<Aspose::Cells::System::String> Format;
			Aspose::Cells::System::Int32 PrefixEnd;
			Aspose::Cells::System::Int32 ValueEnd;
			Aspose::Cells::System::Int32 SuffixEnd;
			 ParsedDateTimeField();
		public:
			virtual ~ParsedDateTimeField();
	};

}

}
