#pragma once
//#include "System/Int32.h"
#include "System/UInt16.h"
#include "System/Object.h"
#define STATIC_WORKBOOKPROTECTION() 

namespace Aspose {
namespace Cells {
namespace Encryption {
class EncrypterInfo;
}
}
}

namespace Aspose {
namespace Cells {
	class WorkbookProtection : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			bool m_LockWindows;
			bool m_LockStructure;
			intrusive_ptr<Aspose::Cells::Encryption::EncrypterInfo> _AlgorithmInfo;
			intrusive_ptr<Aspose::Cells::Encryption::EncrypterInfo> GetAlgorithmInfo();
			void SetAlgorithmInfo(intrusive_ptr<Aspose::Cells::Encryption::EncrypterInfo> value);
			Aspose::Cells::System::UInt16 GetHashPassword();
			void SetHashPassword(Aspose::Cells::System::UInt16 value);
			void Copy(intrusive_ptr<Aspose::Cells::WorkbookProtection> source);
			 WorkbookProtection();
		public:
			virtual ~WorkbookProtection();
	};

}

}
