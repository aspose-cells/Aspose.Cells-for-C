#pragma once
#include "ICellsLicense.h"
#include "System/Object.h"
#define STATIC_CELLSLICENSE() 


namespace Aspose {
namespace Cells {
	class CellsLicense : public Aspose::Cells::ICellsLicense
	{
	private:

			void Init_Vars();
	public:

			bool IsLicensed();
			 CellsLicense();
		public:
			virtual ~CellsLicense();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}
