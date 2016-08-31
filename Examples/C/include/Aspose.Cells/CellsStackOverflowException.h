#pragma once
#include "System/Exception.h"
#include "System/Object.h"
#define STATIC_CELLSSTACKOVERFLOWEXCEPTION() 


namespace Aspose {
namespace Cells {
	class CellsStackOverflowException : public Aspose::Cells::System::Exception
	{
	private:

			void Init_Vars();
	public:

			 CellsStackOverflowException();
		public:
			virtual ~CellsStackOverflowException();
	};

}

}
