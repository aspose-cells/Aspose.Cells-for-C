#pragma once
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Object.h"
#define STATIC_PAGESAVINGARGS() 


namespace Aspose {
namespace Cells {
namespace Rendering {
#ifdef WIN32

	class ASPOSE_CELLS_API PageSavingArgs : public Aspose::Cells::Systems::Object
#else
	class PageSavingArgs : public Aspose::Cells::System::Object
#endif


	{
	public:

			 PageSavingArgs(Aspose::Cells::Systems::Int32 pageIndex , Aspose::Cells::Systems::Int32 pageCount);
	private:

			void Init_Vars();
			Aspose::Cells::Systems::Int32 mPageIndex;
			Aspose::Cells::Systems::Int32 mPageCount;
	public:

			/// <summary>
			/// Get the page index.
			/// </summary>
			Aspose::Cells::Systems::Int32 GetPageIndex();
			/// <summary>
			/// Get the page count.
			/// </summary>
			Aspose::Cells::Systems::Int32 GetPageCount();
			 PageSavingArgs();
		public:
			virtual ~PageSavingArgs();
	};

}

}

}
