// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerStoryDataActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerStoryDataActor() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerStoryDataActor_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerStoryDataActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerStory();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELCareerStoryDataActor::execAddCareerStoryData)
	{
		P_GET_STRUCT(FCareerStory,Z_Param__Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCareerStoryData(Z_Param__Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerStoryDataActor::execClearStoryDataTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearStoryDataTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerStoryDataActor::execGetCareerStoryDataTableByString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=P_THIS->GetCareerStoryDataTableByString(Z_Param__AssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerStoryDataActor::execGetCareerStoryFirstData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerStory*)Z_Param__Result=P_THIS->GetCareerStoryFirstData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerStoryDataActor::execGetCareerStoryRowData)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param__key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerStory*)Z_Param__Result=P_THIS->GetCareerStoryRowData(Z_Param__key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerStoryDataActor::execGetStoryDataTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCareerStory>*)Z_Param__Result=P_THIS->GetStoryDataTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerStoryDataActor::execIsLoadStoryData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoadStoryData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerStoryDataActor::execSetStoryDataTable)
	{
		P_GET_TARRAY(FCareerStory,Z_Param__Table);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStoryDataTable(Z_Param__Table);
		P_NATIVE_END;
	}
	static FName NAME_AELCareerStoryDataActor_SetupStoryDataFromStoryList = FName(TEXT("SetupStoryDataFromStoryList"));
	void AELCareerStoryDataActor::SetupStoryDataFromStoryList(FName _key)
	{
		ELCareerStoryDataActor_eventSetupStoryDataFromStoryList_Parms Parms;
		Parms._key=_key;
		ProcessEvent(FindFunctionChecked(NAME_AELCareerStoryDataActor_SetupStoryDataFromStoryList),&Parms);
	}
	void AELCareerStoryDataActor::StaticRegisterNativesAELCareerStoryDataActor()
	{
		UClass* Class = AELCareerStoryDataActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCareerStoryData", &AELCareerStoryDataActor::execAddCareerStoryData },
			{ "ClearStoryDataTable", &AELCareerStoryDataActor::execClearStoryDataTable },
			{ "GetCareerStoryDataTableByString", &AELCareerStoryDataActor::execGetCareerStoryDataTableByString },
			{ "GetCareerStoryFirstData", &AELCareerStoryDataActor::execGetCareerStoryFirstData },
			{ "GetCareerStoryRowData", &AELCareerStoryDataActor::execGetCareerStoryRowData },
			{ "GetStoryDataTable", &AELCareerStoryDataActor::execGetStoryDataTable },
			{ "IsLoadStoryData", &AELCareerStoryDataActor::execIsLoadStoryData },
			{ "SetStoryDataTable", &AELCareerStoryDataActor::execSetStoryDataTable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELCareerStoryDataActor_AddCareerStoryData_Statics
	{
		struct ELCareerStoryDataActor_eventAddCareerStoryData_Parms
		{
			FCareerStory _Data;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerStoryDataActor_AddCareerStoryData_Statics::NewProp__Data = { "_Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStoryDataActor_eventAddCareerStoryData_Parms, _Data), Z_Construct_UScriptStruct_FCareerStory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerStoryDataActor_AddCareerStoryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStoryDataActor_AddCareerStoryData_Statics::NewProp__Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStoryDataActor_AddCareerStoryData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStoryDataActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerStoryDataActor_AddCareerStoryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerStoryDataActor, nullptr, "AddCareerStoryData", nullptr, nullptr, sizeof(ELCareerStoryDataActor_eventAddCareerStoryData_Parms), Z_Construct_UFunction_AELCareerStoryDataActor_AddCareerStoryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStoryDataActor_AddCareerStoryData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStoryDataActor_AddCareerStoryData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStoryDataActor_AddCareerStoryData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerStoryDataActor_AddCareerStoryData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerStoryDataActor_AddCareerStoryData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerStoryDataActor_ClearStoryDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStoryDataActor_ClearStoryDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStoryDataActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerStoryDataActor_ClearStoryDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerStoryDataActor, nullptr, "ClearStoryDataTable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStoryDataActor_ClearStoryDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStoryDataActor_ClearStoryDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerStoryDataActor_ClearStoryDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerStoryDataActor_ClearStoryDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryDataTableByString_Statics
	{
		struct ELCareerStoryDataActor_eventGetCareerStoryDataTableByString_Parms
		{
			FString _AssetPath;
			UDataTable* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__AssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__AssetPath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryDataTableByString_Statics::NewProp__AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryDataTableByString_Statics::NewProp__AssetPath = { "_AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStoryDataActor_eventGetCareerStoryDataTableByString_Parms, _AssetPath), METADATA_PARAMS(Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryDataTableByString_Statics::NewProp__AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryDataTableByString_Statics::NewProp__AssetPath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryDataTableByString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStoryDataActor_eventGetCareerStoryDataTableByString_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryDataTableByString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryDataTableByString_Statics::NewProp__AssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryDataTableByString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryDataTableByString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStoryDataActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryDataTableByString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerStoryDataActor, nullptr, "GetCareerStoryDataTableByString", nullptr, nullptr, sizeof(ELCareerStoryDataActor_eventGetCareerStoryDataTableByString_Parms), Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryDataTableByString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryDataTableByString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryDataTableByString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryDataTableByString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryDataTableByString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryDataTableByString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryFirstData_Statics
	{
		struct ELCareerStoryDataActor_eventGetCareerStoryFirstData_Parms
		{
			FCareerStory ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryFirstData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStoryDataActor_eventGetCareerStoryFirstData_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerStory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryFirstData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryFirstData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryFirstData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStoryDataActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryFirstData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerStoryDataActor, nullptr, "GetCareerStoryFirstData", nullptr, nullptr, sizeof(ELCareerStoryDataActor_eventGetCareerStoryFirstData_Parms), Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryFirstData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryFirstData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryFirstData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryFirstData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryFirstData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryFirstData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryRowData_Statics
	{
		struct ELCareerStoryDataActor_eventGetCareerStoryRowData_Parms
		{
			FName _key;
			FCareerStory ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryRowData_Statics::NewProp__key = { "_key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStoryDataActor_eventGetCareerStoryRowData_Parms, _key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryRowData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStoryDataActor_eventGetCareerStoryRowData_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerStory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryRowData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryRowData_Statics::NewProp__key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryRowData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryRowData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStoryDataActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryRowData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerStoryDataActor, nullptr, "GetCareerStoryRowData", nullptr, nullptr, sizeof(ELCareerStoryDataActor_eventGetCareerStoryRowData_Parms), Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryRowData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryRowData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryRowData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryRowData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryRowData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryRowData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerStoryDataActor_GetStoryDataTable_Statics
	{
		struct ELCareerStoryDataActor_eventGetStoryDataTable_Parms
		{
			TArray<FCareerStory> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerStoryDataActor_GetStoryDataTable_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerStory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELCareerStoryDataActor_GetStoryDataTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStoryDataActor_eventGetStoryDataTable_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerStoryDataActor_GetStoryDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStoryDataActor_GetStoryDataTable_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStoryDataActor_GetStoryDataTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStoryDataActor_GetStoryDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStoryDataActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerStoryDataActor_GetStoryDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerStoryDataActor, nullptr, "GetStoryDataTable", nullptr, nullptr, sizeof(ELCareerStoryDataActor_eventGetStoryDataTable_Parms), Z_Construct_UFunction_AELCareerStoryDataActor_GetStoryDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStoryDataActor_GetStoryDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStoryDataActor_GetStoryDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStoryDataActor_GetStoryDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerStoryDataActor_GetStoryDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerStoryDataActor_GetStoryDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerStoryDataActor_IsLoadStoryData_Statics
	{
		struct ELCareerStoryDataActor_eventIsLoadStoryData_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELCareerStoryDataActor_IsLoadStoryData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerStoryDataActor_eventIsLoadStoryData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELCareerStoryDataActor_IsLoadStoryData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerStoryDataActor_eventIsLoadStoryData_Parms), &Z_Construct_UFunction_AELCareerStoryDataActor_IsLoadStoryData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerStoryDataActor_IsLoadStoryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStoryDataActor_IsLoadStoryData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStoryDataActor_IsLoadStoryData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStoryDataActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerStoryDataActor_IsLoadStoryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerStoryDataActor, nullptr, "IsLoadStoryData", nullptr, nullptr, sizeof(ELCareerStoryDataActor_eventIsLoadStoryData_Parms), Z_Construct_UFunction_AELCareerStoryDataActor_IsLoadStoryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStoryDataActor_IsLoadStoryData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStoryDataActor_IsLoadStoryData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStoryDataActor_IsLoadStoryData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerStoryDataActor_IsLoadStoryData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerStoryDataActor_IsLoadStoryData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerStoryDataActor_SetStoryDataTable_Statics
	{
		struct ELCareerStoryDataActor_eventSetStoryDataTable_Parms
		{
			TArray<FCareerStory> _Table;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Table_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__Table;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerStoryDataActor_SetStoryDataTable_Statics::NewProp__Table_Inner = { "_Table", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerStory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELCareerStoryDataActor_SetStoryDataTable_Statics::NewProp__Table = { "_Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStoryDataActor_eventSetStoryDataTable_Parms, _Table), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerStoryDataActor_SetStoryDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStoryDataActor_SetStoryDataTable_Statics::NewProp__Table_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStoryDataActor_SetStoryDataTable_Statics::NewProp__Table,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStoryDataActor_SetStoryDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStoryDataActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerStoryDataActor_SetStoryDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerStoryDataActor, nullptr, "SetStoryDataTable", nullptr, nullptr, sizeof(ELCareerStoryDataActor_eventSetStoryDataTable_Parms), Z_Construct_UFunction_AELCareerStoryDataActor_SetStoryDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStoryDataActor_SetStoryDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStoryDataActor_SetStoryDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStoryDataActor_SetStoryDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerStoryDataActor_SetStoryDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerStoryDataActor_SetStoryDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerStoryDataActor_SetupStoryDataFromStoryList_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELCareerStoryDataActor_SetupStoryDataFromStoryList_Statics::NewProp__key = { "_key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStoryDataActor_eventSetupStoryDataFromStoryList_Parms, _key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerStoryDataActor_SetupStoryDataFromStoryList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStoryDataActor_SetupStoryDataFromStoryList_Statics::NewProp__key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStoryDataActor_SetupStoryDataFromStoryList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStoryDataActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerStoryDataActor_SetupStoryDataFromStoryList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerStoryDataActor, nullptr, "SetupStoryDataFromStoryList", nullptr, nullptr, sizeof(ELCareerStoryDataActor_eventSetupStoryDataFromStoryList_Parms), Z_Construct_UFunction_AELCareerStoryDataActor_SetupStoryDataFromStoryList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStoryDataActor_SetupStoryDataFromStoryList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStoryDataActor_SetupStoryDataFromStoryList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStoryDataActor_SetupStoryDataFromStoryList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerStoryDataActor_SetupStoryDataFromStoryList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerStoryDataActor_SetupStoryDataFromStoryList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerStoryDataActor_NoRegister()
	{
		return AELCareerStoryDataActor::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerStoryDataActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_StoryDataTable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_StoryDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_StoryDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerStoryDataActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerStoryDataActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerStoryDataActor_AddCareerStoryData, "AddCareerStoryData" }, // 2618208182
		{ &Z_Construct_UFunction_AELCareerStoryDataActor_ClearStoryDataTable, "ClearStoryDataTable" }, // 278613752
		{ &Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryDataTableByString, "GetCareerStoryDataTableByString" }, // 3994373136
		{ &Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryFirstData, "GetCareerStoryFirstData" }, // 3984325977
		{ &Z_Construct_UFunction_AELCareerStoryDataActor_GetCareerStoryRowData, "GetCareerStoryRowData" }, // 3249111489
		{ &Z_Construct_UFunction_AELCareerStoryDataActor_GetStoryDataTable, "GetStoryDataTable" }, // 886763566
		{ &Z_Construct_UFunction_AELCareerStoryDataActor_IsLoadStoryData, "IsLoadStoryData" }, // 417570214
		{ &Z_Construct_UFunction_AELCareerStoryDataActor_SetStoryDataTable, "SetStoryDataTable" }, // 952368034
		{ &Z_Construct_UFunction_AELCareerStoryDataActor_SetupStoryDataFromStoryList, "SetupStoryDataFromStoryList" }, // 3882370342
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerStoryDataActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerStoryDataActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerStoryDataActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELCareerStoryDataActor_Statics::NewProp_m_StoryDataTable_Inner = { "m_StoryDataTable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerStory, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerStoryDataActor_Statics::NewProp_m_StoryDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerStoryDataActor" },
		{ "ModuleRelativePath", "Public/ELCareerStoryDataActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerStoryDataActor_Statics::NewProp_m_StoryDataTable = { "m_StoryDataTable", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerStoryDataActor, m_StoryDataTable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerStoryDataActor_Statics::NewProp_m_StoryDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerStoryDataActor_Statics::NewProp_m_StoryDataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELCareerStoryDataActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerStoryDataActor_Statics::NewProp_m_StoryDataTable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerStoryDataActor_Statics::NewProp_m_StoryDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerStoryDataActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerStoryDataActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerStoryDataActor_Statics::ClassParams = {
		&AELCareerStoryDataActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELCareerStoryDataActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerStoryDataActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCareerStoryDataActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerStoryDataActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerStoryDataActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerStoryDataActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerStoryDataActor, 2144943706);
	template<> ABP_200508_API UClass* StaticClass<AELCareerStoryDataActor>()
	{
		return AELCareerStoryDataActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerStoryDataActor(Z_Construct_UClass_AELCareerStoryDataActor, &AELCareerStoryDataActor::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerStoryDataActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerStoryDataActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
