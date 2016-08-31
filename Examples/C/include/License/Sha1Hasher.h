#pragma once
//#include "System/Array.h"
#include "System/Object.h"
//#include "System/String.h"
#include "System/UInt32.h"
#include "System/Byte.h"
//#include "System/ArgumentNullException.h"
#include "System/Int32.h"
#include "System/Int64.h"
#include "System/Array1D.h"
#define STATIC_SHA1HASHER() 


namespace Aspose {
namespace Crypto {
	class Sha1Hasher : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void HashCore(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> rgb , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 size);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> HashFinal();
			void Initialize();
			void ProcessBlock(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> inputBuffer , Aspose::Cells::System::Int32 inputOffset);
			void ProcessFinalBlock(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> inputBuffer , Aspose::Cells::System::Int32 inputOffset , Aspose::Cells::System::Int32 inputCount);
			 static const Aspose::Cells::System::Int32 BlockSize;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::UInt32>> mH;
			Aspose::Cells::System::Int64 mCount;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> mProcessingBuffer;
			Aspose::Cells::System::Int32 mProcessingBufferCount;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::UInt32>> mBuffer;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> HashValue;
	public:

			 Sha1Hasher();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ComputeHash(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> input);
			void AddLength(Aspose::Cells::System::Int64 length , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 position);
		public:
			virtual ~Sha1Hasher();
	};

}

}
