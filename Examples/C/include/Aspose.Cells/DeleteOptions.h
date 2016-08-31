#pragma once
#include "System/Object.h"
#define STATIC_DELETEOPTIONS() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API DeleteOptions : public Aspose::Cells::System::Object
#else	class DeleteOptions : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			bool OnlyData;
			bool _UpdateReference;
			bool GetUpdateReference();
			void SetUpdateReference(bool value);
			 DeleteOptions();
		public:
			virtual ~DeleteOptions();
	};

}

}
