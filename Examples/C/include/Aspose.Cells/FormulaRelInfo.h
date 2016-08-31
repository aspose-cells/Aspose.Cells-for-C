#pragma once
#include "CellArea.h"
#include "SaveFormat.h"
#include "FormulaProcessType.h"
#include "System/Text/StringBuilder.h"
#include "System/Double.h"
#include "System/Array1D.h"
#include "System/Char.h"
//#include "System/UInt16.h"
#include "AddressMode.h"
#include "System/String.h"
//#include "System/Collections/Hashtable.h"
#include "FormulaOwnerType.h"
#include "System/Int64.h"
#include "System/Exception.h"
#include "RefMode.h"
#include "System/Object.h"
//#include "System/Boxing.h"
//#include "System/Byte.h"
#include "System/Int32.h"
#include "System/Int16.h"
#include "System/DateTime.h"
//#include "System/CharHelper.h"
//#include "System/StringHelperPal.h"
#include "ShareableDimensionType.h"
#define STATIC_FORMULARELINFO() 

namespace Aspose {
namespace Cells {
class CellsException;
class Workbook;
class Cell;
class Worksheet;
class FormulaCell;
class Cells;
class CalculationOptions;
class ExternalSheet;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class FormulaBinToValue;
class IThrowableCalculation;
class FormulaRelCache;
class IRangeDataWrapperFormulaNode;
class FormulaNodeDouble;
class FormulaTokenVisitor;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaRelInfo : public Aspose::Cells::System::Object
	{
	private:


		class CXXFinallyParseFormula;

		 friend class FormulaRelInfo::CXXFinallyParseFormula;

		
	class CXXFinallyParseFormula : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			bool isCache;
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> owner;
	public:

			 CXXFinallyParseFormula(bool isCache , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> owner);
			 CXXFinallyParseFormula();
		public:
			virtual ~CXXFinallyParseFormula();
	};
	private:

			void Init_Vars();
			void CalculateStack();
			bool ProcessThrowableCalculation(intrusive_ptr<Aspose::Cells::FormulaModel::IThrowableCalculation> calc , intrusive_ptr<Aspose::Cells::FormulaCell> fc);
	public:

			Aspose::Cells::FormulaModel::FormulaOwnerType OwnerType;
			Aspose::Cells::FormulaModel::AddressMode _AddressMode;
			bool IsA1;
			Aspose::Cells::Worksheet* Sheet;
			intrusive_ptr<Aspose::Cells::Cells> Cells;
			intrusive_ptr<Aspose::Cells::System::Object> Owner;
			Aspose::Cells::System::Int32 BaseRow;
			Aspose::Cells::System::Int16 BaseColumn;
			bool IsArrayFormula;
			bool IsSharedFormula;
			bool CacheForShare;
			intrusive_ptr<Aspose::Cells::CellArea> RangeFormulaArea;
			Aspose::Cells::FormulaModel::ShareableDimensionType SharedWrapperCacheType;
			Aspose::Cells::System::Int32 SheetIndex;
			intrusive_ptr<Aspose::Cells::ExternalSheet> ExternalSheet;
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelCache> Cache;
			void Dispose();
			void DisposeWithCache();
			 FormulaRelInfo(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			 FormulaRelInfo(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			 FormulaRelInfo(intrusive_ptr<Aspose::Cells::Workbook> workbook , Aspose::Cells::SaveFormat saveFormat);
			 FormulaRelInfo(intrusive_ptr<Aspose::Cells::Workbook> workbook , Aspose::Cells::FormulaModel::FormulaProcessType procType , intrusive_ptr<Aspose::Cells::CalculationOptions> opts);
			 FormulaRelInfo(intrusive_ptr<Aspose::Cells::Worksheet> sheet , Aspose::Cells::FormulaModel::FormulaProcessType procType , intrusive_ptr<Aspose::Cells::CalculationOptions> opts);
			 FormulaRelInfo(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> source);
			void ResetForOwnerChanged();
			void SetOwner(intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> GetInstanceForArrayMode();
			void Reset(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			void Reset(Aspose::Cells::System::Int32 sheetIndex);
			void ResetShareableDimensionType();
			void RecoverShareableDimensionType(Aspose::Cells::FormulaModel::ShareableDimensionType origType);
			bool GetTraceCurrent();
			Aspose::Cells::System::Char GetListSeparator();
			bool HasListObjectHeader();
			intrusive_ptr<Aspose::Cells::System::String> GetSheetName(intrusive_ptr<Aspose::Cells::System::String> sheetName);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ParseFormula(intrusive_ptr<Aspose::Cells::System::String> formula , Aspose::Cells::FormulaUtility::RefMode refMode);
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaTokenVisitor> GetFormulaTokenVisitor();
			bool GetNeedExpression();
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeDouble> ToDoubleNode(intrusive_ptr<Aspose::Cells::System::DateTime> dt);
			Aspose::Cells::System::Double ToDouble(intrusive_ptr<Aspose::Cells::System::DateTime> t);
			bool ValidDateTime(Aspose::Cells::System::Double d);
			intrusive_ptr<Aspose::Cells::System::DateTime> ToDateTime(Aspose::Cells::System::Double d);
			intrusive_ptr<Aspose::Cells::System::String> GetCellName();
			bool IsCurrent(intrusive_ptr<Aspose::Cells::ExternalSheet> es);
			intrusive_ptr<Aspose::Cells::ExternalSheet> GetExternalSheet(Aspose::Cells::System::Int32 sheetIndex);
			intrusive_ptr<Aspose::Cells::ExternalSheet> GetExternalSheet(Aspose::Cells::System::Int32 firstSheet , Aspose::Cells::System::Int32 lastSheet);
			intrusive_ptr<Aspose::Cells::ExternalSheet> GetExternalSheet(Aspose::Cells::System::Int32 supbookIdx , Aspose::Cells::System::Int32 firstSheet , Aspose::Cells::System::Int32 lastSheet);
			void CalculateCircular(intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			void ProcessCalculation(intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ProcessGetSingleValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> node);
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> ProcessArrayHeader(intrusive_ptr<Aspose::Cells::FormulaCell> head , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> root);
			void ProcessSetValue(intrusive_ptr<Aspose::Cells::FormulaCell> fc , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> result);
			void ProcessEngine(intrusive_ptr<Aspose::Cells::FormulaCell> fc , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaBinToValue> engine);
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> BuildCircularInfo(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> BuildBaseInfo(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> BuildDebugInfo(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			void Debug(intrusive_ptr<Aspose::Cells::CellsException> e);
			void Debug(intrusive_ptr<Aspose::Cells::System::Exception> e);
			intrusive_ptr<Aspose::Cells::Cell> GetCellByFormulaKey(Aspose::Cells::System::Int64 key);
			intrusive_ptr<Aspose::Cells::Cell> GetCellByCellKey(Aspose::Cells::System::Int64 key);
			Aspose::Cells::System::Int64 GetCellFormulaKey(intrusive_ptr<Aspose::Cells::System::String> sheetName , intrusive_ptr<Aspose::Cells::System::String> cellName);
			void AddLeaf(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 cellRow , Aspose::Cells::System::Int32 cellCol);
			 FormulaRelInfo();
		public:
			virtual ~FormulaRelInfo();
	};

}

}

}
