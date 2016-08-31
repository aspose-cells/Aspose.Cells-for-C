#pragma once
#include "System/Object.h"
#include "PasteType.h"
#define STATIC_PASTEOPTIONS() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API PasteOptions : public Aspose::Cells::System::Object
#else	class PasteOptions : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::PasteType m_PasteType;
			bool m_SkipBlanks;
			bool m_OnlyVisibleCells;
			bool m_Transpose;
	public:

			Aspose::Cells::PasteType GetPasteType();
			void SetPasteType(Aspose::Cells::PasteType value);
			bool GetSkipBlanks();
			void SetSkipBlanks(bool value);
			bool GetOnlyVisibleCells();
			void SetOnlyVisibleCells(bool value);
			bool GetTranspose();
			void SetTranspose(bool value);
			 PasteOptions();
		public:
			virtual ~PasteOptions();
	};

}

}
