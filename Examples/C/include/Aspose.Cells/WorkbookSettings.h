#pragma once
#include "DisplayDrawingObjects.h"
#include "System/UInt16.h"
#include "System/Double.h"
#include "ProtectionType.h"
#include "System/Int16.h"
//#include "System/StringHelperPal.h"
#include "UpdateLinksType.h"
#include "CountryCode.h"
#include "PaperSizeType.h"
//#include "System/GC.h"
#include "System/Char.h"
#include "ExcelVersion.h"
#include "Constants.h"
#include "System/Collections/Hashtable.h"
#include "System/Globalization/CultureInfo.h"
#include "System/Object.h"
#include "System/Text/Encoding.h"
//#include "System/Single.h"
#include "System/Byte.h"
#include "MemorySetting.h"
#include "System/String.h"
#include "FileFormatType.h"
#include "CalcModeType.h"
#include "System/Int32.h"
#include "EncryptionType.h"
#define STATIC_WORKBOOKSETTINGS() 

namespace Aspose {
namespace Cells {
class BookExtSettings;
class Palette;
class IFormulaCallBack;
class LoadOptions;
class WriteProtection;
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Markup {
class SmartTagOptions;
}
}
}
namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class FormatRelInfo;
}
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataKeepFileVersion;
}
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API WorkbookSettings : public Aspose::Cells::System::Object
#else	class WorkbookSettings : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* m_workbook;
			intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> m_FormatRelInfo;
			bool m_IsShared;
			intrusive_ptr<Aspose::Cells::Palette> m_Palette;
			bool m_EnableMacros;
			bool m_Date1904;
			bool m_PrecisionAsDisplayed;
			Aspose::Cells::DisplayDrawingObjects m_DisplayDrawingObjects;
			bool m_Iteration;
			Aspose::Cells::System::Int32 m_MaxIteration;
			Aspose::Cells::System::Double m_MaxChange;
			Aspose::Cells::CalcModeType m_calcMode;
			Aspose::Cells::System::Int32 m_CalcStackSize;
			bool m_IsR1C1Style;
			bool m_RecalculateBeforeSave;
			bool m_IsSheetTabsShown;
			Aspose::Cells::System::Int16 m_tabWidth;
			bool showHScrollBar;
			bool showVScrollBar;
			Aspose::Cells::CountryCode m_Language;
			intrusive_ptr<Aspose::Cells::System::String> m_Password;
			bool m_IsDefaultEncrypted;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> m_FontHash;
			bool m_isMinimized;
			bool m_isHidden;
			bool m_expRevision;
			Aspose::Cells::System::Int16 m_BookBool;
			bool m_ParsingFormulaOnOpen;
			intrusive_ptr<Aspose::Cells::Markup::SmartTagOptions> m_SmartTagOptions;
			intrusive_ptr<Aspose::Cells::System::String> m_StandardFont;
			Aspose::Cells::System::UInt16 m_StandardFontSize;
			Aspose::Cells::System::Int32 m_WindowHeight;
			Aspose::Cells::System::Int32 m_WindowWidth;
			Aspose::Cells::System::Int32 m_WindowTop;
			Aspose::Cells::System::Int32 m_WindowLeft;
			bool m_UpdateAdjacentCellsBorder;
			bool m_CheckComptiliblity;
			bool m_CheckExcelRestriction;
			intrusive_ptr<Aspose::Cells::OpenXML::DataKeepFileVersion> m_FileVersionInfo;
			Aspose::Cells::MemorySetting m_PerfType;
			intrusive_ptr<Aspose::Cells::IFormulaCallBack> m_FormulaCallBack;
	public:

			void Dispose();
			intrusive_ptr<Aspose::Cells::LoadOptions> _LoadOptions;
			Aspose::Cells::System::Int16 m_CodePage;
			bool Opening;
			intrusive_ptr<Aspose::Cells::BookExtSettings> m_ExtSettings;
			void InitExtSettings();
			bool IsDigitallySigned;
			intrusive_ptr<Aspose::Cells::BookExtSettings> GetExtSettings();
			void SetExtSettings(intrusive_ptr<Aspose::Cells::BookExtSettings> value);
			intrusive_ptr<Aspose::Cells::Palette> GetPalette();
			bool GetEnableMacros();
			void SetEnableMacros(bool value);
			 WorkbookSettings(intrusive_ptr<Aspose::Cells::Workbook> workbook , Aspose::Cells::CountryCode region);
			bool GetDate1904();
			void SetDate1904(bool value);
			Aspose::Cells::ProtectionType GetProtectionType();
			bool GetPrecisionAsDisplayed();
			void SetPrecisionAsDisplayed(bool value);
			Aspose::Cells::System::Byte CellCalcOption;
			bool GetReCalculateOnOpen();
			void SetReCalculateOnOpen(bool value);
			bool InnerCreateCalcChain;
			bool GetCreateCalcChain();
			void SetCreateCalcChain(bool value);
			Aspose::Cells::DisplayDrawingObjects GetDisplayDrawingObjects();
			void SetDisplayDrawingObjects(Aspose::Cells::DisplayDrawingObjects value);
			bool GetIteration();
			void SetIteration(bool value);
			Aspose::Cells::System::Int32 GetMaxIteration();
			void SetMaxIteration(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Double GetMaxChange();
			void SetMaxChange(Aspose::Cells::System::Double value);
			Aspose::Cells::CalcModeType GetCalcMode();
			void SetCalcMode(Aspose::Cells::CalcModeType value);
			Aspose::Cells::System::Int32 m_CalculationId;
			intrusive_ptr<Aspose::Cells::System::String> GetCalculationId();
			void SetCalculationId(intrusive_ptr<Aspose::Cells::System::String> value);
			bool IsCalcStackSizeSet;
			Aspose::Cells::System::Int32 GetCalcStackSize();
			void SetCalcStackSize(Aspose::Cells::System::Int32 value);
			bool IsR1C1Style();
			void SetIsR1C1Style(bool value);
			bool GetRecalculateBeforeSave();
			void SetRecalculateBeforeSave(bool value);
			Aspose::Cells::System::Int32 GetSheetTabBarWidth();
			void SetSheetTabBarWidth(Aspose::Cells::System::Int32 value);
			bool GetShowTabs();
			void SetShowTabs(bool value);
			Aspose::Cells::System::Int32 GetFirstVisibleTab();
			void SetFirstVisibleTab(Aspose::Cells::System::Int32 value);
			bool IsHScrollBarVisible();
			void SetIsHScrollBarVisible(bool value);
			bool IsVScrollBarVisible();
			void SetIsVScrollBarVisible(bool value);
			bool GetShared();
			void SetShared(bool value);
			Aspose::Cells::CountryCode GetLanguageCode();
			void SetLanguageCode(Aspose::Cells::CountryCode value);
			intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> GetFormatRelInfo();
			Aspose::Cells::CountryCode GetRegion();
			void SetRegion(Aspose::Cells::CountryCode value);
			intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> GetCultureInfo();
			void SetCultureInfo(intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> value);
			Aspose::Cells::System::Char GetNumberDecimalSeparator();
			void SetNumberDecimalSeparator(Aspose::Cells::System::Char value);
			Aspose::Cells::System::Char GetNumberGroupSeparator();
			void SetNumberGroupSeparator(Aspose::Cells::System::Char value);
			intrusive_ptr<Aspose::Cells::System::Text::Encoding> encoding;
			bool IsDefaultEncoding;
			intrusive_ptr<Aspose::Cells::System::Text::Encoding> GetEncoding();
			void SetEncoding(intrusive_ptr<Aspose::Cells::System::Text::Encoding> value);
			intrusive_ptr<Aspose::Cells::System::String> GetPassword();
			void SetPassword(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::WriteProtection> _WriteProtection;
			intrusive_ptr<Aspose::Cells::WriteProtection> GetWriteProtection();
			bool GetRecommendReadOnly();
			void SetRecommendReadOnly(bool value);
			bool IsWriteProtected();
			void SetIsWriteProtected(bool value);
			void SetWriteProtectedPassword(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::EncryptionType m_EncryptionType;
			Aspose::Cells::EncryptionType GetEncryptionType();
			void SetEncryptionType(Aspose::Cells::EncryptionType value);
			Aspose::Cells::System::Int32 m_KeyLength;
			Aspose::Cells::System::Int32 GetKeyLength();
			void SetKeyLength(Aspose::Cells::System::Int32 value);
			bool IsEncrypted();
			bool IsProtected();
			bool IsDefaultEncrypted();
			void SetIsDefaultEncrypted(bool value);
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> GetFontHash();
			void SetFontHash(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> value);
			bool IsMinimized();
			void SetIsMinimized(bool value);
			bool IsHidden();
			void SetIsHidden(bool value);
			bool GetExpRevision();
			void SetExpRevision(bool value);
			bool m_autoCompressPictures;
			bool GetAutoCompressPictures();
			void SetAutoCompressPictures(bool value);
			bool GetRemovePersonalInformation();
			void SetRemovePersonalInformation(bool value);
			bool GetHidePivotFieldList();
			void SetHidePivotFieldList(bool value);
			Aspose::Cells::System::Int16 GetBookBool();
			void SetBookBool(Aspose::Cells::System::Int16 value);
			Aspose::Cells::UpdateLinksType GetUpdateLinksType();
			void SetUpdateLinksType(Aspose::Cells::UpdateLinksType value);
			void Copy(intrusive_ptr<Aspose::Cells::WorkbookSettings> source);
			Aspose::Cells::System::Int32 GetLimittedRow();
			Aspose::Cells::System::Int32 GetLimittedColumn();
			bool IsParsedFormula;
			bool GetParsingFormulaOnOpen();
			void SetParsingFormulaOnOpen(bool value);
			intrusive_ptr<Aspose::Cells::Markup::SmartTagOptions> GetSmartTagOptions();
			intrusive_ptr<Aspose::Cells::Markup::SmartTagOptions> GetInternalSmartTagOptions();
			intrusive_ptr<Aspose::Cells::System::String> GetStandardFont();
			void SetStandardFont(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::UInt16 GetStarndardFontSizeInTwip();
			Aspose::Cells::System::Double GetStandardFontSize();
			void SetStandardFontSize(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Int32 GetWindowLeftTwips();
			void SetWindowLeftTwips(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Double GetWindowLeft();
			void SetWindowLeft(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetWindowLeftInch();
			void SetWindowLeftInch(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetWindowLeftCM();
			void SetWindowLeftCM(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Int32 GetWindowTopTwips();
			void SetWindowTopTwips(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Double GetWindowTop();
			void SetWindowTop(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetWindowTopInch();
			void SetWindowTopInch(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetWindowTopCM();
			void SetWindowTopCM(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Int32 GetWindowWidthTwips();
			void SetWindowWidthTwips(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Double GetWindowWidth();
			void SetWindowWidth(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetWindowWidthInch();
			void SetWindowWidthInch(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetWindowWidthCM();
			void SetWindowWidthCM(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Int32 GetWindowHeightTwips();
			void SetWindowHeightTwips(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Double GetWindowHeight();
			void SetWindowHeight(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetWindowHeightInch();
			void SetWindowHeightInch(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Double GetWindowHeightCM();
			void SetWindowHeightCM(Aspose::Cells::System::Double value);
			bool GetUpdateAdjacentCellsBorder();
			void SetUpdateAdjacentCellsBorder(bool value);
			bool IgnoreNotPrinted;
			bool IgnoreEmptyCells;
			void InitRead(Aspose::Cells::FileFormatType type , Aspose::Cells::ExcelVersion version , bool isInnerReader);
			bool GetCheckComptiliblity();
			void SetCheckComptiliblity(bool value);
			bool GetCheckExcelRestriction();
			void SetCheckExcelRestriction(bool value);
			Aspose::Cells::System::Byte RecoveryProperties;
			bool GetAutoRecover();
			void SetAutoRecover(bool value);
			bool GetCrashSave();
			void SetCrashSave(bool value);
			bool GetDataExtractLoad();
			void SetDataExtractLoad(bool value);
			bool GetRepairLoad();
			void SetRepairLoad(bool value);
			intrusive_ptr<Aspose::Cells::OpenXML::DataKeepFileVersion> GetFileVersionInfo();
			void SetFileVersionInfo(intrusive_ptr<Aspose::Cells::OpenXML::DataKeepFileVersion> value);
			intrusive_ptr<Aspose::Cells::OpenXML::DataKeepFileVersion> GetInternalFileVersionInfo();
			intrusive_ptr<Aspose::Cells::System::String> GetBuildVersion();
			void SetBuildVersion(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::MemorySetting GetMemorySetting();
			void SetMemorySetting(Aspose::Cells::MemorySetting value);
			Aspose::Cells::System::Int32 paperSizeUser;
			Aspose::Cells::PaperSizeType GetPaperSize();
			void SetPaperSize(Aspose::Cells::PaperSizeType value);
			intrusive_ptr<Aspose::Cells::IFormulaCallBack> GetFormulaCallBack();
			void SetFormulaCallBack(intrusive_ptr<Aspose::Cells::IFormulaCallBack> value);
			 WorkbookSettings();
		public:
			virtual ~WorkbookSettings();
	};

}

}
