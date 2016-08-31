#ifndef _SYSTEM_PRIMITIVETOSTRINGHELPER_H_
#define _SYSTEM_PRIMITIVETOSTRINGHELPER_H_

#include "System/BaseNumber.h"
#include "System/Boolean.h"
#include "System/String.h"
//#include "System/Boxing.h"

//#ifdef BOX_ENUM_TYPE
#include "ExternalCellValueType.h"
#include "ErrorType.h"
#include "RawCellValueType.h"
#include "WeekEndType.h"
#include "DataKeepType.h"
#include "System/Drawing/FontStyle.h"
//#endif

namespace Aspose {
	namespace Cells {
		namespace System {
				class ASPOSE_CELLS_API PrimitiveToStringHelper {
				public:

					static StringPtr ToString(Byte value);
					static StringPtr ToString(SByte value);
					static StringPtr ToString(Int16 value);
					static StringPtr ToString(UInt16 value);
					static StringPtr ToString(Int32 value);
					static StringPtr ToString(UInt32 value);
					static StringPtr ToString(Int64 value);
					static StringPtr ToString(UInt64 value);
					static StringPtr ToString(Double value);
					static StringPtr ToString(Single value);
					static StringPtr ToString(Decimal value);
					static StringPtr ToString(Boolean value);
//#ifdef BOX_ENUM_TYPE
					static StringPtr ToString(Aspose::Cells::ExternalCellValueType value)
					{
						switch (value)
						{
						case Aspose::Cells::ExternalCellValueType_Blank: return new String("Blank");
						case Aspose::Cells::ExternalCellValueType_Number: return new String("Number");
						case Aspose::Cells::ExternalCellValueType_String: return new String("String");
						case Aspose::Cells::ExternalCellValueType_Error: return new String("Error");
						case Aspose::Cells::ExternalCellValueType_Bool: return new String("Bool");
						default: return new String("");
						}
					}
					static StringPtr ToString(Aspose::Cells::ErrorType value)
					{
						switch (value)
						{
						case Aspose::Cells::ErrorType_Div: return new String("Div");
						case Aspose::Cells::ErrorType_NA: return new String("NA");
						case Aspose::Cells::ErrorType_Name: return new String("Name");
						case Aspose::Cells::ErrorType_Null: return new String("Null");
						case Aspose::Cells::ErrorType_Number: return new String("Number");
						case Aspose::Cells::ErrorType_Ref: return new String("Ref");
						case Aspose::Cells::ErrorType_Recursive: return new String("Recursive");
						case Aspose::Cells::ErrorType_Value: return new String("Value");
						default: return new String("");
						}
					}
					static StringPtr ToString(Aspose::Cells::CellsSs::RawCellValueType value)
					{
						switch (value)
						{
						case Aspose::Cells::CellsSs::RawCellValueType_Null: return new String("Null");
						case Aspose::Cells::CellsSs::RawCellValueType_Double: return new String("Double");
						case Aspose::Cells::CellsSs::RawCellValueType_Bool: return new String("Bool");
						case Aspose::Cells::CellsSs::RawCellValueType_Error: return new String("Error");
						case Aspose::Cells::CellsSs::RawCellValueType_String: return new String("String");
						case Aspose::Cells::CellsSs::RawCellValueType_Formula: return new String("Formula");
						case Aspose::Cells::CellsSs::RawCellValueType_RK: return new String("RK");
						default: return new String("");
						}
					}
					static StringPtr ToString(Aspose::Cells::System::Drawing::FontStyle value)
					{
						switch (value)
						{
						case Aspose::Cells::System::Drawing::FontStyle_Regular: return new String("Regular");
						case Aspose::Cells::System::Drawing::FontStyle_Bold: return new String("Bold");
						case Aspose::Cells::System::Drawing::FontStyle_Italic: return new String("Italic");
						case Aspose::Cells::System::Drawing::FontStyle_Underline: return new String("Underline");
						case Aspose::Cells::System::Drawing::FontStyle_Strikeout: return new String("Strikeout");
						default: return new String("");
						}
					}
					static StringPtr ToString(Aspose::Cells::FormulaUtility::WeekEndType value)
					{
						switch (value)
						{
						case Aspose::Cells::FormulaUtility::WeekEndType_SaturdaySunday: return new String("SaturdaySunday");
						case Aspose::Cells::FormulaUtility::WeekEndType_SundayMonday: return new String("SundayMonday");
						case Aspose::Cells::FormulaUtility::WeekEndType_MondayTuesday: return new String("MondayTuesday");
						case Aspose::Cells::FormulaUtility::WeekEndType_TuesdayWednesday: return new String("TuesdayWednesday");
						case Aspose::Cells::FormulaUtility::WeekEndType_WednesdayThursday: return new String("WednesdayThursday");
						case Aspose::Cells::FormulaUtility::WeekEndType_ThursdayFriday: return new String("ThursdayFriday");
						case Aspose::Cells::FormulaUtility::WeekEndType_FridaySaturday: return new String("FridaySaturday");
						case Aspose::Cells::FormulaUtility::WeekEndType_Sunday: return new String("Sunday");
						case Aspose::Cells::FormulaUtility::WeekEndType_Monday: return new String("Monday");
						case Aspose::Cells::FormulaUtility::WeekEndType_Tuesday: return new String("Tuesday");
						case Aspose::Cells::FormulaUtility::WeekEndType_Wednesday: return new String("Wednesday");
						case Aspose::Cells::FormulaUtility::WeekEndType_Thursday: return new String("Thursday");
						case Aspose::Cells::FormulaUtility::WeekEndType_Friday: return new String("Friday");
						case Aspose::Cells::FormulaUtility::WeekEndType_Saturday: return new String("Saturday");
						default: return new String("");
						}
					}
					static StringPtr ToString(Aspose::Cells::OpenXML::DataKeepType value)
					{
						switch (value)
						{
						case Aspose::Cells::OpenXML::DataKeepType_TxBody_EndParaRPr: return new String("TxBody_EndParaRPr");
						case Aspose::Cells::OpenXML::DataKeepType_TxBody_BodyPr_Wrap: return new String("TxBody_BodyPr_Wrap");
						case Aspose::Cells::OpenXML::DataKeepType_ExternalBook_SheetData_RefreshError: return new String("ExternalBook_SheetData_RefreshError");
						case Aspose::Cells::OpenXML::DataKeepType_AttrList: return new String("AttrList");
						case Aspose::Cells::OpenXML::DataKeepType_ExtList: return new String("ExtList");
						//case Aspose::Cells::OpenXML::DataKeepType_Ext_ConditionalFormattings: return new String("Ext_ConditionalFormattings");
						//case Aspose::Cells::OpenXML::DataKeepType_Ext_DataValidations: return new String("Ext_DataValidations");
						//case Aspose::Cells::OpenXML::DataKeepType_Ext_SlicerList: return new String("Ext_SlicerList");
						//case Aspose::Cells::OpenXML::DataKeepType_Ext_ProtectedRanges: return new String("ProtectedRanges");
						//case Aspose::Cells::OpenXML::DataKeepType_Ext_IgnoredErrors: return new String("Ext_IgnoredErrors");
						case Aspose::Cells::OpenXML::DataKeepType_Ext_Timeline: return new String("Ext_Timeline");
						default: return new String("");
						}
					}

//#endif
				};
		}
	}
}
#endif//_SYSTEM_PRIMITIVETOSTRINGHELPER_H_