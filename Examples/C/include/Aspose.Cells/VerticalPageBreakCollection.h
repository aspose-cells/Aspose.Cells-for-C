#pragma once
#include "System/Object.h"
#include "VerticalPageBreak.h"
#include "System/String.h"
//#include "System/Math.h"
#include "System/Int32.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_VERTICALPAGEBREAKCOLLECTION() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API VerticalPageBreakCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class VerticalPageBreakCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
	public:

			 VerticalPageBreakCollection();
			intrusive_ptr<Aspose::Cells::VerticalPageBreak> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::VerticalPageBreak> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> cellName);
			Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 column);
			void AddRead(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 column);
			void AddRead(Aspose::Cells::System::Int32 column);
			void AddRead(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> cellName);
			void Copy(intrusive_ptr<Aspose::Cells::VerticalPageBreakCollection> source);
			void RemoveAt(Aspose::Cells::System::Int32 index);
			void InsertColumns(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 columnNumber);
		public:
			virtual ~VerticalPageBreakCollection();
	};

}

}
