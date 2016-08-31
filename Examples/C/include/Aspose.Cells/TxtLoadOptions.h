#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Text/Encoding.h"
#include "System/String.h"
//#include "System/CharHelper.h"
#include "System/Char.h"
#include "TxtLoadStyleStrategy.h"
#include "LoadFormat.h"
#include "LoadOptions.h"
//#include "System/Int32.h"
#define STATIC_TXTLOADOPTIONS() 

namespace Aspose {
namespace Cells {
class ICustomParser;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API TxtLoadOptions : public Aspose::Cells::LoadOptions
#else	class TxtLoadOptions : public Aspose::Cells::LoadOptions
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> m_separator;
			intrusive_ptr<Aspose::Cells::System::Text::Encoding> encoding;
			bool m_IsMultiEncoded;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::ICustomParser*>> preferredParsers;
			bool m_ConvertDate;
			bool m_UseCacheForConversion;
			Aspose::Cells::TxtLoadStyleStrategy m_LoadStyleStrategy;
			bool m_HasFormula;
	public:

			static intrusive_ptr<Aspose::Cells::LoadOptions> Create(Aspose::Cells::System::Char separator , bool convertNumericData , intrusive_ptr<Aspose::Cells::System::String> encoding);
			bool GetConvertNumericData();
			void SetConvertNumericData(bool value);
			 TxtLoadOptions();
			 TxtLoadOptions(Aspose::Cells::LoadFormat loadFormat);
			Aspose::Cells::System::Char GetSeparator();
			void SetSeparator(Aspose::Cells::System::Char value);
			intrusive_ptr<Aspose::Cells::System::String> GetSeparatorString();
			void SetSeparatorString(intrusive_ptr<Aspose::Cells::System::String> value);
			bool IsChar();
			bool IsDefaultEncoding;
			intrusive_ptr<Aspose::Cells::System::Text::Encoding> GetEncoding();
			void SetEncoding(intrusive_ptr<Aspose::Cells::System::Text::Encoding> value);
			bool IsMultiEncoded();
			void SetIsMultiEncoded(bool value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::ICustomParser*>> GetPreferredParsers();
			void SetPreferredParsers(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::ICustomParser*>> value);
			bool GetConvertDateTimeData();
			void SetConvertDateTimeData(bool value);
			bool GetUseCacheForConversion();
			void SetUseCacheForConversion(bool value);
			Aspose::Cells::TxtLoadStyleStrategy GetLoadStyleStrategy();
			void SetLoadStyleStrategy(Aspose::Cells::TxtLoadStyleStrategy value);
			bool HasFormula();
			void SetHasFormula(bool value);
			bool GetKeepExactFormat();
			void SetKeepExactFormat(bool value);
		public:
			virtual ~TxtLoadOptions();
	};

}

}
