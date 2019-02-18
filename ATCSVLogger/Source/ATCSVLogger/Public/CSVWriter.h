#pragma once

#include "CoreMinimal.h"
#include "CoreTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "GameFramework/Actor.h"
#include "Serialization/Archive.h"

#include "CSVWriter.generated.h"

// Some definitions
#define GAME_DISK_LOCATION		FPaths::ProjectDir() + TEXT("/")

// CSV specific
#define CSV_FIRST_COLUMN_NAME	TEXT("timestamp")
#define CSV_COL_SEPARATOR		TEXT(";")
#define CSV_STORE_FOLDER		TEXT("csv_store")
#define CSV_FILENAME_PREFIX		TEXT("csv_log-")

// Define the structure for writing CSV
USTRUCT(BlueprintType)
struct FCSVData {
	GENERATED_USTRUCT_BODY()
		UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float1 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float2 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float3 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float4 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float5 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float6 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float7 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float8 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float9 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float10 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float11 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float12 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float13 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float14 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float15 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float16 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float17 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float18 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float19 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float20 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float21 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float22 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float23 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		float float24 = 0.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		uint8 uint1 = 0;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		uint8 uint2 = 0;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		uint8 uint3 = 0;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		uint8 uint4 = 0;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		uint8 uint5 = 0;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "ATCSVLogger")
		uint8 uint6 = 0;
	FCSVData() {
	}
};

FORCEINLINE FArchive& operator<<(FArchive &Ar, FCSVData &Structure)
{
	Ar << Structure.float1;
	Ar << Structure.float2;
	Ar << Structure.float3;
	Ar << Structure.float4;
	Ar << Structure.float5;
	Ar << Structure.float6;
	Ar << Structure.float7;
	Ar << Structure.float8;
	Ar << Structure.float9;
	Ar << Structure.float10;
	Ar << Structure.float11;
	Ar << Structure.float12;
	Ar << Structure.float13;
	Ar << Structure.float14;
	Ar << Structure.float15;
	Ar << Structure.float16;
	Ar << Structure.float17;
	Ar << Structure.float18;
	Ar << Structure.float19;
	Ar << Structure.float20;
	Ar << Structure.float21;
	Ar << Structure.float22;
	Ar << Structure.float23;
	Ar << Structure.float24;
	Ar << Structure.uint1;
	Ar << Structure.uint2;
	Ar << Structure.uint3;
	Ar << Structure.uint4;
	Ar << Structure.uint5;
	Ar << Structure.uint6;
	return Ar;
}

FORCEINLINE FString CSVDataToString(FCSVData &Structure)
{
	FString formattedString = "";
	formattedString += FString::SanitizeFloat(Structure.float1) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float2) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float3) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float4) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float5) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float6) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float7) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float8) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float9) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float10) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float11) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float12) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float13) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float14) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float15) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float16) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float17) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float18) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float19) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float20) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float21) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float22) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float23) + CSV_COL_SEPARATOR;
	formattedString += FString::SanitizeFloat(Structure.float24) + CSV_COL_SEPARATOR;
	formattedString += FString::FromInt(Structure.uint1) + CSV_COL_SEPARATOR;
	formattedString += FString::FromInt(Structure.uint2) + CSV_COL_SEPARATOR;
	formattedString += FString::FromInt(Structure.uint3) + CSV_COL_SEPARATOR;
	formattedString += FString::FromInt(Structure.uint4) + CSV_COL_SEPARATOR;
	formattedString += FString::FromInt(Structure.uint5) + CSV_COL_SEPARATOR;
	formattedString += FString::FromInt(Structure.uint6);
	
	return formattedString;
}

UCLASS()
class ATCSVLOGGER_API UCSVWriter : public UBlueprintFunctionLibrary {
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "ATCSVLogger")
		static void InitializeCSVWriter(const TArray<FString> &CSVHeader, FString& fileName, bool &result);

	UFUNCTION(BlueprintCallable, Category = "ATCSVLogger")
		static void WriteCSVLine(FCSVData theStruct, FString fileName, bool &result, FString decimalSeparator = TEXT(","));
};
