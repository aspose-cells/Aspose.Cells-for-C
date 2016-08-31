#pragma once
#include "System/Object.h"
#define STATIC_INSERTOPTIONS() 


namespace Aspose {
namespace Cells {
	class InsertOptions : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 InsertOptions();
			bool CopyInfo;
			bool CopyCell;
			bool CopyCellStyle;
			bool CopyStyleFromCurrentRow;
		public:
			virtual ~InsertOptions();
	};

}

}
