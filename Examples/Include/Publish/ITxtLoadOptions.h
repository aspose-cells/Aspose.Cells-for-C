#pragma once
#include "System/Object.h"
#include "System/Char.h"
#include "System/String.h"
#include "System/Text/Encoding.h"
#include "ILoadOptions.h"

namespace Aspose {
	namespace Cells {
		enum LoadFormat;
		enum TxtLoadStyleStrategy;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents the options for loading text file.
			/// </summary>
	class ASPOSE_CELLS_API ITxtLoadOptions : virtual public Aspose::Cells::ILoadOptions
	{
		public:
			/// <summary>
			/// Gets a value that indicates whether the string in text file is converted to numeric data.
			/// </summary>
			 virtual bool GetConvertNumericData()=0;
			/// <summary>
			/// Sets a value that indicates whether the string in text file is converted to numeric data.
			/// </summary>
			 virtual void SetConvertNumericData(bool value)=0;
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
			/// Sets the a string value as separator.
			/// </summary>
			 virtual void SetSeparatorString(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets the default encoding.Only applies for csv file.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Text::Encoding> GetEncoding()=0;
			/// <summary>
			/// Sets the default encoding.Only applies for csv file.
			/// </summary>
			 virtual void SetEncoding(intrusive_ptr<Aspose::Cells::System::Text::Encoding> value)=0;
			/// <summary>
			/// True means that the file contains several encoding.
			/// </summary>
			 virtual bool IsMultiEncoded()=0;
			/// <summary>
			/// True means that the file contains several encoding.
			/// </summary>
			 virtual void SetMultiEncoded(bool value)=0;
			/// <summary>
			/// Gets a value that indicates whether the string in text file is converted to date data.
			/// </summary>
			 virtual bool GetConvertDateTimeData()=0;
			/// <summary>
			/// Sets a value that indicates whether the string in text file is converted to date data.
			/// </summary>
			 virtual void SetConvertDateTimeData(bool value)=0;
			/// <summary>
			/// Indicates the strategy to apply style for parsed values when converting string value to number or datetime.
			/// </summary>
			 virtual Aspose::Cells::TxtLoadStyleStrategy GetLoadStyleStrategy()=0;
			/// <summary>
			/// Indicates the strategy to apply style for parsed values when converting string value to number or datetime.
			/// </summary>
			 virtual void SetLoadStyleStrategy(Aspose::Cells::TxtLoadStyleStrategy value)=0;
			/// <summary>
			/// Indicates whether the text is formula if it starts with "=". 
			/// </summary>
			 virtual bool HasFormula()=0;
			/// <summary>
			/// Indicates whether the text is formula if it starts with "=". 
			/// </summary>
			 virtual void SetHasFormula(bool value)=0;
			/// <summary>
			/// Indicates whether the exact formatting should be kept for the cell when converting string value to number or datetime.
			/// When ms excel loading datetime or numeric values from csv file, the formatting of those values may be changed, such as
			/// leading/tailing zeros of number, year/month/day order of datetime, ...etc.
			/// To simulate ms excel's behavior, please set this property to false.
			/// Default value of this property is true, so the cell value will be formatted as the same string value in csv template file.
			/// </summary>

			 virtual bool GetKeepExactFormat()=0;
			/// <summary>
			/// Indicates whether the exact formatting should be kept for the cell when converting string value to number or datetime.
			/// When ms excel loading datetime or numeric values from csv file, the formatting of those values may be changed, such as
			/// leading/tailing zeros of number, year/month/day order of datetime, ...etc.
			/// To simulate ms excel's behavior, please set this property to false.
			/// Default value of this property is true, so the cell value will be formatted as the same string value in csv template file.
			/// </summary>

			 virtual void SetKeepExactFormat(bool value)=0;

	};
}
}
