#ifndef _SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_H_
#define _SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_H_

#include "System/Object.h"
#include "System/Runtime/Serialization/StreamingContextStates.h"

using namespace Aspose::Cells::System;

namespace Aspose { 
namespace Cells { 
namespace System{
namespace Runtime {
namespace Serialization {
	class StreamingContext: public Object
	{
		private:

		public:
			StreamingContext(StreamingContextStates state);
        	StreamingContext(StreamingContextStates state, Object* additional);

	};
}
}
}
}
}
#endif//_SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXT_H_