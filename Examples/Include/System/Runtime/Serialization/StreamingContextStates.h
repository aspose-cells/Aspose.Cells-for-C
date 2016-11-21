#ifndef _SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXTSTATES_H_
#define _SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXTSTATES_H_

namespace Aspose { 
namespace Cells { 
namespace System {
namespace Runtime {
namespace Serialization {
	enum StreamingContextStates
	{
        // Summary:
        //     Specifies that the source or destination context is a different process on
        //     the same computer->
		StreamingContextStates_CrossProcess = 1,
        //
        // Summary:
        //     Specifies that the source or destination context is a different computer->
		StreamingContextStates_CrossMachine = 2,
        //
        // Summary:
        //     Specifies that the source or destination context is a file-> Users can assume
        //     that files will last longer than the process that created them and not serialize
        //     objects in such a way that deserialization will require accessing any data
        //     from the current process->
		StreamingContextStates_File = 4,
        //
        // Summary:
        //     Specifies that the source or destination context is a persisted store, which
        //     could include databases, files, or other backing stores-> Users can assume
        //     that persisted data will last longer than the process that created the data
        //     and not serialize objects so that deserialization will require accessing
        //     any data from the current process->
		StreamingContextStates_Persistence = 8,
        //
        // Summary:
        //     Specifies that the data is remoted to a context in an unknown location-> Users
        //     cannot make any assumptions whether this is on the same computer->
		StreamingContextStates_Remoting = 16,
        //
        // Summary:
        //     Specifies that the serialization context is unknown->
		StreamingContextStates_Other = 32,
        //
        // Summary:
        //     Specifies that the object graph is being cloned-> Users can assume that the
        //     cloned graph will continue to exist within the same process and be safe to
        //     access handles or other references to unmanaged resources->
		StreamingContextStates_Clone = 64,
        //
        // Summary:
        //     Specifies that the source or destination context is a different AppDomain->
        //     (For a description of AppDomains, see Application Domains)->
		StreamingContextStates_CrossAppDomain = 128,
        //
        // Summary:
        //     Specifies that the serialized data can be transmitted to or received from
        //     any of the other contexts->
		StreamingContextStates_All = 255,
	};
}
}
}
}
}
#endif//_SYSTEM_RUNTIME_SERIALIZATION_STREAMINGCONTEXTSTATES_H_