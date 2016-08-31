#pragma once
#include "System/Byte.h"
//#include "System/IO/StreamReader.h"
#include "DataTheme.h"
//#include "System/IO/Directory.h"
#include "System/String.h"
#include "FileFormatType.h"
#include "System/Array1D.h"
#include "License/VentureLicense.h"
//#include "System/IO/DirectoryInfo.h"
//#include "System/Convert.h"
//#include "System/IO/Path.h"
//#include "System/Boxing.h"
#include "System/Drawing/Color.h"
//#include "System/IO/FileAccess.h"
//#include "System/IO/BinaryReader.h"
#include "System/Int32.h"
//#include "System/IO/FileStream.h"
//#include "System/Collections/ArrayList.h"
#include "SaveFormat.h"
#include "System/Collections/Hashtable.h"
//#include "System/IO/File.h"
//#include "System/IO/FileMode.h"
#include "ExcelVersion.h"
#include "BuiltinStyleType.h"
//#include "System/Text/Encoding.h"
#include "System/Object.h"
//#include "System/Exception.h"
//#include "System/Math.h"
//#include "System/IO/FileShare.h"
#include "System/IO/Stream.h"
#include "ThemeColorType.h"
//#include "System/StringHelperPal.h"
//#include "System/Int64.h"
//#include "System/IO/SeekOrigin.h"
//#include "System/ArgumentException.h"
//#include "System/Int16.h"
#include "System/IDisposable.h"
//#include "System/GC.h"
//#include "System/UInt16.h"
#include "System/Double.h"
#include "License/VentureLicenseState.h"
#include "System/IO/MemoryStream.h"
#define STATIC_WORKBOOK() 

namespace Aspose {
namespace Cells {
namespace Properties {
class BuiltInDocumentPropertyCollection;
class ContentTypePropertyCollection;
class CustomDocumentPropertyCollection;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataKeepWhole;
}
}
}
namespace Aspose {
namespace Cells {
namespace Markup {
class CustomXmlPartCollection;
}
}
}
namespace Aspose {
namespace Ss {
class FileSystem;
}
}
namespace Aspose {
namespace Cells {
class InterruptMonitor;
class ICustomFunction;
class WorksheetCollection;
class StyleCollection;
class CalculationOptions;
class DataSorter;
class WorkbookSettings;
class ReplaceOptions;
class Style;
class SaveOptions;
class LoadOptions;
class CellsColor;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API Workbook : public Aspose::Cells::System::IDisposable , public Aspose::Cells::System::Object
#else	class Workbook : public Aspose::Cells::System::IDisposable , public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::WorkbookSettings> m_settings;
			intrusive_ptr<Aspose::Cells::WorksheetCollection> m_Worksheets;
			void InitRead(Aspose::Cells::FileFormatType type , bool isInner);
			void InnerOpen(intrusive_ptr<Aspose::Cells::System::String> fileName , intrusive_ptr<Aspose::Cells::LoadOptions> loadOptions);
			void InnerOpen(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , intrusive_ptr<Aspose::Cells::LoadOptions> loadOptions , bool init);
			void OnlyLoadDocumentProperties(intrusive_ptr<Aspose::Ss::FileSystem> fs);
			intrusive_ptr<Aspose::Cells::System::String> m_FileName;
			void SetInternalFileName(intrusive_ptr<Aspose::Cells::System::String> fileName);
			intrusive_ptr<Aspose::Cells::DataSorter> m_DataSorter;
			Aspose::Cells::ExcelVersion m_ExcelVersion;
			void InitExcelLimitation(Aspose::Cells::FileFormatType fileFormatType);
			static Aspose::Cells::ExcelVersion GetExcelVersion(Aspose::Cells::FileFormatType fileFormatType , Aspose::Cells::ExcelVersion version , bool limitAsXls);
			void ConvertVersion(Aspose::Cells::ExcelVersion oldVersion , Aspose::Cells::ExcelVersion newVersion);
			void Excel2003To2010();
			void Excel2010To2003();
			intrusive_ptr<Aspose::Cells::InterruptMonitor> m_InterruptMonitor;
			intrusive_ptr<Aspose::Cells::System::String> m_ribbonXml;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> _odsMacrosPool;
			static Aspose::Cells::VentureLicenseState DecodeVentureLicense(intrusive_ptr<Aspose::Cells::VentureLicense> ventureLicense , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>>& ventureWatermark);
			intrusive_ptr<Aspose::Cells::System::Object> mVentureLicense;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> AsposeCellsWatermark;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Static_Array_Init_AsposeCellsWatermark();
			static intrusive_ptr<Aspose::Cells::System::String> DecodeString(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			bool m_Dispose;
	public:

			intrusive_ptr<Aspose::Cells::System::String> GetMappedFontName(intrusive_ptr<Aspose::Cells::System::String> fontName);
			intrusive_ptr<Aspose::Cells::WorkbookSettings> GetSettings();
			void SetSettings(intrusive_ptr<Aspose::Cells::WorkbookSettings> value);
			 Workbook();
			 Workbook(Aspose::Cells::FileFormatType fileFormatType);
			 Workbook(intrusive_ptr<Aspose::Cells::System::String> file);
			 Workbook(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			 Workbook(intrusive_ptr<Aspose::Cells::System::String> file , intrusive_ptr<Aspose::Cells::LoadOptions> loadOptions);
			 Workbook(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , intrusive_ptr<Aspose::Cells::LoadOptions> loadOptions);
			void Initialize();
			void ClearAdditional();
			void InitFormulaEngine();
			void ParseFormulas();
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> SaveToStream();
			void Save(intrusive_ptr<Aspose::Cells::System::String> fileName);
			void Save(intrusive_ptr<Aspose::Cells::System::String> fileName , Aspose::Cells::SaveFormat saveFormat);
			void Save(intrusive_ptr<Aspose::Cells::System::String> fileName , intrusive_ptr<Aspose::Cells::SaveOptions> saveOptions);
			void Save(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , Aspose::Cells::SaveFormat saveFormat);
			void Save(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , intrusive_ptr<Aspose::Cells::SaveOptions> saveOptions);
			intrusive_ptr<Aspose::Cells::WorksheetCollection> GetWorksheets();
			bool IsLicensed();
			intrusive_ptr<Aspose::Cells::StyleCollection> GetStyles();
			void RemoveUnusedStyles();
			intrusive_ptr<Aspose::Cells::Style> CreateStyle();
			intrusive_ptr<Aspose::Cells::Style> CreateBuiltinStyle(Aspose::Cells::BuiltinStyleType type);
			intrusive_ptr<Aspose::Cells::CellsColor> CreateCellsColor();
			Aspose::Cells::System::Int32 Replace(intrusive_ptr<Aspose::Cells::System::String> placeHolder , intrusive_ptr<Aspose::Cells::System::String> newValue);
			Aspose::Cells::System::Int32 Replace(intrusive_ptr<Aspose::Cells::System::String> placeHolder , Aspose::Cells::System::Int32 newValue);
			Aspose::Cells::System::Int32 Replace(intrusive_ptr<Aspose::Cells::System::String> placeHolder , Aspose::Cells::System::Double newValue);
			Aspose::Cells::System::Int32 Replace(intrusive_ptr<Aspose::Cells::System::String> placeHolder , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> newValues , bool isVertical);
			Aspose::Cells::System::Int32 Replace(intrusive_ptr<Aspose::Cells::System::String> placeHolder , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> newValues , bool isVertical);
			Aspose::Cells::System::Int32 Replace(intrusive_ptr<Aspose::Cells::System::String> placeHolder , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> newValues , bool isVertical);
			Aspose::Cells::System::Int32 Replace(bool boolValue , intrusive_ptr<Aspose::Cells::System::Object> newValue);
			Aspose::Cells::System::Int32 Replace(Aspose::Cells::System::Int32 intValue , intrusive_ptr<Aspose::Cells::System::Object> newValue);
			Aspose::Cells::System::Int32 Replace(intrusive_ptr<Aspose::Cells::System::String> placeHolder , intrusive_ptr<Aspose::Cells::System::String> newValue , intrusive_ptr<Aspose::Cells::ReplaceOptions> options);
			void Copy(intrusive_ptr<Aspose::Cells::Workbook> source);
			void Combine(intrusive_ptr<Aspose::Cells::Workbook> secondWorkbook);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Drawing::Color*>> GetColors();
			intrusive_ptr<Aspose::Cells::Style> GetStyleInPool(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 GetCountOfStylesInPool();
			intrusive_ptr<Aspose::Cells::Style> GetNamedStyle(intrusive_ptr<Aspose::Cells::System::String> name);
			void ChangePalette(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Int32 index);
			bool IsColorInPalette(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color);
			void CalculateFormula();
			void CalculateFormula(bool ignoreError);
			void CalculateFormula(bool ignoreError , intrusive_ptr<Aspose::Cells::ICustomFunction> customFunction);
			void ClearFormulaValues();
			void CalculateFormula(intrusive_ptr<Aspose::Cells::CalculationOptions> options);
			intrusive_ptr<Aspose::Cells::Style> GetDefaultStyle();
			void SetDefaultStyle(intrusive_ptr<Aspose::Cells::Style> value);
			bool ValidateFormula(intrusive_ptr<Aspose::Cells::System::String> formula);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetMatchingColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> rawColor);
			bool IsDigitallySigned();
			intrusive_ptr<Aspose::Cells::System::String> GetFileName();
			void SetFileName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::DataSorter> GetDataSorter();
			void RemoveExternalLinks();
			intrusive_ptr<Aspose::Cells::OpenXML::DataKeepWhole> OpenXMLKeepData;
			void LoadOpenXMLKeepData(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			intrusive_ptr<Aspose::Cells::OpenXML::DataTheme> ThemeData;
			bool IsThemeModified;
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetThemeColor(Aspose::Cells::ThemeColorType type);
			void SetThemeColor(Aspose::Cells::ThemeColorType type , intrusive_ptr<Aspose::Cells::System::Drawing::Color> color);
			intrusive_ptr<Aspose::Cells::System::String> GetTheme();
			void CustomTheme(intrusive_ptr<Aspose::Cells::System::String> themeName , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Drawing::Color*>> colors);
			void CopyTheme(intrusive_ptr<Aspose::Cells::Workbook> source);
			intrusive_ptr<Aspose::Cells::System::String> GetFilePath();
			bool HasExernalLinks();
			void UpdateLinkedDataSource(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Workbook*>> exteralWorkbooks);
			intrusive_ptr<Aspose::Cells::Properties::BuiltInDocumentPropertyCollection> GetBuiltInDocumentProperties();
			intrusive_ptr<Aspose::Cells::Properties::CustomDocumentPropertyCollection> GetCustomDocumentProperties();
			Aspose::Cells::FileFormatType m_FileFormat;
			Aspose::Cells::FileFormatType GetFileFormat();
			void SetFileFormat(Aspose::Cells::FileFormatType value);
			void SetSavedFileFormatType(Aspose::Cells::FileFormatType value , bool limitAsXls);
			void SetInternalFileFormatType(Aspose::Cells::FileFormatType type);
			Aspose::Cells::ExcelVersion GetExcelVersion();
			void SetExcelVersion(Aspose::Cells::ExcelVersion value);
			bool GetIs2007Process();
			bool IsTemp2007();
			void CheckInterrupted();
			intrusive_ptr<Aspose::Cells::InterruptMonitor> GetInterruptMonitor();
			void SetInterruptMonitor(intrusive_ptr<Aspose::Cells::InterruptMonitor> value);
			intrusive_ptr<Aspose::Cells::Properties::ContentTypePropertyCollection> m_ContentTypeProperties;
			intrusive_ptr<Aspose::Cells::Properties::ContentTypePropertyCollection> GetContentTypeProperties();
			intrusive_ptr<Aspose::Cells::Markup::CustomXmlPartCollection> m_CustomXmlParts;
			intrusive_ptr<Aspose::Cells::Markup::CustomXmlPartCollection> GetCustomXmlParts();
			intrusive_ptr<Aspose::Cells::System::String> GetRibbonXml();
			void SetRibbonXml(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> GetODSKeepData();
			bool IsEval();
			intrusive_ptr<Aspose::Cells::System::String> GetWatermark();
			void SetVentureLicense(intrusive_ptr<Aspose::Cells::System::Object> ventureLicense);
			void Dispose();
		public:
			virtual ~Workbook();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}
