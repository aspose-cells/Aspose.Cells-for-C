#include "../CellsExamples.h"

//Find or Search Data 
void  FindOrSearchData()
{
	
	//Source directory path
	U16String dirPath = "..\\Data\\Data\\";

	//Path of input excel file
	U16String sampleFindOrSearchData = dirPath + "sampleFindOrSearchData.xlsx";

	//Load sample excel file into a workbook object
	Workbook wb(sampleFindOrSearchData);

	//Get first worksheet of the workbook
	Worksheet ws = wb.GetWorksheets().Get(0);

	Enumerator<Cell> enCell = ws.GetCells().GetEnumerator();
	while (enCell.MoveNext())
	{
		Cell cell = enCell.GetCurrent();
		U16String fmlVal = cell.GetFormula();
		//Finding the cell containing the specified formula
		if (!fmlVal.IsEmpty() && u"=SUM(A5:A10)" == cell.GetFormula())
		{
			//Printing the name of the cell found after searching worksheet
			std::cout << "Name of the cell containing formula =SUM(A5:A10): " << cell.GetName().ToUtf8() << std::endl;
		}
		//Finding the cell containing the formula that contains CHA
		else if (!fmlVal.IsEmpty() && cell.GetFormula().IndexOf(u"CHA") > -1)
		{
			//Printing the name of the cell found after searching worksheet
			std::cout << "Name of the cell containing the formula that contains CHA: " << cell.GetName().ToUtf8() << std::endl;
		}
		else
		{
			switch (cell.GetType())
			{
				case CellValueType::IsString:
				{
					U16String strVal = cell.GetStringValue();
					//Finding the cell containing the specified string
					if (!strVal.IsEmpty() && cell.GetStringValue().IndexOf("SampleData") > -1)
					{
						//Printing the name of the cell found after searching worksheet
						std::cout << "Name of the cell containing specified string: " << cell.GetName().ToUtf8() << std::endl;
					}
					//Finding the cell containing the string that contains "Two"
					else if (!strVal.IsEmpty() && cell.GetStringValue().IndexOf("Two") > -1)
					{
						//Printing the name of the cell found after searching worksheet
						std::cout << "Name of the cell containing the string that contains Two: " << cell.GetName().ToUtf8() << std::endl;
					}
					//Finding the cell containing the string that starts with AAA
					else if (!strVal.IsEmpty() && cell.GetStringValue().IndexOf("AAA") == 0)
					{
						//Printing the name of the cell found after searching worksheet
						std::cout << "Name of the cell containing the string that starts with AAA: " << cell.GetName().ToUtf8() << std::endl;
					}
					//Finding the cell containing the string that ends with BBB
					else if (!strVal.IsEmpty() && cell.GetStringValue().IndexOf("BBB") == cell.GetStringValue().GetLength() - 3)
					{
						//Printing the name of the cell found after searching worksheet
						std::cout << "Name of the cell containing the string that ends with BBB: " << cell.GetName().ToUtf8() << std::endl;
					}
				}
				break;
				//Finding the cell containing the number 80
				case CellValueType::IsNumeric:
				{
					if (80 == cell.GetIntValue())
					{
						//Printing the name of the cell found after searching worksheet
						std::cout << "Name of the cell containing the number 80: " << cell.GetName().ToUtf8() << std::endl;
					}
				}
				break;
				default:
				{
					break;
				}					
			}
		}

	}

	//Show successfull execution message on console
	ShowMessageOnConsole("FindOrSearchData executed successfully.\r\n\r\n");

	
}