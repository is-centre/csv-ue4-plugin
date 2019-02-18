#include "CSVWriter.h"

void UCSVWriter::InitializeCSVWriter(const TArray<FString> &CSVHeader, FString& fileName, bool &result)
{
	result = false;

	FDateTime now = FDateTime::UtcNow();
	fileName = CSV_FILENAME_PREFIX + now.ToString() + TEXT(".csv");
	
	FString filePath = GAME_DISK_LOCATION + CSV_STORE_FOLDER + TEXT("/");
	FString full_file_path = filePath + fileName;
	
	// Create first column
	FString addCol = CSV_FIRST_COLUMN_NAME;
	addCol += CSV_COL_SEPARATOR;

	// Full header
	FString theString = FString::Join(CSVHeader, CSV_COL_SEPARATOR);
	theString =  addCol + theString + LINE_TERMINATOR;

	result = FFileHelper::SaveStringToFile(theString, *(full_file_path), FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_Append);
}

void UCSVWriter::WriteCSVLine(FCSVData theStruct, FString fileName, bool & result, FString decimalSeparator)
{
	result = false;

	// Timestamp
	double timestamp = FPlatformTime::Seconds();

	FString theString = FString::SanitizeFloat(timestamp) + CSV_COL_SEPARATOR + CSVDataToString(theStruct) + LINE_TERMINATOR;

	// User specified decimal separator must be honored
	theString = theString.Replace(TEXT("."), *decimalSeparator);

	FString filePath = GAME_DISK_LOCATION + CSV_STORE_FOLDER + TEXT("/");
	FString full_file_path = filePath + fileName;

	result = FFileHelper::SaveStringToFile(theString, *(full_file_path), FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_Append);
}
