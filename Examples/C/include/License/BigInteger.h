#pragma once
//#include "System/Int64.h"
//#include "System/CharHelper.h"
//#include "System/Boxing.h"
//#include "System/InvalidOperationException.h"
//#include "System/FormatException.h"
//#include "System/ArithmeticException.h"
#include "System/UInt32.h"
//#include "System/ArgumentNullException.h"
//#include "System/ArgumentException.h"
//#include "System/Char.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/ArgumentOutOfRangeException.h"
#include "System/Byte.h"
//#include "System/IndexOutOfRangeException.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/UInt64.h"
#define STATIC_BIGINTEGER() 


namespace Aspose {
namespace Crypto {
	class BigInteger : public Aspose::Cells::System::Object
	{
	private:
		
	enum Sign 

	{

			Sign_Negative = -1,
			Sign_Zero = 0 ,
			Sign_Positive = 1 ,
	};

	class ModulusRing : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Crypto::BigInteger> OddPow(intrusive_ptr<Aspose::Crypto::BigInteger> b , intrusive_ptr<Aspose::Crypto::BigInteger> exp);
			intrusive_ptr<Aspose::Crypto::BigInteger> OddPow(Aspose::Cells::System::UInt32 b , intrusive_ptr<Aspose::Crypto::BigInteger> exp);
			intrusive_ptr<Aspose::Crypto::BigInteger> EvenPow(Aspose::Cells::System::UInt32 b , intrusive_ptr<Aspose::Crypto::BigInteger> exp);
	public:

			intrusive_ptr<Aspose::Crypto::BigInteger> mod;
			intrusive_ptr<Aspose::Crypto::BigInteger> constant;
			 ModulusRing(intrusive_ptr<Aspose::Crypto::BigInteger> modulus);
			void BarrettReduction(intrusive_ptr<Aspose::Crypto::BigInteger> x);
			intrusive_ptr<Aspose::Crypto::BigInteger> Multiply(intrusive_ptr<Aspose::Crypto::BigInteger> a , intrusive_ptr<Aspose::Crypto::BigInteger> b);
			intrusive_ptr<Aspose::Crypto::BigInteger> Difference(intrusive_ptr<Aspose::Crypto::BigInteger> a , intrusive_ptr<Aspose::Crypto::BigInteger> b);
			intrusive_ptr<Aspose::Crypto::BigInteger> Pow(intrusive_ptr<Aspose::Crypto::BigInteger> b , intrusive_ptr<Aspose::Crypto::BigInteger> exp);
			intrusive_ptr<Aspose::Crypto::BigInteger> EvenPow(intrusive_ptr<Aspose::Crypto::BigInteger> b , intrusive_ptr<Aspose::Crypto::BigInteger> exp);
			intrusive_ptr<Aspose::Crypto::BigInteger> Pow(Aspose::Cells::System::UInt32 b , intrusive_ptr<Aspose::Crypto::BigInteger> exp);
			 ModulusRing();
		public:
			virtual ~ModulusRing();
	};

		
	class Montgomery : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 Montgomery();
	public:

			static Aspose::Cells::System::UInt32 Inverse(Aspose::Cells::System::UInt32 n);
			static intrusive_ptr<Aspose::Crypto::BigInteger> ToMont(intrusive_ptr<Aspose::Crypto::BigInteger> n , intrusive_ptr<Aspose::Crypto::BigInteger> m);
			static intrusive_ptr<Aspose::Crypto::BigInteger> Reduce(intrusive_ptr<Aspose::Crypto::BigInteger> n , intrusive_ptr<Aspose::Crypto::BigInteger> m , Aspose::Cells::System::UInt32 mPrime);
		public:
			virtual ~Montgomery();
	};

		
	class Kernel : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Crypto::BigInteger> AddSameSign(intrusive_ptr<Aspose::Crypto::BigInteger> bi1 , intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
			static intrusive_ptr<Aspose::Crypto::BigInteger> Subtract(intrusive_ptr<Aspose::Crypto::BigInteger> big , intrusive_ptr<Aspose::Crypto::BigInteger> small);
			static void MinusEq(intrusive_ptr<Aspose::Crypto::BigInteger> big , intrusive_ptr<Aspose::Crypto::BigInteger> small);
			static void PlusEq(intrusive_ptr<Aspose::Crypto::BigInteger> bi1 , intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
			static Aspose::Crypto::BigInteger::Sign Compare(intrusive_ptr<Aspose::Crypto::BigInteger> bi1 , intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
			static Aspose::Cells::System::UInt32 SingleByteDivideInPlace(intrusive_ptr<Aspose::Crypto::BigInteger> n , Aspose::Cells::System::UInt32 d);
			static Aspose::Cells::System::UInt32 DwordMod(intrusive_ptr<Aspose::Crypto::BigInteger> n , Aspose::Cells::System::UInt32 d);
			static intrusive_ptr<Aspose::Crypto::BigInteger> DwordDiv(intrusive_ptr<Aspose::Crypto::BigInteger> n , Aspose::Cells::System::UInt32 d);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Crypto::BigInteger*>> DwordDivMod(intrusive_ptr<Aspose::Crypto::BigInteger> n , Aspose::Cells::System::UInt32 d);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Crypto::BigInteger*>> multiByteDivide(intrusive_ptr<Aspose::Crypto::BigInteger> bi1 , intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
			static intrusive_ptr<Aspose::Crypto::BigInteger> LeftShift(intrusive_ptr<Aspose::Crypto::BigInteger> bi , Aspose::Cells::System::Int32 n);
			static intrusive_ptr<Aspose::Crypto::BigInteger> RightShift(intrusive_ptr<Aspose::Crypto::BigInteger> bi , Aspose::Cells::System::Int32 n);
			static intrusive_ptr<Aspose::Crypto::BigInteger> MultiplyByDword(intrusive_ptr<Aspose::Crypto::BigInteger> n , Aspose::Cells::System::UInt32 f);
			static void Multiply(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::UInt32>> x , Aspose::Cells::System::UInt32 xOffset , Aspose::Cells::System::UInt32 xLen , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::UInt32>> y , Aspose::Cells::System::UInt32 yOffset , Aspose::Cells::System::UInt32 yLen , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::UInt32>> d , Aspose::Cells::System::UInt32 dOffset);
			static void MultiplyMod2p32pmod(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::UInt32>> x , Aspose::Cells::System::Int32 xOffset , Aspose::Cells::System::Int32 xLen , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::UInt32>> y , Aspose::Cells::System::Int32 yOffest , Aspose::Cells::System::Int32 yLen , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::UInt32>> d , Aspose::Cells::System::Int32 dOffset , Aspose::Cells::System::Int32 mod);
			static void SquarePositive(intrusive_ptr<Aspose::Crypto::BigInteger> bi , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::UInt32>>& wkSpace);
			static intrusive_ptr<Aspose::Crypto::BigInteger> gcd(intrusive_ptr<Aspose::Crypto::BigInteger> a , intrusive_ptr<Aspose::Crypto::BigInteger> b);
			static Aspose::Cells::System::UInt32 modInverse(intrusive_ptr<Aspose::Crypto::BigInteger> bi , Aspose::Cells::System::UInt32 modulus);
			static intrusive_ptr<Aspose::Crypto::BigInteger> modInverse(intrusive_ptr<Aspose::Crypto::BigInteger> bi , intrusive_ptr<Aspose::Crypto::BigInteger> modulus);
			 Kernel();
		public:
			virtual ~Kernel();
	};
	
	
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::UInt32>> Static_Array_Init_smallPrimes();
			void Normalize();
	public:

			Aspose::Cells::System::UInt32 length;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::UInt32>> data;
			 static const Aspose::Cells::System::UInt32 DEFAULT_LEN;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::UInt32>> smallPrimes;
			 static const intrusive_ptr<Aspose::Cells::System::String> WouldReturnNegVal;
			 BigInteger();
			 BigInteger(Aspose::Crypto::BigInteger::Sign sign , Aspose::Cells::System::UInt32 len);
			 BigInteger(intrusive_ptr<Aspose::Crypto::BigInteger> bi);
			 BigInteger(intrusive_ptr<Aspose::Crypto::BigInteger> bi , Aspose::Cells::System::UInt32 len);
			 BigInteger(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> inData);
			 BigInteger(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::UInt32>> inData);
			 BigInteger(Aspose::Cells::System::UInt32 ui);
			 BigInteger(Aspose::Cells::System::UInt64 ul);
			static intrusive_ptr<Aspose::Crypto::BigInteger> Parse(intrusive_ptr<Aspose::Cells::System::String> number);

			///////////////////////////// operator ///////////////////////////// 
			friend intrusive_ptr<Aspose::Crypto::BigInteger> operator +(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
			friend intrusive_ptr<Aspose::Crypto::BigInteger> operator -(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
			friend Aspose::Cells::System::Int32 operator %(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, Aspose::Cells::System::Int32 i);
			friend Aspose::Cells::System::UInt32 operator %(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, Aspose::Cells::System::UInt32 ui);
			friend intrusive_ptr<Aspose::Crypto::BigInteger> operator %(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
			friend intrusive_ptr<Aspose::Crypto::BigInteger> operator /(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, Aspose::Cells::System::Int32 i);
			friend intrusive_ptr<Aspose::Crypto::BigInteger> operator /(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
			friend intrusive_ptr<Aspose::Crypto::BigInteger> operator *(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
			friend intrusive_ptr<Aspose::Crypto::BigInteger> operator *(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, Aspose::Cells::System::Int32 i);
			friend intrusive_ptr<Aspose::Crypto::BigInteger> operator <<(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, Aspose::Cells::System::Int32 shiftVal);
			friend intrusive_ptr<Aspose::Crypto::BigInteger> operator >>(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, Aspose::Cells::System::Int32 shiftVal);

			friend bool operator ==(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, Aspose::Cells::System::UInt32 ui);
			friend bool operator !=(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, Aspose::Cells::System::UInt32 ui);
			friend bool operator ==(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
			friend bool operator !=(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
			friend bool operator >(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
			friend bool operator <(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
			friend bool operator >=(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
			friend bool operator <=(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
			///////////////////////////// operator ///////////////////////////// 

			static intrusive_ptr<Aspose::Crypto::BigInteger> Add(intrusive_ptr<Aspose::Crypto::BigInteger> bi1 , intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
			static intrusive_ptr<Aspose::Crypto::BigInteger> Subtract(intrusive_ptr<Aspose::Crypto::BigInteger> bi1 , intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
			static Aspose::Cells::System::Int32 Modulus(intrusive_ptr<Aspose::Crypto::BigInteger> bi , Aspose::Cells::System::Int32 i);
			static Aspose::Cells::System::UInt32 Modulus(intrusive_ptr<Aspose::Crypto::BigInteger> bi , Aspose::Cells::System::UInt32 ui);
			static intrusive_ptr<Aspose::Crypto::BigInteger> Modulus(intrusive_ptr<Aspose::Crypto::BigInteger> bi1 , intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
			static intrusive_ptr<Aspose::Crypto::BigInteger> Divid(intrusive_ptr<Aspose::Crypto::BigInteger> bi , Aspose::Cells::System::Int32 i);
			static intrusive_ptr<Aspose::Crypto::BigInteger> Divid(intrusive_ptr<Aspose::Crypto::BigInteger> bi1 , intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
			static intrusive_ptr<Aspose::Crypto::BigInteger> Multiply(intrusive_ptr<Aspose::Crypto::BigInteger> bi1 , intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
			static intrusive_ptr<Aspose::Crypto::BigInteger> Multiply(intrusive_ptr<Aspose::Crypto::BigInteger> bi , Aspose::Cells::System::Int32 i);
			Aspose::Cells::System::Int32 BitCount();
			bool TestBit(Aspose::Cells::System::UInt32 bitNum);
			bool TestBit(Aspose::Cells::System::Int32 bitNum);
			void SetBit(Aspose::Cells::System::UInt32 bitNum);
			void ClearBit(Aspose::Cells::System::UInt32 bitNum);
			void SetBit(Aspose::Cells::System::UInt32 bitNum , bool value);
			Aspose::Cells::System::Int32 LowestSetBit();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetBytes();

			Aspose::Crypto::BigInteger::Sign Compare(intrusive_ptr<Aspose::Crypto::BigInteger> bi);
			intrusive_ptr<Aspose::Cells::System::String> ToString(Aspose::Cells::System::UInt32 radix);
			intrusive_ptr<Aspose::Cells::System::String> ToString(Aspose::Cells::System::UInt32 radix , intrusive_ptr<Aspose::Cells::System::String> characterSet);
			void Clear();
			Aspose::Cells::System::Int32 GetHashCode();
			intrusive_ptr<Aspose::Cells::System::String> ToString();
			bool Equals(intrusive_ptr<Aspose::Cells::System::Object> o);
			intrusive_ptr<Aspose::Crypto::BigInteger> GCD(intrusive_ptr<Aspose::Crypto::BigInteger> bi);
			intrusive_ptr<Aspose::Crypto::BigInteger> ModInverse(intrusive_ptr<Aspose::Crypto::BigInteger> modulus);
			intrusive_ptr<Aspose::Crypto::BigInteger> ModPow(intrusive_ptr<Aspose::Crypto::BigInteger> exp , intrusive_ptr<Aspose::Crypto::BigInteger> n);

			static bool equals(intrusive_ptr<Aspose::Crypto::BigInteger> a1, UInt32 i1);


		public:
			virtual ~BigInteger();
	};

	intrusive_ptr<Aspose::Crypto::BigInteger> operator +(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
	intrusive_ptr<Aspose::Crypto::BigInteger> operator -(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
	Aspose::Cells::System::Int32 operator %(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, Aspose::Cells::System::Int32 i);
	Aspose::Cells::System::UInt32 operator %(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, Aspose::Cells::System::UInt32 ui);
	intrusive_ptr<Aspose::Crypto::BigInteger> operator %(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
	intrusive_ptr<Aspose::Crypto::BigInteger> operator /(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, Aspose::Cells::System::Int32 i);
	intrusive_ptr<Aspose::Crypto::BigInteger> operator /(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
	intrusive_ptr<Aspose::Crypto::BigInteger> operator *(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
	intrusive_ptr<Aspose::Crypto::BigInteger> operator *(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, Aspose::Cells::System::Int32 i);
	intrusive_ptr<Aspose::Crypto::BigInteger> operator <<(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, Aspose::Cells::System::Int32 shiftVal);
	intrusive_ptr<Aspose::Crypto::BigInteger> operator >>(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, Aspose::Cells::System::Int32 shiftVal);

	bool operator ==(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, Aspose::Cells::System::UInt32 ui);
	bool operator !=(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, Aspose::Cells::System::UInt32 ui);
	bool operator ==(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
	bool operator !=(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
	bool operator >(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
	bool operator <(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
	bool operator >=(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
	bool operator <=(intrusive_ptr<Aspose::Crypto::BigInteger> bi1, intrusive_ptr<Aspose::Crypto::BigInteger> bi2);
}

}
