#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#include "IPositionEnumerator.h"
#define STATIC_EMPTYPOSITIONENUMERATOR() 


namespace Aspose {
namespace Cells {
namespace CellsSs {
	class EmptyPositionEnumerator : public Aspose::Cells::CellsSs::IPositionEnumerator
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 nextPos;
	public:

			 EmptyPositionEnumerator(Aspose::Cells::System::Int32 nextPos);
			Aspose::Cells::System::Int32 MoveNext();
			void MoveToId(Aspose::Cells::System::Int32 id);
			void MoveToPosition(Aspose::Cells::System::Int32 newPos);
			void Reset();
			void Sync(Aspose::Cells::System::Int32 prevId , Aspose::Cells::System::Int32 prevPos);
			 EmptyPositionEnumerator();
		public:
			virtual ~EmptyPositionEnumerator();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
