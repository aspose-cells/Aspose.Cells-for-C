#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Char.h"
#include "System/IComparable.h"
//#include "System/Int32Helper.h"
#include "System/Int32.h"
//#include "System/Text/StringBuilder.h"
#include "AreaIntersectType.h"
#include "System/Array1D.h"
#define STATIC_CELLAREA() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API CellArea : public Aspose::Cells::System::IComparable , public Aspose::Cells::System::Object
#else	class CellArea : public Aspose::Cells::System::IComparable , public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::CellArea> Empty;
			Aspose::Cells::System::Int32 StartRow;
			Aspose::Cells::System::Int32 EndRow;
			Aspose::Cells::System::Int32 StartColumn;
			Aspose::Cells::System::Int32 EndColumn;
			Aspose::Cells::System::Int32 CompareTo(intrusive_ptr<Aspose::Cells::System::Object> obj);
			 virtual intrusive_ptr<Aspose::Cells::System::String> ToString();
			bool Equals(intrusive_ptr<Aspose::Cells::CellArea> ca);
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			bool IsIntersect(intrusive_ptr<Aspose::Cells::CellArea> another);
			Aspose::Cells::AreaIntersectType GetIntersectType(intrusive_ptr<Aspose::Cells::CellArea> another);
			bool IsEmpty();
			bool IsSingle();
			bool IsSingleRow();
			bool IsSingleColumn();
			bool ContainsRow(Aspose::Cells::System::Int32 row);
			bool ContainsColumn(Aspose::Cells::System::Int32 column);
			bool Contains(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Int32 GetHeight();
			Aspose::Cells::System::Int32 GetWidth();
			intrusive_ptr<Aspose::Cells::System::String> ToRefTo(Aspose::Cells::System::Int32 limitRow , Aspose::Cells::System::Int32 limitColumn , bool absolute);
			bool IsWholeRow(Aspose::Cells::System::Int32 limitColumn);
			bool IsWholeColumn(Aspose::Cells::System::Int32 limitRow);
			static intrusive_ptr<Aspose::Cells::CellArea> CreateCellArea(intrusive_ptr<Aspose::Cells::CellArea> ca);
			static intrusive_ptr<Aspose::Cells::CellArea> CreateCellArea(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			static intrusive_ptr<Aspose::Cells::CellArea> CreateCellArea(intrusive_ptr<Aspose::Cells::System::String> area);
			static intrusive_ptr<Aspose::Cells::CellArea> CreateCellArea(intrusive_ptr<Aspose::Cells::System::String> startCellName , intrusive_ptr<Aspose::Cells::System::String> endCellName);
			static intrusive_ptr<Aspose::Cells::System::Object> GetCellAreaByName(intrusive_ptr<Aspose::Cells::System::String> s , bool force);
			 CellArea();
		public:
			virtual ~CellArea();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}
