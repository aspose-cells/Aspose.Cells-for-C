#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "System/Int32.h"
#include "CellValueType.h"
#include "System/String.h"
#define STATIC_PARSEDINFO() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class ParsedInfo : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Object> _value;
			intrusive_ptr<Aspose::Cells::System::String> _format;
	public:

			 virtual Aspose::Cells::CellValueType GetValueType();
			 virtual Aspose::Cells::System::Int32 GetRoughNumber();
			intrusive_ptr<Aspose::Cells::System::Object> GetValue();
			 virtual void Reset();
			void SetValue(intrusive_ptr<Aspose::Cells::System::Object> value);
			void SetFormat(intrusive_ptr<Aspose::Cells::System::String> format);
			intrusive_ptr<Aspose::Cells::System::String> GetFormat();
			 ParsedInfo();
		public:
			virtual ~ParsedInfo();
	};

}

}

}

}
