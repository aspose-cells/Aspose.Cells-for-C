#pragma once
#include "System/IO/Stream.h"
#include "System/Object.h"
#include "System/String.h"
#define STATIC_LICENSE() 


namespace Aspose {
	namespace Cells {

#ifdef WIN32
		class ASPOSE_CELLS_API License : public Aspose::Cells::System::Object
#else	
		class License : public Aspose::Cells::System::Object
#endif
		{
		private:
			void Init_Vars();
		public:

			License();

			/// <summary>
			///  Set a valid license.
			///  </summary>
			/// 
			/// <example>
			///  <code>
			///  [C++]
			///  //Instantiating a license object
			///	 intrusive_ptr<License> license = new License();
			///  //set the path of license
			///  intrusive_ptr<String> licenseName = new String("...");
			///	 //Set a license by license file name
			///  license->SetLicense(licenseName);
			///  </code>
			/// 
			///  </example>
			/// 
			void SetLicense(intrusive_ptr<Aspose::Cells::System::String> licenseName);
			/// <summary>
			///  Set a valid license by file stream.
			/// </summary>					
			void SetLicense(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
		public:
			virtual ~License();
		};

	}
}
