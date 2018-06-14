#pragma once
#include "System/Object.h"
#include "System/Char.h"
#include "System/String.h"
#include "System/Text/Encoding.h"
#include "ISaveOptions.h"

namespace Aspose {
	namespace Cells {
		enum SaveFormat;
		enum TxtValueQuoteType;
		enum CellValueFormatStrategy;
		class ILightCellsDataProvider;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Repesents the save options for csv/tab delimitered/other text format.
			/// </summary>
	class ASPOSE_CELLS_API ITxtSaveOptions : virtual public Aspose::Cells::ISaveOptions
	{
		public:
			/// <summary>
			/// Gets char Delimiter of text file.
			/// </summary>
			 virtual Aspose::Cells::System::Char GetSeparator()=0;
			/// <summary>
			/// Sets char Delimiter of text file.
			/// </summary>
			 virtual void SetSeparator(Aspose::Cells::System::Char value)=0;
			/// <summary>
			/// Gets the a string value as separator.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetSeparatorString()=0;
			/// <summary>
			/// Sets a string value as separator.
			/// </summary>
			 virtual void SetSeparatorString(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets the default encoding. Only applies for csv file.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Text::Encoding> GetEncoding()=0;
			/// <summary>
			/// Sets the default encoding. Only applies for csv file.
			/// </summary>
			 virtual void SetEncoding(intrusive_ptr<Aspose::Cells::System::Text::Encoding> value)=0;
			/// <summary>
			/// Indicates whether always adding '"' for each field.
			/// If true then all values will be quoted;
			/// If false then only quote values when needed(when values contain special characters such as '"' , '\n' or separator character).
			/// Default is false.
			/// </summary>

			 virtual bool GetAlwaysQuoted()=0;
			/// <summary>
			/// Indicates whether always adding '"' for each field.
			/// If true then all values will be quoted;
			/// If false then only quote values when needed(when values contain special characters such as '"' , '\n' or separator character).
			/// Default is false.
			/// </summary>

			 virtual void SetAlwaysQuoted(bool value)=0;
			/// <summary>
			/// Gets how to quote values in the exported text file.
			/// </summary>
			 virtual Aspose::Cells::TxtValueQuoteType GetQuoteType()=0;
			/// <summary>
			/// Sets how to quote values in the exported text file.
			/// </summary>
			 virtual void SetQuoteType(Aspose::Cells::TxtValueQuoteType value)=0;
			/// <summary>
			/// Gets the format strategy when exporting the cell value as string.
			/// </summary>
			 virtual Aspose::Cells::CellValueFormatStrategy GetFormatStrategy()=0;
			/// <summary>
			/// Sets the format strategy when exporting the cell value as string.
			/// </summary>
			 virtual void SetFormatStrategy(Aspose::Cells::CellValueFormatStrategy value)=0;
			/// <summary>
			/// The Data provider to provide cells data for saving workbook in light mode.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ILightCellsDataProvider> 		GetILightCellsDataProvider()=0;
			/// <summary>
			/// The Data provider to provide cells data for saving workbook in light mode.
			/// </summary>
			 virtual void 		SetILightCellsDataProvider(intrusive_ptr<Aspose::Cells::ILightCellsDataProvider> value)=0;
			/// <summary>
			/// Indicates whether leading blank rows and columns should be trimmed like what ms excel does.
			/// </summary>
			 virtual bool GetTrimLeadingBlankRowAndColumn()=0;
			/// <summary>
			/// Indicates whether leading blank rows and columns should be trimmed like what ms excel does.
			/// </summary>
			 virtual void SetTrimLeadingBlankRowAndColumn(bool value)=0;

	};
}
}
