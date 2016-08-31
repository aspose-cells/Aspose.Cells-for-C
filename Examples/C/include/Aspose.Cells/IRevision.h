#pragma once
#include "System/Object.h"
#include "RevisionType.h"
#define STATIC_IREVISION() 


namespace Aspose {
namespace Cells {
namespace Revisions {
	class IRevision : public Aspose::Cells::System::Object
	{
	public:

			virtual Aspose::Cells::Revisions::RevisionType GetType() = 0;
		public:
	};

}

}

}
