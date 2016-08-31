#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "LoadDataFilterOptions.h"
#include "FileFormatType.h"
#include "System/String.h"
#include "Constants.h"
//#include "System/Single.h"
#include "System/UInt16.h"
#include "CountryCode.h"
#include "MemorySetting.h"
#include "System/Double.h"
#include "LoadFormat.h"
#include "PaperSizeType.h"
#include "System/Int32.h"
#define STATIC_LOADOPTIONS() 

namespace Aspose {
namespace Cells {
class VentureLicense;
class LightCellsDataHandler;
class InterruptMonitor;
class LoadDataOption;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API LoadOptions : public Aspose::Cells::System::Object
#else	class LoadOptions : public Aspose::Cells::System::Object
#endif


	{
	protected:

			Aspose::Cells::LoadFormat m_LoadFormat;
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::VentureLicense> mVentureLicense;
			intrusive_ptr<Aspose::Cells::System::String> m_password;
			bool m_ParsingFormulaOnOpen;
			intrusive_ptr<Aspose::Cells::LoadDataOption> m_DataOptions;
			Aspose::Cells::CountryCode m_Language;
			Aspose::Cells::CountryCode m_Region;
			intrusive_ptr<Aspose::Cells::System::String> m_StandardFont;
			Aspose::Cells::System::UInt16 m_StandardFontSize;
			intrusive_ptr<Aspose::Cells::InterruptMonitor> m_InterruptMonitor;
			bool m_IgnoreNotPrinted;
			bool m_IgnoreEmptyCells;
			bool m_CheckExcelRestriction;
			Aspose::Cells::LoadDataFilterOptions m_Filters;
			intrusive_ptr<Aspose::Cells::LightCellsDataHandler> m_DataHandler;
			Aspose::Cells::MemorySetting m_PerfType;
	public:

			intrusive_ptr<Aspose::Cells::VentureLicense> GetVentureLicense();
			void SetVentureLicense(intrusive_ptr<Aspose::Cells::VentureLicense> value);
			Aspose::Cells::LoadFormat GetLoadFormat();
			static intrusive_ptr<Aspose::Cells::LoadOptions> Create(Aspose::Cells::FileFormatType type);
			void SetLoadFormat(Aspose::Cells::LoadFormat format);
			 LoadOptions();
			 LoadOptions(Aspose::Cells::LoadFormat loadFormat);
			intrusive_ptr<Aspose::Cells::System::String> GetPassword();
			void SetPassword(intrusive_ptr<Aspose::Cells::System::String> value);
			bool GetParsingFormulaOnOpen();
			void SetParsingFormulaOnOpen(bool value);
			bool GetLoadDataAndFormatting();
			void SetLoadDataAndFormatting(bool value);
			Aspose::Cells::System::Int32 paperSizeUser;
			void SetPaperSize(Aspose::Cells::PaperSizeType type);
			bool GetLoadDataOnly();
			void SetLoadDataOnly(bool value);
			bool GetOnlyLoadDocumentProperties();
			void SetOnlyLoadDocumentProperties(bool value);
			intrusive_ptr<Aspose::Cells::LoadDataOption> GetLoadDataOptions();
			void SetLoadDataOptions(intrusive_ptr<Aspose::Cells::LoadDataOption> value);
			Aspose::Cells::CountryCode GetLanguageCode();
			void SetLanguageCode(Aspose::Cells::CountryCode value);
			Aspose::Cells::CountryCode GetRegion();
			void SetRegion(Aspose::Cells::CountryCode value);
			bool m_ConvertNumericData;
			bool GetConvertNumericData();
			void SetConvertNumericData(bool value);
			bool IsFontNameSet;
			bool IsFontSizeSet;
			intrusive_ptr<Aspose::Cells::System::String> GetStandardFont();
			void SetStandardFont(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::Double GetStandardFontSize();
			void SetStandardFontSize(Aspose::Cells::System::Double value);
			intrusive_ptr<Aspose::Cells::InterruptMonitor> GetInterruptMonitor();
			void SetInterruptMonitor(intrusive_ptr<Aspose::Cells::InterruptMonitor> value);
			bool GetIgnoreNotPrinted();
			void SetIgnoreNotPrinted(bool value);
			bool GetIgnoreEmptyCells();
			void SetIgnoreEmptyCells(bool value);
			bool GetCheckExcelRestriction();
			void SetCheckExcelRestriction(bool value);
			Aspose::Cells::LoadDataFilterOptions GetLoadDataFilterOptions();
			void SetLoadDataFilterOptions(Aspose::Cells::LoadDataFilterOptions value);
			intrusive_ptr<Aspose::Cells::LightCellsDataHandler> GetLightCellsDataHandler();
			void SetLightCellsDataHandler(intrusive_ptr<Aspose::Cells::LightCellsDataHandler> value);
			Aspose::Cells::MemorySetting GetMemorySetting();
			void SetMemorySetting(Aspose::Cells::MemorySetting value);
			 virtual void Copy(intrusive_ptr<Aspose::Cells::LoadOptions> source);
		public:
			virtual ~LoadOptions();
	};

}

}
