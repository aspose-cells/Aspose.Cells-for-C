#pragma once
#include "ShiftType.h"
#include "System/Double.h"
#include "System/Byte.h"
//#include "System/Char.h"
#include "System/Array2D.h"
#include "System/String.h"
//#include "System/Math.h"
//#include "System/Boxing.h"
//#include "System/Drawing/Color.h"
//#include "System/Array.h"
#include "RawCellValueType.h"
#include "System/Array1D.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
//#include "System/Collections/Hashtable.h"
#include "PasteType.h"
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Exception.h"
//#include "System/Type.h"
#include "NumberCategoryType.h"
//#include "System/StringHelperPal.h"
#include "System/Int64.h"
#include "System/Single.h"
#include "CellValueFormatStrategy.h"
#include "System/Collections/IEnumerator.h"
//#include "System/Text/StringBuilder.h"
//#include "System/BitConverter.h"
//#include "System/TypeCode.h"
#include "System/DateTime.h"
//#include "System/UInt16.h"
//#include "System/ArgumentOutOfRangeException.h"
#include "CellValueType.h"
#define STATIC_CELL() 

namespace Aspose {
namespace Cells {
class Font;
class StyleFlag;
class Worksheet;
class FontSetting;
class ICustomFunction;
class ConditionalFormattingResult;
class RichText;
class ArrayFormula;
class FormulaCell;
class CalculationOptions;
class Cells;
class FormatConditionCollection;
class FormattedInfo;
class Style;
class CopyOptions;
class FormulaCellTable;
class CellArea;
class Row;
class Validation;
class FormulaTable;
class ReferredAreaCollection;
class Range;
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class ListObject;
}
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
}
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractRow;
class CellDisplayStyleParams;
class CellData;
}
}
}
namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class ICellsFormatter;
class FormatOptions;
class CellFormattedInfo;
class IDigitsCalculator;
}
}
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API Cell : public Aspose::Cells::System::Object
#else	class Cell : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			bool NeedSyncData;
			void DeReferValue();
			void OnValueChanged();
			void SetDoubleValue(Aspose::Cells::System::Double dv);
			bool SameString(intrusive_ptr<Aspose::Cells::System::String> stringValue , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			intrusive_ptr<Aspose::Cells::Style> PrepareQuotePrefixString(intrusive_ptr<Aspose::Cells::System::String> stringValue);
			intrusive_ptr<Aspose::Cells::System::String> GetDateTimeString(intrusive_ptr<Aspose::Cells::System::DateTime> dt);
			Aspose::Cells::CellValueType GetCellValueType(Aspose::Cells::CellsSs::RawCellValueType type , intrusive_ptr<Aspose::Cells::System::Object> value);
			bool PrecisionAsDisplayed(intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			bool PrecisionAsDisplayed(intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> formatter , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			void Copy(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			intrusive_ptr<Aspose::Cells::System::String> GetErrorValueTypeCellDisplayString(intrusive_ptr<Aspose::Cells::System::Object> value);
			static intrusive_ptr<Aspose::Cells::System::String> PostProcessText(intrusive_ptr<Aspose::Cells::FormattedInfo> info);
			static intrusive_ptr<Aspose::Cells::System::String> PostProcessDev(intrusive_ptr<Aspose::Cells::FormattedInfo> info , Aspose::Cells::System::Int32 repeatCount , bool useSpace);
	public:

			Aspose::Cells::System::Int32 CellPosition;
			intrusive_ptr<Aspose::Cells::Row> RowObj;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> _CellData;
			Aspose::Cells::Cells* InCells;
			 virtual void SyncPosition();
			 virtual void Sync();
			 virtual void SyncDataWithStyle();
			 virtual void UpdateStringValue(intrusive_ptr<Aspose::Cells::System::String> stringValue);
			 virtual void UpdateValue(Aspose::Cells::CellsSs::RawCellValueType type , intrusive_ptr<Aspose::Cells::System::Object> value , bool deRefer);
			 virtual void UpdateData(intrusive_ptr<Aspose::Cells::CellsSs::CellData> dataNew , Aspose::Cells::System::Int32 flag , bool deRefer);
			 virtual void UpdateXFIndex(Aspose::Cells::System::Int32 xf);
			bool IsPh();
			void SetIsPh(bool value);
			void Calculate(intrusive_ptr<Aspose::Cells::CalculationOptions> options);
			void Calculate(bool ignoreError , intrusive_ptr<Aspose::Cells::ICustomFunction> customFunction);
			intrusive_ptr<Aspose::Cells::Worksheet> GetWorksheet();
			 Cell(intrusive_ptr<Aspose::Cells::Row> row , Aspose::Cells::System::Int32 cellPos);
			 Cell(intrusive_ptr<Aspose::Cells::Row> row , Aspose::Cells::System::Int32 cellPos , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata , bool needSyncData);
			void PutValue(bool boolValue);
			void PutValue(Aspose::Cells::System::Int32 intValue);
			void PutValue(Aspose::Cells::System::Double doubleValue);
			bool IsBlank();
			bool IsNull();
			 virtual void SetNull();
			void PutValue(intrusive_ptr<Aspose::Cells::System::String> stringValue , bool isConverted , bool setStyle);
			void PutValue(intrusive_ptr<Aspose::Cells::System::String> stringValue , bool isConverted);
			 virtual void PutValue(intrusive_ptr<Aspose::Cells::System::String> stringValue);
			void PutValue(intrusive_ptr<Aspose::Cells::System::DateTime> dateTime);
			intrusive_ptr<Aspose::Cells::System::DateTime> GetDateTimeValue();
			void PutValue(intrusive_ptr<Aspose::Cells::System::Object> objectValue);
			Aspose::Cells::System::Int32 GetRow();
			Aspose::Cells::System::Int32 GetColumn();
			void CopyInColumn(intrusive_ptr<Aspose::Cells::Cell> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void CopyInRow(intrusive_ptr<Aspose::Cells::Cell> source , Aspose::Cells::System::Int32 totalRows , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			static void InsertColumns(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 columnNumber , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet);
			static void InsertRows(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 rowNumber , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet);
			void ShiftDown(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftRows , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet);
			static void ShiftDown(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftRows , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet);
			Aspose::Cells::System::Int32 ShiftUp(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftRows , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet);
			static Aspose::Cells::System::Int32 ShiftUp(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftRows , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet);
			bool ShiftRight(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumbers , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet);
			static bool ShiftRight(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumbers , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet);
			bool ShiftLeft(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumbers , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet);
			static void ShiftLeft(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumbers , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet);
			static void ShiftFormula(intrusive_ptr<Aspose::Cells::FormulaCell> formula , Aspose::Cells::ShiftType type , intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumbers , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet);
			bool IsFormula();
			bool GetInternalCheckIsFormula();
			bool IsVolatileFormula(intrusive_ptr<Aspose::Cells::Cell> header);
			intrusive_ptr<Aspose::Cells::FormulaCell> GetFormulaCell();
			Aspose::Cells::CellValueType GetType();
			Aspose::Cells::System::Int32 GetSSTIndex();
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			intrusive_ptr<Aspose::Cells::System::String> GetInnerName();
			bool IsErrorValue();
			intrusive_ptr<Aspose::Cells::System::String> GetStringValue(Aspose::Cells::CellValueFormatStrategy formatStrategy);
			intrusive_ptr<Aspose::Cells::System::String> GetStringValue();
			intrusive_ptr<Aspose::Cells::System::String> GetStringValueWithoutFormat();
			intrusive_ptr<Aspose::Cells::System::String> GetInnerGetStringValue();
			Aspose::Cells::NumberCategoryType GetNumberCategoryType();
			intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> GetUltimateFormatter();
			intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options);
			intrusive_ptr<Aspose::Cells::System::Object> PrecisionAsDisplayed();
			intrusive_ptr<Aspose::Cells::System::Object> GetInnerValue();
			Aspose::Cells::CellValueType GetInnerType();
			intrusive_ptr<Aspose::Cells::System::String> GetDisplayStringValue();
			intrusive_ptr<Aspose::Cells::FormattedInfo> GetDisplayFormattedInfo();
			intrusive_ptr<Aspose::Cells::System::String> GetInnerDisplayStringValue();
			intrusive_ptr<Aspose::Cells::System::String> GetGeneralValue();
			intrusive_ptr<Aspose::Cells::System::String> GetDevStringValue(Aspose::Cells::System::Int32 repeatCount , bool useSpace);
			Aspose::Cells::System::Int32 GetIntValue();
			Aspose::Cells::System::Double GetDoubleValue();
			Aspose::Cells::System::Single GetFloatValue();
			bool GetBoolValue();
			intrusive_ptr<Aspose::Cells::Internal::Format::CellFormattedInfo> GetCellFormattedInfo();
			intrusive_ptr<Aspose::Cells::Style> GetDisplayStyle();
			void ApplyDisplayStyle(intrusive_ptr<Aspose::Cells::CellsSs::CellDisplayStyleParams> p , bool checkFontColor , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::Style> GetDisplayStyle(bool& isOriginal);
			intrusive_ptr<Aspose::Cells::Style> GetConditionalStyle();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormatConditionCollection*>> GetFormatConditions();
			intrusive_ptr<Aspose::Cells::Style> GetOriginalStyle();
			intrusive_ptr<Aspose::Cells::Style> GetStyle(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn , bool initBorder);
			 virtual intrusive_ptr<Aspose::Cells::Style> GetStyle();
			intrusive_ptr<Aspose::Cells::Style> GetStyle(bool checkBorders);
			void InternalSetStyle(intrusive_ptr<Aspose::Cells::Style> style , bool updateAdjacentBorders);
			 virtual void SetStyle(intrusive_ptr<Aspose::Cells::Style> style);
			void SetReadStyle(intrusive_ptr<Aspose::Cells::Style> style);
			 virtual void SetStyle(intrusive_ptr<Aspose::Cells::Style> style , bool explicitFlag);
			 virtual void SetStyle(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::StyleFlag> flag);
			intrusive_ptr<Aspose::Cells::Style> GetRefStyle();
			intrusive_ptr<Aspose::Cells::Style> GetRefStyle(intrusive_ptr<Aspose::Cells::Style> defaultStyle);
			bool HasStyle();
			Aspose::Cells::System::Int32 GetSharedStyleIndex();
			Aspose::Cells::System::Int32 GetXFIndex();
			Aspose::Cells::System::Int32 GetXFIndexRead();
			void SetXFIndexRead(Aspose::Cells::System::Int32 value);
			bool IsNoNeedInXlsx(intrusive_ptr<Aspose::Cells::Row> row);
			intrusive_ptr<Aspose::Cells::System::String> GetFormulaNew();
			intrusive_ptr<Aspose::Cells::System::String> InternalGetFormula();
			intrusive_ptr<Aspose::Cells::System::String> GetFormula();
			void SetFormula(intrusive_ptr<Aspose::Cells::System::String> value);
			void SetFormula(intrusive_ptr<Aspose::Cells::System::String> formula , intrusive_ptr<Aspose::Cells::System::Object> value);
			intrusive_ptr<Aspose::Cells::System::String> GetFormula2007();
			void SetFormula2007(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetR1C1Formula();
			void SetR1C1Formula(intrusive_ptr<Aspose::Cells::System::String> value);
			void SetInternalFormula(intrusive_ptr<Aspose::Cells::System::String> value);
			bool ContainsExternalLink();
			intrusive_ptr<Aspose::Cells::ReferredAreaCollection> GetPrecedents();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Cell*>> GetDependents(bool isAll);
			intrusive_ptr<Aspose::Cells::System::Collections::IEnumerator> GetLeafs();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetBinaryFormula();
			void SetBinaryFormula(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			void SetXlsbBinaryFormula(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> binary);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetXlsbBinaryFormula();
			bool IsArrayHeader();
			intrusive_ptr<Aspose::Cells::CellArea> GetArrayRange();
			bool IsSharedFormulaHeader();
			bool IsInArray();
			bool GetInternalCheckIsInArray();
			bool IsInSharedFormula();
			bool IsInTable();
			bool GetInternalCheckIsInTable();
			intrusive_ptr<Aspose::Cells::Cell> GetRangeFormulaHeader();
			intrusive_ptr<Aspose::Cells::FormulaCell> GetSimpleFormulaCell();
			void ConvertSharedFormula1();
			void SetArrayFormula(intrusive_ptr<Aspose::Cells::System::String> arrayFormula , Aspose::Cells::System::Int32 rowNumber , Aspose::Cells::System::Int32 columnNumber);
			void SetInnerArrayFormula(intrusive_ptr<Aspose::Cells::System::String> arrayFormula , Aspose::Cells::System::Int32 rowNumber , Aspose::Cells::System::Int32 columnNumber);
			intrusive_ptr<Aspose::Cells::FormulaCellTable> SetTableFormulaHeader(intrusive_ptr<Aspose::Cells::CellArea> arrayRange , bool isTwoVariableTable , bool IsRowInputCell , intrusive_ptr<Aspose::Cells::System::String> inputCell1 , intrusive_ptr<Aspose::Cells::System::String> inputCell2 , bool isInputCell1Deleted , bool isInputCell2Deleted);
			void SetTableFormula(intrusive_ptr<Aspose::Cells::CellArea> arrayRange , bool isTwoVariableTable , bool IsRowInputCell , intrusive_ptr<Aspose::Cells::System::String> inputCell1 , intrusive_ptr<Aspose::Cells::System::String> inputCell2 , bool isInputCell1Deleted , bool isInputCell2Deleted);
			void RemoveArrayFormula(bool leaveNormalFormula);
			void SetAddInFormula(intrusive_ptr<Aspose::Cells::System::String> addInFileName , intrusive_ptr<Aspose::Cells::System::String> addInFunction);
			void Copy(intrusive_ptr<Aspose::Cells::Cell> source , Aspose::Cells::PasteType type , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void Copy(intrusive_ptr<Aspose::Cells::Cell> cell);
			intrusive_ptr<Aspose::Cells::ArrayFormula> GetArrayFormula();
			void SetArrayFormula(intrusive_ptr<Aspose::Cells::ArrayFormula> value);
			intrusive_ptr<Aspose::Cells::FormulaTable> GetFormulaTable();
			void SetFormulaTable(intrusive_ptr<Aspose::Cells::FormulaTable> value);
			void CopyData(intrusive_ptr<Aspose::Cells::Cell> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void CopyAll(intrusive_ptr<Aspose::Cells::Cell> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void CopyStringValue(intrusive_ptr<Aspose::Cells::Cell> source , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption);
			void CopyInWorksheet(intrusive_ptr<Aspose::Cells::Cell> source , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption);
			void CopyFormulaCell(intrusive_ptr<Aspose::Cells::Cell> source , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption);
			intrusive_ptr<Aspose::Cells::RichText> GetRichText();
			intrusive_ptr<Aspose::Cells::System::Object> GetFormulaTreeValue();
			Aspose::Cells::System::Byte GetCalculationFlag();
			void SetCalculationFlag(Aspose::Cells::System::Byte value);
			bool IsInCircle();
			void SetIsInCircle(bool value);
			 virtual void SetFormula(intrusive_ptr<Aspose::Cells::FormulaCell> formula);
			void SetInternalValue(Aspose::Cells::CellsSs::RawCellValueType type , intrusive_ptr<Aspose::Cells::System::Object> value);
			void SetFormulaValue(intrusive_ptr<Aspose::Cells::System::Object> value , Aspose::Cells::System::Byte calFlag);
			intrusive_ptr<Aspose::Cells::System::Object> GetValue();
			void SetValue(intrusive_ptr<Aspose::Cells::System::Object> value);
			bool IsStyleSet();
			bool GetInternalCheckIsStyleSet();
			void SetRichText(intrusive_ptr<Aspose::Cells::System::String> text , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> chs);
			intrusive_ptr<Aspose::Cells::FontSetting> Characters(Aspose::Cells::System::Int32 startIndex , Aspose::Cells::System::Int32 length);
			void FormatCharacters(Aspose::Cells::System::Int32 startIndex , Aspose::Cells::System::Int32 length , intrusive_ptr<Aspose::Cells::Font> font , intrusive_ptr<Aspose::Cells::StyleFlag> flag);
			bool IsRichText();
			bool InternalCheckIsRichText();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FontSetting*>> GetCharacters();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FontSetting*>> GetCharacters(bool flag);
			void SetCharacters(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FontSetting*>> characters);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetFormatRuns();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetDisplayFormatRuns(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> opts , intrusive_ptr<Aspose::Cells::Style> style);
			bool IsMerged();
			intrusive_ptr<Aspose::Cells::Range> GetMergedRange();
			void ConvertSharedFormula();
			void SetSharedFormula(intrusive_ptr<Aspose::Cells::System::String> sharedFormula , Aspose::Cells::System::Int32 rowNumber , Aspose::Cells::System::Int32 columnNumber);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> SetXlsxSharedFormulaHeader(intrusive_ptr<Aspose::Cells::System::String> sharedFormula , intrusive_ptr<Aspose::Cells::CellArea> ca);
			void SetXlsxSharedBody(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			 virtual intrusive_ptr<Aspose::Cells::System::String> ToString();
			 virtual bool Equals(intrusive_ptr<Aspose::Cells::System::Object> obj);
			 virtual Aspose::Cells::System::Int32 GetHashCode();
			bool Equals(intrusive_ptr<Aspose::Cells::Cell> cell);
			intrusive_ptr<Aspose::Cells::ConditionalFormattingResult> GetConditionalFormattingResult();
			intrusive_ptr<Aspose::Cells::Validation> GetValidation();
			bool GetValidationValue();
			intrusive_ptr<Aspose::Cells::Tables::ListObject> GetTable();
			static Aspose::Cells::System::Int32 GetXFIndex(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			static Aspose::Cells::System::Int32 GetXFIndex(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 rowXf , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			static intrusive_ptr<Aspose::Cells::Style> GetOriginalStyle(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			static intrusive_ptr<Aspose::Cells::Style> GetRefStyle(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			static intrusive_ptr<Aspose::Cells::Style> GetRefStyle(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			static intrusive_ptr<Aspose::Cells::Style> GetRefStyle(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 rowXf , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			static Aspose::Cells::System::Int32 GetInheritedXFIndex(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 rowXf , Aspose::Cells::System::Int32 column);
			static intrusive_ptr<Aspose::Cells::Style> GetStyle(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::Row> rowObj , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata , Aspose::Cells::System::Int32 cellPos , bool initBorder);
			static bool CheckHasStyle(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			static intrusive_ptr<Aspose::Cells::System::String> GetStringValue(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			static intrusive_ptr<Aspose::Cells::System::String> GetStringValue(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			static intrusive_ptr<Aspose::Cells::System::String> GetDevStringValue(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata , Aspose::Cells::System::Int32 repeatCount , bool useSpace);
			static intrusive_ptr<Aspose::Cells::System::String> GetDevStringValue(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata , Aspose::Cells::System::Int32 repeatCount , bool useSpace);
			static intrusive_ptr<Aspose::Cells::FormattedInfo> GetDisplayFormattedInfo(intrusive_ptr<Aspose::Cells::CellsSs::CellData> plain , intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> opts , intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::Cells> cells);
			static intrusive_ptr<Aspose::Cells::System::String> GetDisplayStringValue(intrusive_ptr<Aspose::Cells::CellsSs::CellData> plain , intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> opts , intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::Cells> cells);
			static intrusive_ptr<Aspose::Cells::System::String> PostProcessDisplay(intrusive_ptr<Aspose::Cells::FormattedInfo> info , intrusive_ptr<Aspose::Cells::Internal::Format::IDigitsCalculator> dc , intrusive_ptr<Aspose::Cells::Style> style);
			static void ApplyDisplayStyle(intrusive_ptr<Aspose::Cells::Worksheet> sheet , Aspose::Cells::System::Int32 row , intrusive_ptr<Aspose::Cells::CellsSs::CellData> data , intrusive_ptr<Aspose::Cells::CellsSs::CellDisplayStyleParams> p , bool checkFontColor , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static Aspose::Cells::System::Int64 ToKey(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			static Aspose::Cells::System::Int32 GetSheetFromKey(Aspose::Cells::System::Int64 key);
			static Aspose::Cells::System::Int32 GetRowFromKey(Aspose::Cells::System::Int64 key);
			static Aspose::Cells::System::Int32 GetColumnFromKey(Aspose::Cells::System::Int64 key);
			 Cell();
		public:
			virtual ~Cell();
	};

}

}
