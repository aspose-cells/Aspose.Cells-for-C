#pragma once
#include "System/Object.h"
#include "System/Byte.h"
#include "System/Collections/ArrayList.h"
#include "System/UInt16.h"
//#include "System/Int32.h"
#define STATIC_SXRULE() 


namespace Aspose {
namespace Cells {
namespace Pivot {
	class SxRule : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 SxRule();
			Aspose::Cells::System::Byte Dim;
			Aspose::Cells::System::Byte FieldIndex;
			Aspose::Cells::System::UInt16 Option;
			Aspose::Cells::System::UInt16 Reserve;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> Filts;
			Aspose::Cells::System::Byte IrwFirst;
			Aspose::Cells::System::Byte IrwLast;
			Aspose::Cells::System::Byte IcolFirst;
			Aspose::Cells::System::Byte IcolLast;
			bool CollapsedLevelsAreSubtotals;
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::SxRule> rule);
			bool GetDataOnly();
			void SetDataOnly(bool value);
			bool GetLabelOnly();
			void SetLabelOnly(bool value);
			bool GetGrandRw();
			void SetGrandRw(bool value);
			bool GetGrandCol();
			void SetGrandCol(bool value);
			bool GetCacheBased();
			void SetCacheBased(bool value);
			Aspose::Cells::System::Byte GetSxAxis();
			void SetSxAxis(Aspose::Cells::System::Byte value);
			Aspose::Cells::System::Byte GetSxrType();
			void SetSxrType(Aspose::Cells::System::Byte value);
			bool GetLineMode();
			void SetLineMode(bool value);
			bool GetFuzzy();
			void SetFuzzy(bool value);
			bool GetPart();
			void SetPart(bool value);
		public:
			virtual ~SxRule();
	};

}

}

}
