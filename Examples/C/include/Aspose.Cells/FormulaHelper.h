#pragma once
#include "System/Collections/ArrayList.h"
//#include "System/Text/StringBuilder.h"
#include "System/Array2D.h"
//#include "System/Exception.h"
//#include "System/UInt16.h"
#include "System/Object.h"
//#include "System/Boxing.h"
//#include "System/DateTime.h"
#include "RefMode.h"
//#include "System/Int16.h"
//#include "System/Type.h"
//#include "System/Math.h"
#include "System/Char.h"
//#include "System/BitConverter.h"
#include "Constants.h"
#include "System/Collections/Hashtable.h"
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
#include "System/Array.h"
#include "System/Byte.h"
#include "System/Double.h"
#include "System/String.h"
#include "System/Int32.h"
//#include "System/TypeCode.h"
#include "FormulaOType.h"
#define STATIC_FORMULAHELPER() 

namespace Aspose {
namespace Cells {
class FormulaTree;
class WorkbookSettings;
class WorksheetCollection;
class Cell;
class Workbook;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class FormulaHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::String> RegularSheetName0(intrusive_ptr<Aspose::Cells::System::String> sheetName0);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetExternReference(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::String> externFileName , intrusive_ptr<Aspose::Cells::System::String> externSheetName , bool isAbsolutePath , bool flag);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> CheckExternSupbook(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 supbookIndex , intrusive_ptr<Aspose::Cells::System::String> ecodedExternFileName , intrusive_ptr<Aspose::Cells::System::String> externFileName , intrusive_ptr<Aspose::Cells::System::String> externSheetName , bool flag);
	public:

			 FormulaHelper();
			static intrusive_ptr<Aspose::Cells::System::String> GetSheetName(Aspose::Cells::System::Int32 refIndex , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 ProcessStation , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ExportedSupbooks);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> Split(intrusive_ptr<Aspose::Cells::System::String> str , Aspose::Cells::System::Char ch);
			static Aspose::Cells::System::Int32 IndexOf(intrusive_ptr<Aspose::Cells::System::String> str , Aspose::Cells::System::Char ch);
			static intrusive_ptr<Aspose::Cells::System::String> ProcessString(intrusive_ptr<Aspose::Cells::System::String> t);
			static Aspose::Cells::System::Int32 LastIndexOf(intrusive_ptr<Aspose::Cells::System::String> t , Aspose::Cells::System::Char key);
			static intrusive_ptr<Aspose::Cells::System::String> RegularSheetName(intrusive_ptr<Aspose::Cells::System::String> sheetName0);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> ParseSheetName(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::String> sheetName);
			static bool NeedPivotQuote(intrusive_ptr<Aspose::Cells::System::String> str);
			static bool IsValueParam(intrusive_ptr<Aspose::Cells::FormulaTree> notation);
			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> ConvertDoubleArrayToObjctArray(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> child);
			static intrusive_ptr<Aspose::Cells::System::Object> ConvertToDouble(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::System::Object> childResult , bool isCell , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			static intrusive_ptr<Aspose::Cells::System::Object> ContainsError(intrusive_ptr<Aspose::Cells::System::Object> childResult);
			static intrusive_ptr<Aspose::Cells::System::Object> ConvertToDoubleArray(intrusive_ptr<Aspose::Cells::System::Object> childResult , bool date1904 , bool notIgnoreErr);
			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> ConvertToDoubleArray(intrusive_ptr<Aspose::Cells::System::Object> childResult , bool date1904);
			static intrusive_ptr<Aspose::Cells::System::Object> GetNumericArray2(intrusive_ptr<Aspose::Cells::System::Object> childResult , bool date1904);
			static intrusive_ptr<Aspose::Cells::System::Object> GetXYArray(intrusive_ptr<Aspose::Cells::System::Object> childResult1 , intrusive_ptr<Aspose::Cells::System::Object> childResult2 , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			static intrusive_ptr<Aspose::Cells::System::Object> GetNumericArray(intrusive_ptr<Aspose::Cells::System::Object> childResult , intrusive_ptr<Aspose::Cells::Cell> cell , bool date1904 , bool ignoreError);
			static intrusive_ptr<Aspose::Cells::System::Object> GetNumeric(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list , intrusive_ptr<Aspose::Cells::System::Object> childResult , intrusive_ptr<Aspose::Cells::Cell> cell , bool date1904);
			static intrusive_ptr<Aspose::Cells::System::Object> GetNumeric(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list , intrusive_ptr<Aspose::Cells::System::Object> childResult , intrusive_ptr<Aspose::Cells::Cell> cell , bool boolNotAsNumberic , bool textNotAsZero , bool nullNotAsZero , bool ErrorNotAsZero , bool date1904 , bool ignoreError);
			static intrusive_ptr<Aspose::Cells::System::Object> GetDateArray(intrusive_ptr<Aspose::Cells::System::Object> childResult , intrusive_ptr<Aspose::Cells::Cell> cell , bool date1904);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> SplitNonContiguousData(intrusive_ptr<Aspose::Cells::System::String> formula);
			static intrusive_ptr<Aspose::Cells::System::Object> CalculateBool(intrusive_ptr<Aspose::Cells::System::Object> obj , bool date1904);
			static bool IsRef(Aspose::Cells::System::Byte token);
			static intrusive_ptr<Aspose::Cells::System::Object> CalculateINT(intrusive_ptr<Aspose::Cells::System::Object> childResult , bool date1904);
			static bool CheckSingleCell(intrusive_ptr<Aspose::Cells::System::Array> array , intrusive_ptr<Aspose::Cells::System::Object>& result);
			static bool IsArrayToken(Aspose::Cells::System::Byte token);
			static bool IsValueToken(Aspose::Cells::System::Byte token);
			static Aspose::Cells::FormulaUtility::RefMode GetBuiltInFunctionRetRefMode(Aspose::Cells::System::Int32 functionIndex , Aspose::Cells::FormulaUtility::FormulaOType formulaType);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaUtility::RefMode>> GetBuiltInFunctionParamsRefMode(Aspose::Cells::System::Int32 functionIndex , Aspose::Cells::FormulaUtility::FormulaOType formulaType , intrusive_ptr<Aspose::Cells::FormulaTree> notation);
			static intrusive_ptr<Aspose::Cells::System::Object> ConvertToString(intrusive_ptr<Aspose::Cells::System::Object> childResult);
			static intrusive_ptr<Aspose::Cells::System::Object> ConvertToDouble(intrusive_ptr<Aspose::Cells::System::Object> childResult , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			static intrusive_ptr<Aspose::Cells::System::Object> ConvertToDouble(intrusive_ptr<Aspose::Cells::System::Object> childResult , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings , bool calculatedConsistentWithLotus);
			static intrusive_ptr<Aspose::Cells::System::Object> ConvertToDouble(intrusive_ptr<Aspose::Cells::System::Object> childResult , bool date1904);
			static intrusive_ptr<Aspose::Cells::System::Object> ConvertToDoubleInFunctionA(intrusive_ptr<Aspose::Cells::System::Object> childResult , bool date1904);
			static intrusive_ptr<Aspose::Cells::System::Object> GetStringValue(intrusive_ptr<Aspose::Cells::System::Object> result);
			static Aspose::Cells::System::Int32 GetIntValue(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::System::Object> child , bool isZeroBased);
			static void GatherStringValues(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list , intrusive_ptr<Aspose::Cells::System::Object> child);
			static void GatherValues(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list , intrusive_ptr<Aspose::Cells::System::Object> result1);
			static bool CellNameToIndex(intrusive_ptr<Aspose::Cells::System::String> cellName , Aspose::Cells::System::Int32& row , Aspose::Cells::System::Int32& column);
		public:
			virtual ~FormulaHelper();
	};

}

}

}
