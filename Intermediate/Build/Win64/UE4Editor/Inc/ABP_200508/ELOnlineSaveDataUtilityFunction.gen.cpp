// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELOnlineSaveDataUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELOnlineSaveDataUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELOnlineSaveDataUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELOnlineSaveDataUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELStatDataCache();
// End Cross Module References
	DEFINE_FUNCTION(UELOnlineSaveDataUtilityFunction::execGetStatsDataCache)
	{
		P_GET_TMAP_REF(FString,FELStatDataCache,Z_Param_Out__statsMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELOnlineSaveDataUtilityFunction::GetStatsDataCache(Z_Param_Out__statsMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOnlineSaveDataUtilityFunction::execGetStickerHistory)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out__stickerHistory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELOnlineSaveDataUtilityFunction::GetStickerHistory(Z_Param_Out__stickerHistory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOnlineSaveDataUtilityFunction::execLoadRequestOnlineSaveData)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELOnlineSaveDataUtilityFunction::LoadRequestOnlineSaveData(Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOnlineSaveDataUtilityFunction::execSaveRequestOnlineSaveData)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELOnlineSaveDataUtilityFunction::SaveRequestOnlineSaveData(Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOnlineSaveDataUtilityFunction::execSetupStatsDataCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELOnlineSaveDataUtilityFunction::SetupStatsDataCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOnlineSaveDataUtilityFunction::execUpdateStatsDataCache)
	{
		P_GET_TMAP_REF(FString,FELStatDataCache,Z_Param_Out__statsMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELOnlineSaveDataUtilityFunction::UpdateStatsDataCache(Z_Param_Out__statsMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOnlineSaveDataUtilityFunction::execUpdateStickerHistory)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out__stickerHistory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELOnlineSaveDataUtilityFunction::UpdateStickerHistory(Z_Param_Out__stickerHistory);
		P_NATIVE_END;
	}
	void UELOnlineSaveDataUtilityFunction::StaticRegisterNativesUELOnlineSaveDataUtilityFunction()
	{
		UClass* Class = UELOnlineSaveDataUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStatsDataCache", &UELOnlineSaveDataUtilityFunction::execGetStatsDataCache },
			{ "GetStickerHistory", &UELOnlineSaveDataUtilityFunction::execGetStickerHistory },
			{ "LoadRequestOnlineSaveData", &UELOnlineSaveDataUtilityFunction::execLoadRequestOnlineSaveData },
			{ "SaveRequestOnlineSaveData", &UELOnlineSaveDataUtilityFunction::execSaveRequestOnlineSaveData },
			{ "SetupStatsDataCache", &UELOnlineSaveDataUtilityFunction::execSetupStatsDataCache },
			{ "UpdateStatsDataCache", &UELOnlineSaveDataUtilityFunction::execUpdateStatsDataCache },
			{ "UpdateStickerHistory", &UELOnlineSaveDataUtilityFunction::execUpdateStickerHistory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStatsDataCache_Statics
	{
		struct ELOnlineSaveDataUtilityFunction_eventGetStatsDataCache_Parms
		{
			TMap<FString,FELStatDataCache> _statsMap;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__statsMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__statsMap_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__statsMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStatsDataCache_Statics::NewProp__statsMap_ValueProp = { "_statsMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FELStatDataCache, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStatsDataCache_Statics::NewProp__statsMap_Key_KeyProp = { "_statsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStatsDataCache_Statics::NewProp__statsMap = { "_statsMap", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineSaveDataUtilityFunction_eventGetStatsDataCache_Parms, _statsMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStatsDataCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOnlineSaveDataUtilityFunction_eventGetStatsDataCache_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStatsDataCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOnlineSaveDataUtilityFunction_eventGetStatsDataCache_Parms), &Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStatsDataCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStatsDataCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStatsDataCache_Statics::NewProp__statsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStatsDataCache_Statics::NewProp__statsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStatsDataCache_Statics::NewProp__statsMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStatsDataCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStatsDataCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOnlineSaveDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStatsDataCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOnlineSaveDataUtilityFunction, nullptr, "GetStatsDataCache", nullptr, nullptr, sizeof(ELOnlineSaveDataUtilityFunction_eventGetStatsDataCache_Parms), Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStatsDataCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStatsDataCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStatsDataCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStatsDataCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStatsDataCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStatsDataCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStickerHistory_Statics
	{
		struct ELOnlineSaveDataUtilityFunction_eventGetStickerHistory_Parms
		{
			TArray<int32> _stickerHistory;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__stickerHistory_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__stickerHistory;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStickerHistory_Statics::NewProp__stickerHistory_Inner = { "_stickerHistory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStickerHistory_Statics::NewProp__stickerHistory = { "_stickerHistory", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineSaveDataUtilityFunction_eventGetStickerHistory_Parms, _stickerHistory), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStickerHistory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOnlineSaveDataUtilityFunction_eventGetStickerHistory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStickerHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOnlineSaveDataUtilityFunction_eventGetStickerHistory_Parms), &Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStickerHistory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStickerHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStickerHistory_Statics::NewProp__stickerHistory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStickerHistory_Statics::NewProp__stickerHistory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStickerHistory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStickerHistory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOnlineSaveDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStickerHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOnlineSaveDataUtilityFunction, nullptr, "GetStickerHistory", nullptr, nullptr, sizeof(ELOnlineSaveDataUtilityFunction_eventGetStickerHistory_Parms), Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStickerHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStickerHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStickerHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStickerHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStickerHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStickerHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_LoadRequestOnlineSaveData_Statics
	{
		struct ELOnlineSaveDataUtilityFunction_eventLoadRequestOnlineSaveData_Parms
		{
			uint8 _saveDataAccessFlag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_LoadRequestOnlineSaveData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineSaveDataUtilityFunction_eventLoadRequestOnlineSaveData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_LoadRequestOnlineSaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOnlineSaveDataUtilityFunction_eventLoadRequestOnlineSaveData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_LoadRequestOnlineSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOnlineSaveDataUtilityFunction_eventLoadRequestOnlineSaveData_Parms), &Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_LoadRequestOnlineSaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_LoadRequestOnlineSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_LoadRequestOnlineSaveData_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_LoadRequestOnlineSaveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_LoadRequestOnlineSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOnlineSaveDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_LoadRequestOnlineSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOnlineSaveDataUtilityFunction, nullptr, "LoadRequestOnlineSaveData", nullptr, nullptr, sizeof(ELOnlineSaveDataUtilityFunction_eventLoadRequestOnlineSaveData_Parms), Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_LoadRequestOnlineSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_LoadRequestOnlineSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_LoadRequestOnlineSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_LoadRequestOnlineSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_LoadRequestOnlineSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_LoadRequestOnlineSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SaveRequestOnlineSaveData_Statics
	{
		struct ELOnlineSaveDataUtilityFunction_eventSaveRequestOnlineSaveData_Parms
		{
			uint8 _saveDataAccessFlag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SaveRequestOnlineSaveData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineSaveDataUtilityFunction_eventSaveRequestOnlineSaveData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SaveRequestOnlineSaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOnlineSaveDataUtilityFunction_eventSaveRequestOnlineSaveData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SaveRequestOnlineSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOnlineSaveDataUtilityFunction_eventSaveRequestOnlineSaveData_Parms), &Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SaveRequestOnlineSaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SaveRequestOnlineSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SaveRequestOnlineSaveData_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SaveRequestOnlineSaveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SaveRequestOnlineSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOnlineSaveDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SaveRequestOnlineSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOnlineSaveDataUtilityFunction, nullptr, "SaveRequestOnlineSaveData", nullptr, nullptr, sizeof(ELOnlineSaveDataUtilityFunction_eventSaveRequestOnlineSaveData_Parms), Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SaveRequestOnlineSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SaveRequestOnlineSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SaveRequestOnlineSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SaveRequestOnlineSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SaveRequestOnlineSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SaveRequestOnlineSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SetupStatsDataCache_Statics
	{
		struct ELOnlineSaveDataUtilityFunction_eventSetupStatsDataCache_Parms
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
	void Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SetupStatsDataCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOnlineSaveDataUtilityFunction_eventSetupStatsDataCache_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SetupStatsDataCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOnlineSaveDataUtilityFunction_eventSetupStatsDataCache_Parms), &Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SetupStatsDataCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SetupStatsDataCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SetupStatsDataCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SetupStatsDataCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOnlineSaveDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SetupStatsDataCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOnlineSaveDataUtilityFunction, nullptr, "SetupStatsDataCache", nullptr, nullptr, sizeof(ELOnlineSaveDataUtilityFunction_eventSetupStatsDataCache_Parms), Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SetupStatsDataCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SetupStatsDataCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SetupStatsDataCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SetupStatsDataCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SetupStatsDataCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SetupStatsDataCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics
	{
		struct ELOnlineSaveDataUtilityFunction_eventUpdateStatsDataCache_Parms
		{
			TMap<FString,FELStatDataCache> _statsMap;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__statsMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__statsMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__statsMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics::NewProp__statsMap_ValueProp = { "_statsMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FELStatDataCache, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics::NewProp__statsMap_Key_KeyProp = { "_statsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics::NewProp__statsMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics::NewProp__statsMap = { "_statsMap", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineSaveDataUtilityFunction_eventUpdateStatsDataCache_Parms, _statsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics::NewProp__statsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics::NewProp__statsMap_MetaData)) };
	void Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOnlineSaveDataUtilityFunction_eventUpdateStatsDataCache_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOnlineSaveDataUtilityFunction_eventUpdateStatsDataCache_Parms), &Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics::NewProp__statsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics::NewProp__statsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics::NewProp__statsMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOnlineSaveDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOnlineSaveDataUtilityFunction, nullptr, "UpdateStatsDataCache", nullptr, nullptr, sizeof(ELOnlineSaveDataUtilityFunction_eventUpdateStatsDataCache_Parms), Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory_Statics
	{
		struct ELOnlineSaveDataUtilityFunction_eventUpdateStickerHistory_Parms
		{
			TArray<int32> _stickerHistory;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__stickerHistory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stickerHistory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__stickerHistory;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory_Statics::NewProp__stickerHistory_Inner = { "_stickerHistory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory_Statics::NewProp__stickerHistory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory_Statics::NewProp__stickerHistory = { "_stickerHistory", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineSaveDataUtilityFunction_eventUpdateStickerHistory_Parms, _stickerHistory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory_Statics::NewProp__stickerHistory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory_Statics::NewProp__stickerHistory_MetaData)) };
	void Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOnlineSaveDataUtilityFunction_eventUpdateStickerHistory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOnlineSaveDataUtilityFunction_eventUpdateStickerHistory_Parms), &Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory_Statics::NewProp__stickerHistory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory_Statics::NewProp__stickerHistory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOnlineSaveDataUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOnlineSaveDataUtilityFunction, nullptr, "UpdateStickerHistory", nullptr, nullptr, sizeof(ELOnlineSaveDataUtilityFunction_eventUpdateStickerHistory_Parms), Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELOnlineSaveDataUtilityFunction_NoRegister()
	{
		return UELOnlineSaveDataUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELOnlineSaveDataUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELOnlineSaveDataUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELOnlineSaveDataUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStatsDataCache, "GetStatsDataCache" }, // 4065303365
		{ &Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_GetStickerHistory, "GetStickerHistory" }, // 1701906722
		{ &Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_LoadRequestOnlineSaveData, "LoadRequestOnlineSaveData" }, // 3620144407
		{ &Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SaveRequestOnlineSaveData, "SaveRequestOnlineSaveData" }, // 150454314
		{ &Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_SetupStatsDataCache, "SetupStatsDataCache" }, // 3818593002
		{ &Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStatsDataCache, "UpdateStatsDataCache" }, // 1583646319
		{ &Z_Construct_UFunction_UELOnlineSaveDataUtilityFunction_UpdateStickerHistory, "UpdateStickerHistory" }, // 3375276403
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOnlineSaveDataUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELOnlineSaveDataUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELOnlineSaveDataUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELOnlineSaveDataUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELOnlineSaveDataUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELOnlineSaveDataUtilityFunction_Statics::ClassParams = {
		&UELOnlineSaveDataUtilityFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELOnlineSaveDataUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELOnlineSaveDataUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELOnlineSaveDataUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELOnlineSaveDataUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELOnlineSaveDataUtilityFunction, 2410827797);
	template<> ABP_200508_API UClass* StaticClass<UELOnlineSaveDataUtilityFunction>()
	{
		return UELOnlineSaveDataUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELOnlineSaveDataUtilityFunction(Z_Construct_UClass_UELOnlineSaveDataUtilityFunction, &UELOnlineSaveDataUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELOnlineSaveDataUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELOnlineSaveDataUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
