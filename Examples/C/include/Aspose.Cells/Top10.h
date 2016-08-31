#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_TOP10() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API Top10 : public Aspose::Cells::System::Object
#else	class Top10 : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			bool _isPercent;
			bool _isBottom;
			Aspose::Cells::System::Int32 _rank;
	public:

			void Copy(intrusive_ptr<Aspose::Cells::Top10> source);
			bool IsPercent();
			void SetIsPercent(bool value);
			bool IsBottom();
			void SetIsBottom(bool value);
			Aspose::Cells::System::Int32 GetRank();
			void SetRank(Aspose::Cells::System::Int32 value);
			 Top10();
		public:
			virtual ~Top10();
	};

}

}
