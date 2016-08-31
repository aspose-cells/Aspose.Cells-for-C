#pragma once
#include "System/Object.h"
#define STATIC_REPLACEOPTIONS() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ReplaceOptions : public Aspose::Cells::System::Object
#else	class ReplaceOptions : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			bool m_isCaseSensitive;
			bool m_MatchEntireCellContents;
	public:

			bool IsCaseSensitive();
			void SetIsCaseSensitive(bool value);
			bool GetCaseSensitive();
			void SetCaseSensitive(bool value);
			bool GetMatchEntireCellContents();
			void SetMatchEntireCellContents(bool value);
			 ReplaceOptions();
		public:
			virtual ~ReplaceOptions();
	};

}

}
