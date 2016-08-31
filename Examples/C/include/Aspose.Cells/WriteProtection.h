#pragma once
//#include "System/StringHelperPal.h"
#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/String.h"
#include "System/Object.h"
#define STATIC_WRITEPROTECTION() 

namespace Aspose {
namespace Cells {
namespace Encryption {
class EncrypterInfo;
}
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API WriteProtection : public Aspose::Cells::System::Object
#else	class WriteProtection : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			bool m_RecommendReadOnly;
	public:

			intrusive_ptr<Aspose::Cells::System::String> User;
			intrusive_ptr<Aspose::Cells::Encryption::EncrypterInfo> _AlgorithmInfo;
			intrusive_ptr<Aspose::Cells::Encryption::EncrypterInfo> GetAlgorithmInfo();
			void SetAlgorithmInfo(intrusive_ptr<Aspose::Cells::Encryption::EncrypterInfo> value);
			bool GetRecommendReadOnly();
			void SetRecommendReadOnly(bool value);
			bool IsWriteProtected();
			void SetPassword(intrusive_ptr<Aspose::Cells::System::String> value);
			bool ValidatePassword(intrusive_ptr<Aspose::Cells::System::String> password);
			Aspose::Cells::System::UInt16 GetHashPassword();
			void SetHashPassword(Aspose::Cells::System::UInt16 value);
			void Copy(intrusive_ptr<Aspose::Cells::WriteProtection> source);
			 WriteProtection();
		public:
			virtual ~WriteProtection();
	};

}

}
