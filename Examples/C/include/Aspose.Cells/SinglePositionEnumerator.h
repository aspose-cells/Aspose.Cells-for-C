#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#include "IPositionEnumerator.h"
#define STATIC_SINGLEPOSITIONENUMERATOR() 


namespace Aspose {
namespace Cells {
namespace CellsSs {
	class SinglePositionEnumerator : public Aspose::Cells::CellsSs::IPositionEnumerator
	{
	private:

			void Init_Vars();
			bool processed;
			Aspose::Cells::System::Int32 pos;
			Aspose::Cells::System::Int32 nextPos;
	public:

			 SinglePositionEnumerator(Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 nextPos);
			Aspose::Cells::System::Int32 MoveNext();
			void MoveToId(Aspose::Cells::System::Int32 id);
			void MoveToPosition(Aspose::Cells::System::Int32 newPos);
			void Reset();
			void Sync(Aspose::Cells::System::Int32 prevId , Aspose::Cells::System::Int32 prevPos);
			 SinglePositionEnumerator();
		public:
			virtual ~SinglePositionEnumerator();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
