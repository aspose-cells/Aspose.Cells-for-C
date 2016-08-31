#pragma once
#include "System/String.h"
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_LOADDATAOPTION() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API LoadDataOption : public Aspose::Cells::System::Object
#else	class LoadDataOption : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			bool m_ImportFormula;
			bool m_OnlyCreateWorksheet;
			bool m_OnlyVisibleWorksheet;
	public:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> SheetIndexes;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> SheetNames;
			bool GetFormula();
			void SetFormula(bool value);
			bool GetImportFormula();
			void SetImportFormula(bool value);
			bool GetOnlyCreateWorksheet();
			void SetOnlyCreateWorksheet(bool value);
			bool GetOnlyVisibleWorksheet();
			void SetOnlyVisibleWorksheet(bool value);
			 LoadDataOption();
		public:
			virtual ~LoadDataOption();
	};

}

}
