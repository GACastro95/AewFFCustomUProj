// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSMasterDataLoader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSMasterDataLoader() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSMasterDataLoader_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSMasterDataLoader();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2SSMasterData();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSMasterData_NoRegister();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSMasterDataLoader::execGetDataVersionFromResponseData)
	{
		P_GET_STRUCT_REF(FYGS2SSMasterData,Z_Param_Out_inResponseData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDataVersionFromResponseData(Z_Param_Out_inResponseData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSMasterDataLoader::execImportMasterDataFromResponseData)
	{
		P_GET_STRUCT_REF(FYGS2SSMasterData,Z_Param_Out_inResponseData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImportMasterDataFromResponseData(Z_Param_Out_inResponseData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSMasterDataLoader::execOnCompleteLoading)
	{
		P_GET_UBOOL(Z_Param_inSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompleteLoading(Z_Param_inSuccess);
		P_NATIVE_END;
	}
	static FName NAME_AELSSMasterDataLoader_BeginLoadMasterDataByAPI = FName(TEXT("BeginLoadMasterDataByAPI"));
	void AELSSMasterDataLoader::BeginLoadMasterDataByAPI()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSMasterDataLoader_BeginLoadMasterDataByAPI),NULL);
	}
	static FName NAME_AELSSMasterDataLoader_BeginLoadMasterDataByLocalData = FName(TEXT("BeginLoadMasterDataByLocalData"));
	void AELSSMasterDataLoader::BeginLoadMasterDataByLocalData()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSMasterDataLoader_BeginLoadMasterDataByLocalData),NULL);
	}
	void AELSSMasterDataLoader::StaticRegisterNativesAELSSMasterDataLoader()
	{
		UClass* Class = AELSSMasterDataLoader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataVersionFromResponseData", &AELSSMasterDataLoader::execGetDataVersionFromResponseData },
			{ "ImportMasterDataFromResponseData", &AELSSMasterDataLoader::execImportMasterDataFromResponseData },
			{ "OnCompleteLoading", &AELSSMasterDataLoader::execOnCompleteLoading },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoader_BeginLoadMasterDataByAPI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoader_BeginLoadMasterDataByAPI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoader_BeginLoadMasterDataByAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoader, nullptr, "BeginLoadMasterDataByAPI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoader_BeginLoadMasterDataByAPI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoader_BeginLoadMasterDataByAPI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoader_BeginLoadMasterDataByAPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoader_BeginLoadMasterDataByAPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoader_BeginLoadMasterDataByLocalData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoader_BeginLoadMasterDataByLocalData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoader_BeginLoadMasterDataByLocalData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoader, nullptr, "BeginLoadMasterDataByLocalData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoader_BeginLoadMasterDataByLocalData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoader_BeginLoadMasterDataByLocalData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoader_BeginLoadMasterDataByLocalData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoader_BeginLoadMasterDataByLocalData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoader_GetDataVersionFromResponseData_Statics
	{
		struct ELSSMasterDataLoader_eventGetDataVersionFromResponseData_Parms
		{
			FYGS2SSMasterData inResponseData;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inResponseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inResponseData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoader_GetDataVersionFromResponseData_Statics::NewProp_inResponseData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSMasterDataLoader_GetDataVersionFromResponseData_Statics::NewProp_inResponseData = { "inResponseData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoader_eventGetDataVersionFromResponseData_Parms, inResponseData), Z_Construct_UScriptStruct_FYGS2SSMasterData, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoader_GetDataVersionFromResponseData_Statics::NewProp_inResponseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoader_GetDataVersionFromResponseData_Statics::NewProp_inResponseData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSMasterDataLoader_GetDataVersionFromResponseData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoader_eventGetDataVersionFromResponseData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoader_GetDataVersionFromResponseData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoader_GetDataVersionFromResponseData_Statics::NewProp_inResponseData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoader_GetDataVersionFromResponseData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoader_GetDataVersionFromResponseData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoader_GetDataVersionFromResponseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoader, nullptr, "GetDataVersionFromResponseData", nullptr, nullptr, sizeof(ELSSMasterDataLoader_eventGetDataVersionFromResponseData_Parms), Z_Construct_UFunction_AELSSMasterDataLoader_GetDataVersionFromResponseData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoader_GetDataVersionFromResponseData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoader_GetDataVersionFromResponseData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoader_GetDataVersionFromResponseData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoader_GetDataVersionFromResponseData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoader_GetDataVersionFromResponseData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoader_ImportMasterDataFromResponseData_Statics
	{
		struct ELSSMasterDataLoader_eventImportMasterDataFromResponseData_Parms
		{
			FYGS2SSMasterData inResponseData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inResponseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inResponseData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoader_ImportMasterDataFromResponseData_Statics::NewProp_inResponseData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSMasterDataLoader_ImportMasterDataFromResponseData_Statics::NewProp_inResponseData = { "inResponseData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMasterDataLoader_eventImportMasterDataFromResponseData_Parms, inResponseData), Z_Construct_UScriptStruct_FYGS2SSMasterData, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoader_ImportMasterDataFromResponseData_Statics::NewProp_inResponseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoader_ImportMasterDataFromResponseData_Statics::NewProp_inResponseData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoader_ImportMasterDataFromResponseData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoader_ImportMasterDataFromResponseData_Statics::NewProp_inResponseData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoader_ImportMasterDataFromResponseData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoader_ImportMasterDataFromResponseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoader, nullptr, "ImportMasterDataFromResponseData", nullptr, nullptr, sizeof(ELSSMasterDataLoader_eventImportMasterDataFromResponseData_Parms), Z_Construct_UFunction_AELSSMasterDataLoader_ImportMasterDataFromResponseData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoader_ImportMasterDataFromResponseData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoader_ImportMasterDataFromResponseData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoader_ImportMasterDataFromResponseData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoader_ImportMasterDataFromResponseData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoader_ImportMasterDataFromResponseData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSMasterDataLoader_OnCompleteLoading_Statics
	{
		struct ELSSMasterDataLoader_eventOnCompleteLoading_Parms
		{
			bool inSuccess;
		};
		static void NewProp_inSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSMasterDataLoader_OnCompleteLoading_Statics::NewProp_inSuccess_SetBit(void* Obj)
	{
		((ELSSMasterDataLoader_eventOnCompleteLoading_Parms*)Obj)->inSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSMasterDataLoader_OnCompleteLoading_Statics::NewProp_inSuccess = { "inSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSMasterDataLoader_eventOnCompleteLoading_Parms), &Z_Construct_UFunction_AELSSMasterDataLoader_OnCompleteLoading_Statics::NewProp_inSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSMasterDataLoader_OnCompleteLoading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSMasterDataLoader_OnCompleteLoading_Statics::NewProp_inSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSMasterDataLoader_OnCompleteLoading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSMasterDataLoader_OnCompleteLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSMasterDataLoader, nullptr, "OnCompleteLoading", nullptr, nullptr, sizeof(ELSSMasterDataLoader_eventOnCompleteLoading_Parms), Z_Construct_UFunction_AELSSMasterDataLoader_OnCompleteLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoader_OnCompleteLoading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSMasterDataLoader_OnCompleteLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSMasterDataLoader_OnCompleteLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSMasterDataLoader_OnCompleteLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSMasterDataLoader_OnCompleteLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSMasterDataLoader_NoRegister()
	{
		return AELSSMasterDataLoader::StaticClass();
	}
	struct Z_Construct_UClass_AELSSMasterDataLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoneLoading_MetaData[];
#endif
		static void NewProp_DoneLoading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoneLoading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MasterData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetryCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RetryCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentYGS2Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentYGS2Request;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSMasterDataLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSMasterDataLoader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSMasterDataLoader_BeginLoadMasterDataByAPI, "BeginLoadMasterDataByAPI" }, // 1261307967
		{ &Z_Construct_UFunction_AELSSMasterDataLoader_BeginLoadMasterDataByLocalData, "BeginLoadMasterDataByLocalData" }, // 3086928562
		{ &Z_Construct_UFunction_AELSSMasterDataLoader_GetDataVersionFromResponseData, "GetDataVersionFromResponseData" }, // 2074276779
		{ &Z_Construct_UFunction_AELSSMasterDataLoader_ImportMasterDataFromResponseData, "ImportMasterDataFromResponseData" }, // 2017456934
		{ &Z_Construct_UFunction_AELSSMasterDataLoader_OnCompleteLoading, "OnCompleteLoading" }, // 498898831
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSMasterDataLoader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSMasterDataLoader.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoader.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_DoneLoading_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterDataLoader" },
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoader.h" },
	};
#endif
	void Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_DoneLoading_SetBit(void* Obj)
	{
		((AELSSMasterDataLoader*)Obj)->DoneLoading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_DoneLoading = { "DoneLoading", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSMasterDataLoader), &Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_DoneLoading_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_DoneLoading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_DoneLoading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_Success_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterDataLoader" },
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoader.h" },
	};
#endif
	void Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((AELSSMasterDataLoader*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSMasterDataLoader), &Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_Success_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_MasterData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterDataLoader" },
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_MasterData = { "MasterData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSMasterDataLoader, MasterData), Z_Construct_UClass_UELSSMasterData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_MasterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_MasterData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_RetryCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterDataLoader" },
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_RetryCount = { "RetryCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSMasterDataLoader, RetryCount), METADATA_PARAMS(Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_RetryCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_RetryCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_CurrentYGS2Request_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMasterDataLoader" },
		{ "ModuleRelativePath", "Public/ELSSMasterDataLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_CurrentYGS2Request = { "CurrentYGS2Request", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSMasterDataLoader, CurrentYGS2Request), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_CurrentYGS2Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_CurrentYGS2Request_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSMasterDataLoader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_DoneLoading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_MasterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_RetryCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSMasterDataLoader_Statics::NewProp_CurrentYGS2Request,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSMasterDataLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSMasterDataLoader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSMasterDataLoader_Statics::ClassParams = {
		&AELSSMasterDataLoader::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSMasterDataLoader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSMasterDataLoader_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSMasterDataLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSMasterDataLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSMasterDataLoader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSMasterDataLoader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSMasterDataLoader, 3430470376);
	template<> ABP_200508_API UClass* StaticClass<AELSSMasterDataLoader>()
	{
		return AELSSMasterDataLoader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSMasterDataLoader(Z_Construct_UClass_AELSSMasterDataLoader, &AELSSMasterDataLoader::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSMasterDataLoader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSMasterDataLoader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
