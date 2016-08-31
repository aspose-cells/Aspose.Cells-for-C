#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_VERIFICATIONSUPERVISOR()  Static_VerificationSupervisor()


namespace Aspose {
namespace License {
namespace Hackers {
	class VerificationSupervisor : public Aspose::Cells::System::Object
	{
	protected:

			static void Static_VerificationSupervisor();
	private:

			void Init_Vars();
			static Aspose::Cells::System::Int32 mMethodCalledFlag1;
			static bool mMethodCalledFlag2;
			static bool mDummyField1;
			static Aspose::Cells::System::Int32 mSignatureInvalidFlag;
	public:

			static void Clear();
			static Aspose::Cells::System::Int32 EnsureIfAllMethodsInvoked();
			static Aspose::Cells::System::Int32 GetSignatureInvalidFlag();
			static void SetSignatureInvalidFlag(Aspose::Cells::System::Int32 value);
			static Aspose::Cells::System::Int32 GetMethodCalledFlag1();
			static void SetMethodCalledFlag1(Aspose::Cells::System::Int32 value);
			static bool GetMethodCalledFlag2();
			static void SetMethodCalledFlag2(bool value);
			static bool GetDummyProperty1();
			static void SetDummyProperty1(bool value);
			 static  bool StaticConstructIsFirst;
			 VerificationSupervisor();
		public:
			virtual ~VerificationSupervisor();
	};

}

}

}
