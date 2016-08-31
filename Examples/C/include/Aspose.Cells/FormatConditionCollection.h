#pragma once
//#include "System/Int32Helper.h"
//#include "System/UInt16.h"
#include "System/Collections/ArrayList.h"
#include "FormatCondition.h"
//#include "System/Int16.h"
#include "OperatorType.h"
//#include "System/StringHelperPal.h"
//#include "System/ArgumentException.h"
//#include "System/BitConverter.h"
//#include "System/Array.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#include "FormatConditionType.h"
#define STATIC_FORMATCONDITIONCOLLECTION() 

namespace Aspose {
namespace Cells {
class Worksheet;
class ConditionalFormattingCollection;
class CellArea;
class CopyOptions;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API FormatConditionCollection : public Aspose::Cells::System::Object
#else	class FormatConditionCollection : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_fcs;
	public:

			Aspose::Cells::ConditionalFormattingCollection* _u_cfs;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> Areas;
			bool _isRedraw;
			bool _isPivot;
			Aspose::Cells::Worksheet* _sheet;
			 FormatConditionCollection(intrusive_ptr<Aspose::Cells::ConditionalFormattingCollection> cfs);
			 FormatConditionCollection(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetConditions();
			void CopyData(intrusive_ptr<Aspose::Cells::FormatConditionCollection> fcs , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void CopyWithArea(intrusive_ptr<Aspose::Cells::FormatConditionCollection> fcs , intrusive_ptr<Aspose::Cells::CellArea> ca , intrusive_ptr<Aspose::Cells::CopyOptions> copyOptions);
			void CopyWithAreas(intrusive_ptr<Aspose::Cells::FormatConditionCollection> fcs , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> cas , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void Replace(intrusive_ptr<Aspose::Cells::FormatCondition> cond , Aspose::Cells::System::Int32 index);
			void SplitX14();
			bool HasX14ConditionalFormatting(bool isX14);
			Aspose::Cells::System::Int32 CountOfX14ConditionalFormatting(bool isX14);
			void Copy(intrusive_ptr<Aspose::Cells::FormatConditionCollection> fcs , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption);
			void Copy0(intrusive_ptr<Aspose::Cells::FormatConditionCollection> fcs , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> Add(intrusive_ptr<Aspose::Cells::CellArea> cellArea , Aspose::Cells::FormatConditionType type , Aspose::Cells::OperatorType operatorType , intrusive_ptr<Aspose::Cells::System::String> formula1 , intrusive_ptr<Aspose::Cells::System::String> formula2);
			Aspose::Cells::System::Int32 AddArea(intrusive_ptr<Aspose::Cells::CellArea> cellArea);
			Aspose::Cells::System::Int32 AddCondition(Aspose::Cells::FormatConditionType type , Aspose::Cells::OperatorType operatorType , intrusive_ptr<Aspose::Cells::System::String> formula1 , intrusive_ptr<Aspose::Cells::System::String> formula2);
			Aspose::Cells::System::Int32 AddCondition(Aspose::Cells::FormatConditionType type);
			Aspose::Cells::System::Int32 AddCondition(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			Aspose::Cells::System::Int32 GetCount();
			Aspose::Cells::System::Int32 GetRangeCount();
			intrusive_ptr<Aspose::Cells::FormatCondition> GetIndexObject(Aspose::Cells::System::Int32 index);
			void Set(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::FormatCondition> c);
			intrusive_ptr<Aspose::Cells::CellArea> GetCellArea(Aspose::Cells::System::Int32 index);
			void RemoveArea(Aspose::Cells::System::Int32 index);
			bool RemoveArea(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns);
			static intrusive_ptr<Aspose::Cells::CellArea> InsectArea(intrusive_ptr<Aspose::Cells::CellArea> ca1 , intrusive_ptr<Aspose::Cells::CellArea> ca2 , bool& flag);
			void RemoveCondition(Aspose::Cells::System::Int32 index);
			bool IsContantsCondition();
			bool HasMehodB();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetStartRC();
			void Read(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 recordSize);
			static Aspose::Cells::System::Int32 WriteCellAreaToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::CellArea> ca);
			void InitFormulas();
			void CheckAreaIndex(Aspose::Cells::System::Int32 index);
			void ConvertBinary(bool up);
			 FormatConditionCollection();
		public:
			virtual ~FormatConditionCollection();
	};

}

}
