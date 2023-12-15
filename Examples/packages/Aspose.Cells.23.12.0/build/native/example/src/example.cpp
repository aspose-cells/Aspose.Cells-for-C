#include <iostream>

#include "Aspose.Cells.h"

using namespace Aspose::Cells;

int main()
{
	Aspose::Cells::Startup();
	License lic;
	lic.SetLicense(u"Aspose.Cells.lic");

	Workbook workbook(FileFormatType::Xlsx);
	Worksheet sheet = workbook.GetWorksheets().Get(0);
	Cells cells = sheet.GetCells();
	cells.Get(u"A1").PutValue(u"Hello World");
	cells.Get(0, 1).PutValue(u"Income");
	cells.Get(1, 0).PutValue(u"Company A");
	cells.Get(2, 0).PutValue(u"Company B");
	cells.Get(3, 0).PutValue(u"Company C");
	cells.SetColumnWidth(0, 20);
	cells.Get(1, 1).PutValue(10000);
	cells.Get(2, 1).PutValue(20000);
	cells.Get(3, 1).PutValue(30000);

	int chartIndex = sheet.GetCharts().Add(ChartType::Column, 9, 9, 21, 15);
	Chart chart = sheet.GetCharts().Get(chartIndex);
	chart.GetNSeries().Add(u"B2:B4", true);
	chart.GetNSeries().SetCategoryData(u"A2:A4");
	Series aSeries = chart.GetNSeries().Get(0);
	aSeries.SetName(u"=B1");
	chart.SetShowLegend(true);
	chart.GetTitle().SetText(u"Income Analysis");
	ImageOrPrintOptions options;
	options.SetHorizontalResolution(300);
	options.SetVerticalResolution(300);
	chart.ToImage(u"output.png", options);

	workbook.Save(u"output.xlsx");
	workbook.Save(u"output.pdf");

    std::cout << "Hello World" << std::endl;
	Aspose::Cells::Cleanup();
}
