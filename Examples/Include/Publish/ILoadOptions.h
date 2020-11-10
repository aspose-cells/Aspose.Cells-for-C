#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Globalization/CultureInfo.h"
#include "Aspose.Cells.Systems/Double.h"

namespace Aspose {
	namespace Cells {
		enum LoadFormat;
		enum PaperSizeType;
		class ILoadDataOption;
		enum CountryCode;
		enum LoadDataFilterOptions;
		class ILightCellsDataHandler;
		enum MemorySetting;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents the options of loading the file.
			/// </summary>
			/// 
			/// 
	class ASPOSE_CELLS_API ILoadOptions : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the load format.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::LoadFormat GetLoadFormat()=0;
			/// <summary>
			/// Get the password of the workbook.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetPassword()=0;
			/// <summary>
			/// Set the password of the workbook.
			/// </summary>
			/// 
			/// 
			 virtual void SetPassword(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Indicates whether parsing the formula when reading the file.
			/// </summary>
			/// 
			/// <remarks>
			/// Only applies for Excel Xlsx, Xltx, Xltm, Xlsm file
			/// because the formulas in the files are stored with a string formula.
			/// </remarks>
			/// 
			/// 
			 virtual bool GetParsingFormulaOnOpen()=0;
			/// <summary>
			/// Indicates whether parsing the formula when reading the file.
			/// </summary>
			/// 
			/// <remarks>
			/// Only applies for Excel Xlsx, Xltx, Xltm, Xlsm file
			/// because the formulas in the files are stored with a string formula.
			/// </remarks>
			/// 
			/// 
			 virtual void SetParsingFormulaOnOpen(bool value)=0;
			/// <summary>
			/// If true, only loads data, formulas and formatting from the file, other contents and settings are all discarded. 
			/// For example: shapes ,validation,conditional formatting and pivotables.
			/// </summary>
			/// 
			/// 
			 virtual bool GetLoadDataAndFormatting()=0;
			/// <summary>
			/// If true, only loads data, formulas and formatting from the file, other contents and settings are all discarded. 
			/// For example: shapes, validation, conditional formatting, pivotables are not loaded.
			/// </summary>
			/// 
			/// 
			 virtual void SetLoadDataAndFormatting(bool value)=0;
			/// <summary>
			/// Sets the default print paper size from default printer's setting.
			/// </summary>
			/// 
			/// <param name="type" >The default paper size.</param>
			/// 
			/// <remarks>
			/// If there is no setting about paper size, MS Excel will use default printer's setting.
			/// </remarks>
			/// 
			/// 
			 virtual void SetPaperSize(Aspose::Cells::PaperSizeType type)=0;
			/// <summary>
			/// If true, only loads data and formulas from the file, other contents and settings are all discarded. 
			/// </summary>
			/// 
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use GetLoadDataAndFormatting().</remarks>
			/// 
			/// 
			 virtual bool GetLoadDataOnly()=0;
			/// <summary>
			/// If true, only loads data and formulas from the file, other contents and settings are all discarded. 
			/// </summary>
			/// 
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use SetLoadDataAndFormatting(bool).</remarks>
			/// 
			/// 
			 virtual void SetLoadDataOnly(bool value)=0;
			/// <summary>
			/// If true, only loads document properties
			/// </summary>
			/// 
			/// <remarks>
			/// Only for excel 97- 2003 xls file.
			/// If the file is encrypted, we still can get the document properties without password
			/// </remarks>
			/// 
			/// 
			 virtual bool GetOnlyLoadDocumentProperties()=0;
			/// <summary>
			/// If true, only loads document properties.
			/// </summary>
			/// 
			/// <remarks>
			/// Only for excel 97- 2003 xls file.
			/// If the file is encrypted, we still can get the document properties without password.
			/// </remarks>
			/// 
			/// 
			 virtual void SetOnlyLoadDocumentProperties(bool value)=0;
			/// <summary>
			/// Gets ILoadDataOptions.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ILoadDataOption> 		GetILoadDataOptions()=0;
			/// <summary>
			/// Sets ILoadDataOptions.
			/// </summary>
			 virtual void 		SetILoadDataOptions(intrusive_ptr<Aspose::Cells::ILoadDataOption> value)=0;
			/// <summary>
			/// Gets or sets the user interface language of the Workbook version based on CountryCode that has saved the file. 
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::CountryCode GetLanguageCode()=0;
			/// <summary>
			/// Sets the user interface language of the Workbook version based on CountryCode that has saved the file. 
			/// </summary>
			/// 
			/// 
			 virtual void SetLanguageCode(Aspose::Cells::CountryCode value)=0;
			/// <summary>
			/// Gets the system regional settings based on CountryCode at the time the file was saved. 
			/// </summary>
			/// 
			/// <remarks>If you do not want to use the region saved in the file, 
			/// please reset it after reading the file.</remarks>
			/// 
			/// 
			 virtual Aspose::Cells::CountryCode GetRegion()=0;
			/// <summary>
			/// Sets the system regional settings based on CountryCode at the time the file was saved. 
			/// </summary>
			/// 
			/// <remarks>If you do not want to use the region saved in the file, 
			/// please reset it after reading the file.</remarks>
			/// 
			/// 
			 virtual void SetRegion(Aspose::Cells::CountryCode value)=0;
			/// <summary>
			/// Gets the system culture info at the time the file was loaded.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Globalization::CultureInfo> GetCultureInfo()=0;
			/// <summary>
			/// Sets the system culture info at the time the file was loaded.
			/// </summary>
			 virtual void SetCultureInfo(intrusive_ptr<Aspose::Cells::Systems::Globalization::CultureInfo> value)=0;
			/// <summary>
			/// Gets a value that indicates whether the string in text file is converted to numeric data.
			/// </summary>
			/// 
			/// <remarks>
			/// NOTE: This member is now obsolete.</remarks>
			/// 
			/// 
			 virtual bool GetConvertNumericData()=0;
			/// <summary>
			/// Sets a value that indicates whether the string in text file is converted to numeric data.
			/// </summary>
			/// 
			/// <remarks>
			/// NOTE: This member is now obsolete.</remarks>
			/// 
			/// 
			 virtual void SetConvertNumericData(bool value)=0;
			/// <summary>
			/// Sets the default standard font name.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetStandardFont()=0;
			/// <summary>
			/// Sets the default standard font name.
			/// </summary>
			/// 
			/// 
			 virtual void SetStandardFont(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Sets the default standard font size.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Double GetStandardFontSize()=0;
			/// <summary>
			/// Sets the default standard font size.
			/// </summary>
			/// 
			/// 
			 virtual void SetStandardFontSize(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Ignore the data which are not printed if directly printing the file.
			/// </summary>
			/// 
			/// <remarks>
			/// Only for xlsx file.
			/// </remarks>
			/// 
			/// 
			 virtual bool GetIgnoreNotPrinted()=0;
			/// <summary>
			/// Ignore the data which are not printed if directly printing the file.
			/// </summary>
			/// 
			/// <remarks>
			/// Only for xlsx file.
			/// </remarks>
			/// 
			/// 
			 virtual void SetIgnoreNotPrinted(bool value)=0;
			/// <summary>
			/// Whether check restriction of excel file when user modify cells related objects.
			/// For example, excel does not allow inputting string value longer than 32K.
			/// When you input a value longer than 32K such as by PutValue(StringPtr) of ICell, if this property is true, you will get an Exception.
			/// If this property is false, we will accept your input string value as the cell's value so that later
			/// you can output the complete string value for other file formats such as CSV.
			/// However, if you have set such kind of value that is invalid for excel file format,
			/// you should not save the workbook as excel file format later. Otherwise there may be unexpected error for the generated excel file.
			/// </summary>
			/// 
			/// 
			 virtual bool GetCheckExcelRestriction()=0;
			/// <summary>
			/// Whether check restriction of excel file when user modify cells related objects.
			/// For example, excel does not allow inputting string value longer than 32K.
			/// When you input a value longer than 32K such as by PutValue(StringPtr) of ICell, if this property is true, you will get an Exception.
			/// If this property is false, we will accept your input string value as the cell's value so that later
			/// you can output the complete string value for other file formats such as CSV.
			/// However, if you have set such kind of value that is invalid for excel file format,
			/// you should not save the workbook as excel file format later. Otherwise there may be unexpected error for the generated excel file.
			/// </summary>
			/// 
			/// 
			 virtual void SetCheckExcelRestriction(bool value)=0;
			/// <summary>
			/// The filter options to denote what data should be loaded.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::LoadDataFilterOptions GetLoadDataFilterOptions()=0;
			/// <summary>
			/// The filter options to denote what data should be loaded.
			/// </summary>
			/// 
			/// 
			 virtual void SetLoadDataFilterOptions(Aspose::Cells::LoadDataFilterOptions value)=0;
			/// <summary>
			/// The data handler for processing cells data when reading template file.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ILightCellsDataHandler> 		GetILightCellsDataHandler()=0;
			/// <summary>
			/// The data handler for processing cells data when reading template file.
			/// </summary>
			 virtual void 		SetILightCellsDataHandler(intrusive_ptr<Aspose::Cells::ILightCellsDataHandler> value)=0;
			/// <summary>
			/// Gets the memory usage options.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::MemorySetting GetMemorySetting()=0;
			/// <summary>
			/// Sets the memory usage options.
			/// </summary>
			/// 
			/// 
			 virtual void SetMemorySetting(Aspose::Cells::MemorySetting value)=0;

	};
}
}
