#pragma once
//#include "System/Collections/IEnumerator.h"
#include "ThrowableCalculationSetValue.h"
#include "SaveFormat.h"
#include "FormulaProcessType.h"
#include "System/Double.h"
#include "System/Array1D.h"
//#include "System/Char.h"
//#include "System/UInt16.h"
//#include "System/Array.h"
#include "System/Text/Encoding.h"
#include "System/Collections/Hashtable.h"
#include "LangCode.h"
#include "System/String.h"
#include "ThrowableCalculationEngine.h"
#include "System/Object.h"
//#include "System/Boxing.h"
//#include "System/Byte.h"
#include "System/Int32.h"
#include "System/Int16.h"
#include "ThrowableCalculationArray.h"
#include "System/Int64.h"
#include "System/DateTime.h"
//#include "System/Math.h"
//#include "System/StringHelperPal.h"
//#include "System/Collections/ICollection.h"
#include "System/Array2D.h"
#include "System/Random.h"
#include "System/TypeCode.h"
//#include "System/Text/StringBuilder.h"
#define STATIC_FORMULARELCACHE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class CalculationStackOverflowException;
class CellVisitorSharedFormula;
class IFormulaNode;
class FormulaCellBackupData;
class CalculationCircularException;
class CachedAreaFormulaResult;
}
}
}
namespace Aspose {
namespace Cells {
namespace Collections {
class CircularArray;
}
}
}
namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class FormatRelInfo;
class ICellsFormatter;
}
}
}
}
namespace Aspose {
namespace Cells {
class CellArea;
class Workbook;
class FormattedInfo;
class ExternalSheet;
class WorksheetCollection;
class FormulaCell;
class NameCommonInfo;
class CalculationOptions;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaRelCache : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::CellVisitorSharedFormula> mVisitorSharedFormula;
			bool mHasVisitorForShared;
			Aspose::Cells::System::Int32 mTableFormulaStackPos;
			Aspose::Cells::System::Int32 StepOfStackBreak;
			bool CheckRemove(intrusive_ptr<Aspose::Cells::FormulaModel::CachedAreaFormulaResult> result , Aspose::Cells::System::Int32 otherSheet);
			intrusive_ptr<Aspose::Cells::ExternalSheet> InitExternalSheet();
			intrusive_ptr<Aspose::Cells::System::Text::Encoding> GetRegionEncoding();
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::CalculationStackOverflowException> StackOverFlowException;
			static intrusive_ptr<Aspose::Cells::FormulaModel::CalculationCircularException> CircularExceptioin;
			intrusive_ptr<Aspose::Cells::FormulaModel::ThrowableCalculationSetValue> CalculationSetValue;
			intrusive_ptr<Aspose::Cells::FormulaModel::ThrowableCalculationArray> CalculationArrayHead;
			intrusive_ptr<Aspose::Cells::FormulaModel::ThrowableCalculationEngine> CalculationEngine;
			Aspose::Cells::Workbook* Workbook;
			Aspose::Cells::WorksheetCollection* Worksheets;
			intrusive_ptr<Aspose::Cells::ExternalSheet> BookExternalSheet;
			Aspose::Cells::System::Int32 InternalSupbook;
			bool Is2003;
			intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> FormatRelInfo;
			bool IsDate1904;
			bool PrecisionAsDisplayed;
			Aspose::Cells::System::Double MaxDate;
			intrusive_ptr<Aspose::Cells::System::DateTime> ZeroDate;
			bool IterCircular;
			Aspose::Cells::System::Int32 IterCount;
			bool BuildChain;
			Aspose::Cells::FormulaModel::FormulaProcessType ProcessType;
			intrusive_ptr<Aspose::Cells::System::Text::Encoding> RegionEncoding;
			intrusive_ptr<Aspose::Cells::System::Random> RandGenerator;
			bool IsZS;
			Aspose::Cells::SaveFormat _SaveFormat;
			bool InCircular;
			Aspose::Cells::System::Int32 StackCalcRemainder;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> Formatters;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ExportedSupbookNameToIndex;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> SheetNameToQuotedIfNeeded;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> AreaFormulaResults;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ExternalSheets;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> CriteriaCache;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> VariableCells;
			bool HasVariableCells;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::FormulaModel::FormulaCellBackupData*>> BackupFormulaCells;
			Aspose::Cells::System::Int16 FormulaCellBackupSN;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> CellStack;
			Aspose::Cells::System::Int32 CellStackSize;
			Aspose::Cells::System::Int32 StackNextStop;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::NameCommonInfo*>> NameStack;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> NameToCellStackSize;
			Aspose::Cells::System::Int32 NameStackSize;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> CircularFormula;
			Aspose::Cells::System::Int32 CircularFormulaCount;
			intrusive_ptr<Aspose::Cells::Collections::CircularArray> AreaWrapperCache;
			intrusive_ptr<Aspose::Cells::CalculationOptions> CalcOptions;
			void Dispose();
			 FormulaRelCache(intrusive_ptr<Aspose::Cells::Workbook> workbook , Aspose::Cells::FormulaModel::FormulaProcessType procType , intrusive_ptr<Aspose::Cells::CalculationOptions> opts);
			 FormulaRelCache(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			void ClearSheetCache(Aspose::Cells::System::Int32 sheetIndex);
			void AddCachedFormulaResult(intrusive_ptr<Aspose::Cells::System::Object> key , intrusive_ptr<Aspose::Cells::FormulaModel::CachedAreaFormulaResult> result);
			void AddCachedFormulaResult(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::FormulaModel::CachedAreaFormulaResult> result);
			intrusive_ptr<Aspose::Cells::FormulaModel::CachedAreaFormulaResult> GetAreaFormulaResult(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::FormulaModel::CachedAreaFormulaResult> GetAreaFormulaResult(intrusive_ptr<Aspose::Cells::System::Object> key);
			void RemoveAreaFormulaResult(intrusive_ptr<Aspose::Cells::System::Object> key);
			void ExpandStack();
			void ResetNextStop();
			Aspose::Cells::System::Int32 GetStackRemainder(Aspose::Cells::System::Int32 pos);
			void SetStackRemainder(Aspose::Cells::System::Int32 remainder);
			void PushStack(Aspose::Cells::System::Int64 key);
			Aspose::Cells::System::Int64 PopStack();
			void PushNameStack(intrusive_ptr<Aspose::Cells::NameCommonInfo> props);
			intrusive_ptr<Aspose::Cells::NameCommonInfo> PopNameStack();
			void CleanUpStack();
			void SetVisitorForSharedFormula(intrusive_ptr<Aspose::Cells::FormulaModel::CellVisitorSharedFormula> visitor);
			intrusive_ptr<Aspose::Cells::FormulaModel::CellVisitorSharedFormula> GetVisitorForSharedFormula();
			void OnCircular(intrusive_ptr<Aspose::Cells::FormulaCell> fc , Aspose::Cells::System::Int32 ownerSheetIndex);
			void ShiftStackForCircular();
			void SortCircularChain(Aspose::Cells::System::Int32 startPos);
			void FinishCircular(Aspose::Cells::System::Int32 startPos);
			void ClearFlagForCircularFormula();
			void RecoverFromCircular();
			void PushVariableCell(Aspose::Cells::System::Int64 key , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value);
			intrusive_ptr<Aspose::Cells::CellArea> GatherVariableCell(intrusive_ptr<Aspose::Cells::CellArea> ca , Aspose::Cells::System::Int32 sheetIndex);
			bool ContainsVariableCell(intrusive_ptr<Aspose::Cells::CellArea> ca , Aspose::Cells::System::Int32 sheetIndex);
			bool IsVariable(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			bool NeedCalculationInTable(Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::FormulaCell> fc , bool updateSN);
			void BackupFormulaCell(Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			void UpdateFormulaCellBackup(Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			void OnTableFormulaStackOverflow(Aspose::Cells::System::Int64 key);
			Aspose::Cells::System::Int32 GetMaxRowIndex();
			Aspose::Cells::System::Int32 GetMaxColumnIndex();
			bool GetUseExportedSupbookIndex();
			Aspose::Cells::System::Int32 GetExportedSupbookIndex(Aspose::Cells::System::Int32 supbookIndex);
			void InitExported2007();
			intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> GetFormatter(intrusive_ptr<Aspose::Cells::System::String> custom);
			intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::System::String> custom , Aspose::Cells::System::TypeCode type , intrusive_ptr<Aspose::Cells::System::Object> value);
			intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::System::String> custom , intrusive_ptr<Aspose::Cells::System::Object> value);
			 FormulaRelCache();
		public:
			virtual ~FormulaRelCache();
	};

}

}

}
