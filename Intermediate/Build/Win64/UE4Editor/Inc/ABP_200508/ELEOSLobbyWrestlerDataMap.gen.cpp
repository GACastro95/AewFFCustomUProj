// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSLobbyWrestlerDataMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSLobbyWrestlerDataMap() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSLobbyWrestlerDataMap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyWrestlerData();
// End Cross Module References
	DEFINE_FUNCTION(UELEOSLobbyWrestlerDataMap::execAddWrestlerData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__PUID);
		P_GET_OBJECT(UObject,Z_Param__WrestlerData);
		P_GET_PROPERTY(FIntProperty,Z_Param__WrestlerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddWrestlerData(Z_Param__PUID,Z_Param__WrestlerData,Z_Param__WrestlerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSLobbyWrestlerDataMap::execClearWrestlerDataMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearWrestlerDataMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSLobbyWrestlerDataMap::execClearWrestlerDataMapWithoutPUID)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out__PUIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearWrestlerDataMapWithoutPUID(Z_Param_Out__PUIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSLobbyWrestlerDataMap::execFindWrestlerData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__PUID);
		P_GET_PROPERTY(FIntProperty,Z_Param__WrestlerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->FindWrestlerData(Z_Param__PUID,Z_Param__WrestlerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSLobbyWrestlerDataMap::execIsComplete)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__PUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsComplete(Z_Param__PUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSLobbyWrestlerDataMap::execIsCompleteAll)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out__PUIDArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCompleteAll(Z_Param_Out__PUIDArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSLobbyWrestlerDataMap::execRemoveWrestlerData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__PUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveWrestlerData(Z_Param__PUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSLobbyWrestlerDataMap::execSetWrestlerNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__WrestlerNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWrestlerNum(Z_Param__WrestlerNum);
		P_NATIVE_END;
	}
	void UELEOSLobbyWrestlerDataMap::StaticRegisterNativesUELEOSLobbyWrestlerDataMap()
	{
		UClass* Class = UELEOSLobbyWrestlerDataMap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWrestlerData", &UELEOSLobbyWrestlerDataMap::execAddWrestlerData },
			{ "ClearWrestlerDataMap", &UELEOSLobbyWrestlerDataMap::execClearWrestlerDataMap },
			{ "ClearWrestlerDataMapWithoutPUID", &UELEOSLobbyWrestlerDataMap::execClearWrestlerDataMapWithoutPUID },
			{ "FindWrestlerData", &UELEOSLobbyWrestlerDataMap::execFindWrestlerData },
			{ "IsComplete", &UELEOSLobbyWrestlerDataMap::execIsComplete },
			{ "IsCompleteAll", &UELEOSLobbyWrestlerDataMap::execIsCompleteAll },
			{ "RemoveWrestlerData", &UELEOSLobbyWrestlerDataMap::execRemoveWrestlerData },
			{ "SetWrestlerNum", &UELEOSLobbyWrestlerDataMap::execSetWrestlerNum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_AddWrestlerData_Statics
	{
		struct ELEOSLobbyWrestlerDataMap_eventAddWrestlerData_Parms
		{
			FString _PUID;
			UObject* _WrestlerData;
			int32 _WrestlerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__PUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__PUID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__WrestlerData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__WrestlerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_AddWrestlerData_Statics::NewProp__PUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_AddWrestlerData_Statics::NewProp__PUID = { "_PUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyWrestlerDataMap_eventAddWrestlerData_Parms, _PUID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_AddWrestlerData_Statics::NewProp__PUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_AddWrestlerData_Statics::NewProp__PUID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_AddWrestlerData_Statics::NewProp__WrestlerData = { "_WrestlerData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyWrestlerDataMap_eventAddWrestlerData_Parms, _WrestlerData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_AddWrestlerData_Statics::NewProp__WrestlerIndex = { "_WrestlerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyWrestlerDataMap_eventAddWrestlerData_Parms, _WrestlerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_AddWrestlerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_AddWrestlerData_Statics::NewProp__PUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_AddWrestlerData_Statics::NewProp__WrestlerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_AddWrestlerData_Statics::NewProp__WrestlerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_AddWrestlerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyWrestlerDataMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_AddWrestlerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSLobbyWrestlerDataMap, nullptr, "AddWrestlerData", nullptr, nullptr, sizeof(ELEOSLobbyWrestlerDataMap_eventAddWrestlerData_Parms), Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_AddWrestlerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_AddWrestlerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_AddWrestlerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_AddWrestlerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_AddWrestlerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_AddWrestlerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyWrestlerDataMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSLobbyWrestlerDataMap, nullptr, "ClearWrestlerDataMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMapWithoutPUID_Statics
	{
		struct ELEOSLobbyWrestlerDataMap_eventClearWrestlerDataMapWithoutPUID_Parms
		{
			TArray<FString> _PUIDs;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__PUIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__PUIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__PUIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMapWithoutPUID_Statics::NewProp__PUIDs_Inner = { "_PUIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMapWithoutPUID_Statics::NewProp__PUIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMapWithoutPUID_Statics::NewProp__PUIDs = { "_PUIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyWrestlerDataMap_eventClearWrestlerDataMapWithoutPUID_Parms, _PUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMapWithoutPUID_Statics::NewProp__PUIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMapWithoutPUID_Statics::NewProp__PUIDs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMapWithoutPUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMapWithoutPUID_Statics::NewProp__PUIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMapWithoutPUID_Statics::NewProp__PUIDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMapWithoutPUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyWrestlerDataMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMapWithoutPUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSLobbyWrestlerDataMap, nullptr, "ClearWrestlerDataMapWithoutPUID", nullptr, nullptr, sizeof(ELEOSLobbyWrestlerDataMap_eventClearWrestlerDataMapWithoutPUID_Parms), Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMapWithoutPUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMapWithoutPUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMapWithoutPUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMapWithoutPUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMapWithoutPUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMapWithoutPUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_FindWrestlerData_Statics
	{
		struct ELEOSLobbyWrestlerDataMap_eventFindWrestlerData_Parms
		{
			FString _PUID;
			int32 _WrestlerIndex;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__PUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__PUID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__WrestlerIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_FindWrestlerData_Statics::NewProp__PUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_FindWrestlerData_Statics::NewProp__PUID = { "_PUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyWrestlerDataMap_eventFindWrestlerData_Parms, _PUID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_FindWrestlerData_Statics::NewProp__PUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_FindWrestlerData_Statics::NewProp__PUID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_FindWrestlerData_Statics::NewProp__WrestlerIndex = { "_WrestlerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyWrestlerDataMap_eventFindWrestlerData_Parms, _WrestlerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_FindWrestlerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyWrestlerDataMap_eventFindWrestlerData_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_FindWrestlerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_FindWrestlerData_Statics::NewProp__PUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_FindWrestlerData_Statics::NewProp__WrestlerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_FindWrestlerData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_FindWrestlerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyWrestlerDataMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_FindWrestlerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSLobbyWrestlerDataMap, nullptr, "FindWrestlerData", nullptr, nullptr, sizeof(ELEOSLobbyWrestlerDataMap_eventFindWrestlerData_Parms), Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_FindWrestlerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_FindWrestlerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_FindWrestlerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_FindWrestlerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_FindWrestlerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_FindWrestlerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsComplete_Statics
	{
		struct ELEOSLobbyWrestlerDataMap_eventIsComplete_Parms
		{
			FString _PUID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__PUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__PUID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsComplete_Statics::NewProp__PUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsComplete_Statics::NewProp__PUID = { "_PUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyWrestlerDataMap_eventIsComplete_Parms, _PUID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsComplete_Statics::NewProp__PUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsComplete_Statics::NewProp__PUID_MetaData)) };
	void Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSLobbyWrestlerDataMap_eventIsComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSLobbyWrestlerDataMap_eventIsComplete_Parms), &Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsComplete_Statics::NewProp__PUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyWrestlerDataMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSLobbyWrestlerDataMap, nullptr, "IsComplete", nullptr, nullptr, sizeof(ELEOSLobbyWrestlerDataMap_eventIsComplete_Parms), Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll_Statics
	{
		struct ELEOSLobbyWrestlerDataMap_eventIsCompleteAll_Parms
		{
			TArray<FString> _PUIDArray;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__PUIDArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__PUIDArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__PUIDArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll_Statics::NewProp__PUIDArray_Inner = { "_PUIDArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll_Statics::NewProp__PUIDArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll_Statics::NewProp__PUIDArray = { "_PUIDArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyWrestlerDataMap_eventIsCompleteAll_Parms, _PUIDArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll_Statics::NewProp__PUIDArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll_Statics::NewProp__PUIDArray_MetaData)) };
	void Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSLobbyWrestlerDataMap_eventIsCompleteAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSLobbyWrestlerDataMap_eventIsCompleteAll_Parms), &Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll_Statics::NewProp__PUIDArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll_Statics::NewProp__PUIDArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyWrestlerDataMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSLobbyWrestlerDataMap, nullptr, "IsCompleteAll", nullptr, nullptr, sizeof(ELEOSLobbyWrestlerDataMap_eventIsCompleteAll_Parms), Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_RemoveWrestlerData_Statics
	{
		struct ELEOSLobbyWrestlerDataMap_eventRemoveWrestlerData_Parms
		{
			FString _PUID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__PUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__PUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_RemoveWrestlerData_Statics::NewProp__PUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_RemoveWrestlerData_Statics::NewProp__PUID = { "_PUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyWrestlerDataMap_eventRemoveWrestlerData_Parms, _PUID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_RemoveWrestlerData_Statics::NewProp__PUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_RemoveWrestlerData_Statics::NewProp__PUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_RemoveWrestlerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_RemoveWrestlerData_Statics::NewProp__PUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_RemoveWrestlerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyWrestlerDataMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_RemoveWrestlerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSLobbyWrestlerDataMap, nullptr, "RemoveWrestlerData", nullptr, nullptr, sizeof(ELEOSLobbyWrestlerDataMap_eventRemoveWrestlerData_Parms), Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_RemoveWrestlerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_RemoveWrestlerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_RemoveWrestlerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_RemoveWrestlerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_RemoveWrestlerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_RemoveWrestlerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_SetWrestlerNum_Statics
	{
		struct ELEOSLobbyWrestlerDataMap_eventSetWrestlerNum_Parms
		{
			int32 _WrestlerNum;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__WrestlerNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_SetWrestlerNum_Statics::NewProp__WrestlerNum = { "_WrestlerNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSLobbyWrestlerDataMap_eventSetWrestlerNum_Parms, _WrestlerNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_SetWrestlerNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_SetWrestlerNum_Statics::NewProp__WrestlerNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_SetWrestlerNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSLobbyWrestlerDataMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_SetWrestlerNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSLobbyWrestlerDataMap, nullptr, "SetWrestlerNum", nullptr, nullptr, sizeof(ELEOSLobbyWrestlerDataMap_eventSetWrestlerNum_Parms), Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_SetWrestlerNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_SetWrestlerNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_SetWrestlerNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_SetWrestlerNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_SetWrestlerNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_SetWrestlerNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_NoRegister()
	{
		return UELEOSLobbyWrestlerDataMap::StaticClass();
	}
	struct Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WrestlerNum;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerDataMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WrestlerDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WrestlerDataMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_AddWrestlerData, "AddWrestlerData" }, // 1389111101
		{ &Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMap, "ClearWrestlerDataMap" }, // 3628986983
		{ &Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_ClearWrestlerDataMapWithoutPUID, "ClearWrestlerDataMapWithoutPUID" }, // 1193229207
		{ &Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_FindWrestlerData, "FindWrestlerData" }, // 3462164247
		{ &Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsComplete, "IsComplete" }, // 3942272284
		{ &Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_IsCompleteAll, "IsCompleteAll" }, // 3831376786
		{ &Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_RemoveWrestlerData, "RemoveWrestlerData" }, // 2593489145
		{ &Z_Construct_UFunction_UELEOSLobbyWrestlerDataMap_SetWrestlerNum, "SetWrestlerNum" }, // 3864026726
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEOSLobbyWrestlerDataMap.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyWrestlerDataMap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::NewProp_WrestlerNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyWrestlerDataMap" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyWrestlerDataMap.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::NewProp_WrestlerNum = { "WrestlerNum", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSLobbyWrestlerDataMap, WrestlerNum), METADATA_PARAMS(Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::NewProp_WrestlerNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::NewProp_WrestlerNum_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::NewProp_WrestlerDataMap_ValueProp = { "WrestlerDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLobbyWrestlerData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::NewProp_WrestlerDataMap_Key_KeyProp = { "WrestlerDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::NewProp_WrestlerDataMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSLobbyWrestlerDataMap" },
		{ "ModuleRelativePath", "Public/ELEOSLobbyWrestlerDataMap.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::NewProp_WrestlerDataMap = { "WrestlerDataMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSLobbyWrestlerDataMap, WrestlerDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::NewProp_WrestlerDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::NewProp_WrestlerDataMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::NewProp_WrestlerNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::NewProp_WrestlerDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::NewProp_WrestlerDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::NewProp_WrestlerDataMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELEOSLobbyWrestlerDataMap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::ClassParams = {
		&UELEOSLobbyWrestlerDataMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELEOSLobbyWrestlerDataMap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELEOSLobbyWrestlerDataMap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELEOSLobbyWrestlerDataMap, 1422853978);
	template<> ABP_200508_API UClass* StaticClass<UELEOSLobbyWrestlerDataMap>()
	{
		return UELEOSLobbyWrestlerDataMap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELEOSLobbyWrestlerDataMap(Z_Construct_UClass_UELEOSLobbyWrestlerDataMap, &UELEOSLobbyWrestlerDataMap::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELEOSLobbyWrestlerDataMap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELEOSLobbyWrestlerDataMap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
