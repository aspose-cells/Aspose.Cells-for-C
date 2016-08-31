#pragma once
#include "System/Object.h"
#include "System/Int16.h"
#include "System/Byte.h"
#include "System/Double.h"
#include "System/Int32.h"
#define STATIC_NUMBERPATTERNINFO() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class NumberPatternInfo : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Double m_Coefficient;
			Aspose::Cells::System::Byte m_Precision;
			Aspose::Cells::System::Int16 m_DecimalPos;
			Aspose::Cells::System::Int16 m_EPos;
			Aspose::Cells::System::Byte m_Flag;
			bool GetFlag(Aspose::Cells::System::Int32 mask);
			void SetFlag(Aspose::Cells::System::Int32 mask , bool flag);
	public:

			Aspose::Cells::System::Double GetCoefficient();
			void SetCoefficient(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Int32 GetPrecision();
			void SetPrecision(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetDecimalPos();
			void SetDecimalPos(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetEPos();
			void SetEPos(Aspose::Cells::System::Int32 value);
			bool IsEmptyIntegerPart();
			void SetIsEmptyIntegerPart(bool value);
			bool IsEmptyDecimalPart();
			void SetIsEmptyDecimalPart(bool value);
			bool HasThousandGroup();
			void SetHasThousandGroup(bool value);
			bool HasParenthesis();
			void SetHasParenthesis(bool value);
			 NumberPatternInfo();
		public:
			virtual ~NumberPatternInfo();
	};

}

}

}

}
