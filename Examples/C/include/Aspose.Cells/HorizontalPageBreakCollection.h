#pragma once
#include "HorizontalPageBreak.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Math.h"
#include "System/Int32.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_HORIZONTALPAGEBREAKCOLLECTION() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API HorizontalPageBreakCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class HorizontalPageBreakCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
	public:

			 HorizontalPageBreakCollection();
			intrusive_ptr<Aspose::Cells::HorizontalPageBreak> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::HorizontalPageBreak> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> cellName);
			Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn);
			void AddRead(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn);
			void AddRead(Aspose::Cells::System::Int32 row);
			void AddRead(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 row);
			Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> cellName);
			void Copy(intrusive_ptr<Aspose::Cells::HorizontalPageBreakCollection> source);
			void RemoveAt(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 IsBreaked(Aspose::Cells::System::Int32 row);
			void InsertRows(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 rowNumber);
		public:
			virtual ~HorizontalPageBreakCollection();
	};

}

}
