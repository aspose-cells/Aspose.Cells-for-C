#ifndef _SYSTEM_RANDOM_H_
#define _SYSTEM_RANDOM_H_

#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Double.h"
#include "Aspose.Cells.Systems/TypeDefBString.h"

namespace Aspose { 
namespace Cells { 
namespace Systems {
	class ASPOSE_CELLS_API Random : public Object
	{
	private:
		int inext;
		int inextp;
		int SeedArray[56];
		static const int MBIG = 2147483647;
		static const int MSEED = 161803398;
		static const int MZ = 0;

		void InitVars();
		int InternalSample();
		double GetSampleForLargeRange();

	protected:
		virtual double Sample();
	public:
		Random(); 
		Random(int Seed);

		virtual Int32 Next();
		virtual Int32 Next(Int32 minValue, Int32 maxValue);
		virtual Int32 Next(Int32 maxValue);
		virtual Double NextDouble();
		virtual void NextBytes(intrusive_ptr<BString> buffer);
	};
}
}
}
#endif
