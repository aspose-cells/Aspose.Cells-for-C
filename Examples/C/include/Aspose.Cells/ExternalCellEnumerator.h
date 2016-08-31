#pragma once
#include "System/Object.h"
#include "System/Int16.h"
#include "System/Collections/IEnumerator.h"
#include "CellData.h"
#include "System/Int32.h"
//#include "System/Byte.h"
#define STATIC_EXTERNALCELLENUMERATOR() 

namespace Aspose {
namespace Cells {
class ExternalRow;
}
}

namespace Aspose {
namespace Cells {
	class ExternalCellEnumerator : public Aspose::Cells::System::Collections::IEnumerator , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::ExternalRow> _parent;
			Aspose::Cells::System::Int16 _startColumn;
			Aspose::Cells::System::Int16 _endColumn;
			Aspose::Cells::System::Int32 _startPos;
			Aspose::Cells::System::Int32 _lengthOfBytes;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> _data;
			Aspose::Cells::System::Int32 _pos;
	public:

			 ExternalCellEnumerator(intrusive_ptr<Aspose::Cells::ExternalRow> parent , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn);
			bool MoveNext();
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> GetCurrentCellData();
			intrusive_ptr<Aspose::Cells::System::Object> GetCurrent();
			void Reset();
			bool MoveTo(Aspose::Cells::System::Int32 column);
			 ExternalCellEnumerator();
		public:
			virtual ~ExternalCellEnumerator();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}
