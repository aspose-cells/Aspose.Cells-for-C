#pragma once
#include "System/Array2D.h"
//#include "System/Boxing.h"
//#include "System/Int16.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_CACHEDAREAWRAPPER() 

namespace Aspose {
namespace Cells {
class CellArea;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class IRangeDataWrapperFormulaNode;
class RangeReference;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CachedAreaWrapper : public Aspose::Cells::System::Object
	{
	private:


		class CachedAreaWrapperData;

		 friend class CachedAreaWrapper::CachedAreaWrapperData;

		
	class CachedAreaWrapperData : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Object> Data;
			Aspose::Cells::System::Int32 _rowBase;
			Aspose::Cells::System::Int32 _colBase;
			Aspose::Cells::System::Byte DataType;
			bool RefactorArray(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arr);
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> CreateWrapperForHArr(intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> rangeArea , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arr , Aspose::Cells::System::Int32 arrOffset , Aspose::Cells::System::Int32 rowIndex , bool shiftRow , bool shiftCol);
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> CreateWrapperForVArr(intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> rangeArea , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arr , Aspose::Cells::System::Int32 arrOffset , Aspose::Cells::System::Int32 colIndex , bool shiftRow , bool shiftCol);
			void CreateData(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper);
	public:

			 CachedAreaWrapperData(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper);
			bool HasBeenInitialized();
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> CreateWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::CachedAreaWrapper> caw , intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> rangeArea , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 CachedAreaWrapperData();
		public:
			virtual ~CachedAreaWrapperData();
	};
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::CachedAreaWrapper::CachedAreaWrapperData> WrapperData;
	public:

			Aspose::Cells::System::Int32 SupbookIndex;
			Aspose::Cells::System::Int32 SheetIndex;
			intrusive_ptr<Aspose::Cells::CellArea> RangeArea;
			 CachedAreaWrapper(intrusive_ptr<Aspose::Cells::CellArea> rangeArea , Aspose::Cells::System::Int32 supbookIndex , Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper);
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> rr , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			bool HasBeenInitialized();
			 virtual intrusive_ptr<Aspose::Cells::System::String> ToString();
			 CachedAreaWrapper();
		public:
			virtual ~CachedAreaWrapper();
	};

}

}

}
