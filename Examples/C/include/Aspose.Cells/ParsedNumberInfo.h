#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
//#include "System/Char.h"
#include "System/Int32.h"
#include "CellValueType.h"
#include "ParsedInfo.h"
#include "System/String.h"
#define STATIC_PARSEDNUMBERINFO() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class ParsedNumberInfo : public Aspose::Cells::Internal::Format::ParsedInfo
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> _currency;
			intrusive_ptr<Aspose::Cells::System::String> _percent;
			intrusive_ptr<Aspose::Cells::System::String> _plainValueString;
			bool _isE;
	public:

			 virtual Aspose::Cells::CellValueType GetValueType();
			 virtual Aspose::Cells::System::Int32 GetRoughNumber();
			 virtual void Reset();
			void SetCurrency(intrusive_ptr<Aspose::Cells::System::String> currency);
			intrusive_ptr<Aspose::Cells::System::String> GetCurrency();
			void SetPercent(intrusive_ptr<Aspose::Cells::System::String> percent);
			intrusive_ptr<Aspose::Cells::System::String> GetPercent();
			void SetIsE(bool isE);
			bool IsE();
			void SetPlainValueString(intrusive_ptr<Aspose::Cells::System::String> plain);
			intrusive_ptr<Aspose::Cells::System::String> GetPlainValueString();
			 ParsedNumberInfo();
		public:
			virtual ~ParsedNumberInfo();
	};

}

}

}

}
