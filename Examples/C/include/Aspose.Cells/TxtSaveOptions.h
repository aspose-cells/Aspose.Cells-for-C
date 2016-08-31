#pragma once
//#include "System/StringHelperPal.h"
#include "TxtValueQuoteType.h"
#include "CellValueFormatStrategy.h"
#include "System/Object.h"
#include "System/Text/Encoding.h"
#include "System/String.h"
#include "System/Char.h"
#include "SaveOptions.h"
//#include "System/CharHelper.h"
#include "SaveFormat.h"
//#include "System/Int32.h"
#define STATIC_TXTSAVEOPTIONS() 

namespace Aspose {
namespace Cells {
class WorkbookSettings;
class LightCellsDataProvider;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API TxtSaveOptions : public Aspose::Cells::SaveOptions
#else	class TxtSaveOptions : public Aspose::Cells::SaveOptions
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> m_separator;
			intrusive_ptr<Aspose::Cells::System::Text::Encoding> encoding;
			Aspose::Cells::TxtValueQuoteType m_QuoteType;
			Aspose::Cells::CellValueFormatStrategy m_FormatStrategy;
	public:

			 TxtSaveOptions();
			 TxtSaveOptions(Aspose::Cells::SaveFormat format);
			 TxtSaveOptions(Aspose::Cells::SaveFormat format , intrusive_ptr<Aspose::Cells::SaveOptions> options);
			Aspose::Cells::System::Char GetSeparator();
			void SetSeparator(Aspose::Cells::System::Char value);
			intrusive_ptr<Aspose::Cells::System::String> GetSeparatorString();
			void SetSeparatorString(intrusive_ptr<Aspose::Cells::System::String> value);
			bool IsChar();
			bool IsDefaultEncoding;
			intrusive_ptr<Aspose::Cells::System::Text::Encoding> GetEncoding();
			void SetEncoding(intrusive_ptr<Aspose::Cells::System::Text::Encoding> value);
			static intrusive_ptr<Aspose::Cells::TxtSaveOptions> Convert(intrusive_ptr<Aspose::Cells::WorkbookSettings> settings , Aspose::Cells::SaveFormat saveFormat , intrusive_ptr<Aspose::Cells::SaveOptions> saveOptions);
			bool GetAlwaysQuoted();
			void SetAlwaysQuoted(bool value);
			Aspose::Cells::TxtValueQuoteType GetQuoteType();
			void SetQuoteType(Aspose::Cells::TxtValueQuoteType value);
			Aspose::Cells::CellValueFormatStrategy GetFormatStrategy();
			void SetFormatStrategy(Aspose::Cells::CellValueFormatStrategy value);
			intrusive_ptr<Aspose::Cells::LightCellsDataProvider> GetLightCellsDataProvider();
			void SetLightCellsDataProvider(intrusive_ptr<Aspose::Cells::LightCellsDataProvider> value);
		public:
			virtual ~TxtSaveOptions();
	};

}

}
