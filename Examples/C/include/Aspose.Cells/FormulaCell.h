#pragma once
#include "FunctionIndex.h"
//#include "System/Text/StringBuilder.h"
//#include "System/Double.h"
#include "System/Array1D.h"
#include "System/Int64.h"
//#include "System/UInt16.h"
//#include "System/Array.h"
#include "ICellVisitor.h"
//#include "System/Text/Encoding.h"
#include "RawCellValueType.h"
#include "System/Collections/Hashtable.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Exception.h"
#include "System/Object.h"
//#include "System/Boxing.h"
#include "System/Byte.h"
#include "CellData.h"
#include "System/Int32.h"
//#include "System/Char.h"
#include "System/Int16.h"
//#include "System/StringHelperPal.h"
//#include "System/DateTime.h"
#define STATIC_FORMULACELL() 

namespace Aspose {
namespace Cells {
class FormulaTable;
class CopyOptions;
class Cell;
class WorksheetCollection;
class ReferredAreaCollection;
class Cells;
class ArrayFormula;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class FormulaBinToValue;
class FormulaRelInfo;
class CachedArrayFormulaResult;
}
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractRow;
}
}
}

namespace Aspose {
namespace Cells {
	class FormulaCell : public Aspose::Cells::System::Object
	{
	private:


		class CellVisitorSetCalcResultArray;

		 friend class FormulaCell::CellVisitorSetCalcResultArray;

		
	class CellVisitorSetCalcResultArray : public Aspose::Cells::CellsSs::ICellVisitor
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> m_RelInfo;
			intrusive_ptr<Aspose::Cells::FormulaModel::CachedArrayFormulaResult> m_Cache;
			Aspose::Cells::System::Int32 m_RowCount;
			Aspose::Cells::System::Int32 m_ColCount;
			Aspose::Cells::System::Int64 m_Key;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> m_Buffer;
			bool m_Backup;
	public:

			 CellVisitorSetCalcResultArray(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int64 key , intrusive_ptr<Aspose::Cells::FormulaModel::CachedArrayFormulaResult> cache);
			bool Visit(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 position);
			 CellVisitorSetCalcResultArray();
		public:
			virtual ~CellVisitorSetCalcResultArray();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};
	private:

			void Init_Vars();
			Aspose::Cells::System::Byte m_Options;
			void SetPropsForFunc(Aspose::Cells::FormulaModel::FunctionIndex id);
			void CalculateArrayFormula(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			void CalcEngine(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaBinToValue> engine , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
	public:

			 static const Aspose::Cells::System::Byte CALCULATION_FLAG_NONE;
			 static const Aspose::Cells::System::Byte CALCULATION_FLAG_CALCULATING;
			 static const Aspose::Cells::System::Byte CALCULATION_FLAG_CALCULATED;
			 static const Aspose::Cells::System::Byte CALCULATION_FLAG_TABLE;
			Aspose::Cells::System::Int32 Index;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> BinaryFormula;
			Aspose::Cells::CellsSs::RawCellValueType RawType;
			intrusive_ptr<Aspose::Cells::System::Object> Value;
			Aspose::Cells::System::Int32 CellRow;
			Aspose::Cells::System::Int16 CellColumn;
			 FormulaCell(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex);
			 FormulaCell(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> binary);
			 FormulaCell(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex , intrusive_ptr<Aspose::Cells::System::String> formula);
			 virtual intrusive_ptr<Aspose::Cells::ArrayFormula> GetArrayFormula();
			 virtual intrusive_ptr<Aspose::Cells::FormulaTable> GetFormulaTable();
			Aspose::Cells::System::Byte GetCalculationFlag();
			void SetCalculationFlag(Aspose::Cells::System::Byte value);
			bool IsInCircle();
			void SetIsInCircle(bool value);
			bool IsInArray();
			void SetIsInArray(bool value);
			bool IsVolatile();
			bool IsSubtotal();
			bool IsAggregate();
			bool GetFormulaPropsInited();
			void InitFormulaProps(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::FormulaCell> GetHeader(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
			bool IsFormulaString();
			intrusive_ptr<Aspose::Cells::System::String> GetCellFormula();
			void Parse(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 sheetIndex);
			 virtual bool IsArrayHeader();
			 virtual bool IsSharedFormulaHeader();
			 virtual bool IsInTable(intrusive_ptr<Aspose::Cells::Cells> cells);
			 virtual bool IsInSharedFormula(intrusive_ptr<Aspose::Cells::Cells> cells);
			 virtual bool HasHasExternRef(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> extSheetRefs , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> NamesContainsExtSheetRefs);
			void CopyCommon(intrusive_ptr<Aspose::Cells::FormulaCell> source);
			 virtual intrusive_ptr<Aspose::Cells::FormulaCell> Clone(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex , intrusive_ptr<Aspose::Cells::WorksheetCollection> sourceSheets , intrusive_ptr<Aspose::Cells::WorksheetCollection> destSheets , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption);
			static Aspose::Cells::System::Int64 ToKey(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 fcIndex);
			static Aspose::Cells::System::Int32 GetSheetFromKey(Aspose::Cells::System::Int64 key);
			static Aspose::Cells::System::Int32 GetIndexFromKey(Aspose::Cells::System::Int64 key);
			void GetPrecedents(intrusive_ptr<Aspose::Cells::ReferredAreaCollection> areas , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			void Calculate(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			void CalcAndSet(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> result , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			void SetCalculated(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> result , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			bool NeedRawNode(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 ownerSheetIndex);
			bool PrepareCalculation(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 ownerSheetIndex);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetFormulaNodeValue();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetFormulaNodeOfBin(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool cache);
			intrusive_ptr<Aspose::Cells::System::String> GetFormula(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			void SetFormulaValue(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::System::Object> value);
			void FromUnparsedCellData(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::CellsSs::CellData> data);
			 virtual intrusive_ptr<Aspose::Cells::System::String> ToString();
			 FormulaCell();
		public:
			virtual ~FormulaCell();
	};

}

}
