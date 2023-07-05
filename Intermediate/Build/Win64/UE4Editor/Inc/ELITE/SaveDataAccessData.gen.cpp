// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/SaveDataAccessData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDataAccessData() {}
// Cross Module References
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FSaveDataAccessData();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FSaveDataAccessData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_API uint32 Get_Z_Construct_UScriptStruct_FSaveDataAccessData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveDataAccessData, Z_Construct_UPackage__Script_ELITE(), TEXT("SaveDataAccessData"), sizeof(FSaveDataAccessData), Get_Z_Construct_UScriptStruct_FSaveDataAccessData_Hash());
	}
	return Singleton;
}
template<> ELITE_API UScriptStruct* StaticStruct<FSaveDataAccessData>()
{
	return FSaveDataAccessData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveDataAccessData(FSaveDataAccessData::StaticStruct, TEXT("/Script/ELITE"), TEXT("SaveDataAccessData"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_StaticRegisterNativesFSaveDataAccessData
{
	FScriptStruct_ELITE_StaticRegisterNativesFSaveDataAccessData()
	{
		UScriptStruct::DeferCppStructOps<FSaveDataAccessData>(FName(TEXT("SaveDataAccessData")));
	}
} ScriptStruct_ELITE_StaticRegisterNativesFSaveDataAccessData;
	struct Z_Construct_UScriptStruct_FSaveDataAccessData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectClassPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectClassPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWhenFailedIsNeedNewData_MetaData[];
#endif
		static void NewProp_bWhenFailedIsNeedNewData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWhenFailedIsNeedNewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RequestCapacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SaveTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SaveDataAccessData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveDataAccessData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_ObjectClassPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataAccessData" },
		{ "ModuleRelativePath", "Public/SaveDataAccessData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_ObjectClassPath = { "ObjectClassPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataAccessData, ObjectClassPath), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_ObjectClassPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_ObjectClassPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_ObjectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataAccessData" },
		{ "ModuleRelativePath", "Public/SaveDataAccessData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataAccessData, ObjectClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_ObjectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_ObjectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_bWhenFailedIsNeedNewData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataAccessData" },
		{ "ModuleRelativePath", "Public/SaveDataAccessData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_bWhenFailedIsNeedNewData_SetBit(void* Obj)
	{
		((FSaveDataAccessData*)Obj)->bWhenFailedIsNeedNewData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_bWhenFailedIsNeedNewData = { "bWhenFailedIsNeedNewData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSaveDataAccessData), &Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_bWhenFailedIsNeedNewData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_bWhenFailedIsNeedNewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_bWhenFailedIsNeedNewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_RequestCapacity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataAccessData" },
		{ "ModuleRelativePath", "Public/SaveDataAccessData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_RequestCapacity = { "RequestCapacity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataAccessData, RequestCapacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_RequestCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_RequestCapacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_SlotNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataAccessData" },
		{ "ModuleRelativePath", "Public/SaveDataAccessData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_SlotNum = { "SlotNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataAccessData, SlotNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_SlotNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_SlotNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_Timeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataAccessData" },
		{ "ModuleRelativePath", "Public/SaveDataAccessData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataAccessData, Timeout), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_Timeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_Timeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_SaveTitle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataAccessData" },
		{ "ModuleRelativePath", "Public/SaveDataAccessData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_SaveTitle = { "SaveTitle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveDataAccessData, SaveTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_SaveTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_SaveTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_ObjectClassPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_ObjectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_bWhenFailedIsNeedNewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_RequestCapacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_SlotNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::NewProp_SaveTitle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
		nullptr,
		&NewStructOps,
		"SaveDataAccessData",
		sizeof(FSaveDataAccessData),
		alignof(FSaveDataAccessData),
		Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveDataAccessData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveDataAccessData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveDataAccessData"), sizeof(FSaveDataAccessData), Get_Z_Construct_UScriptStruct_FSaveDataAccessData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveDataAccessData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveDataAccessData_Hash() { return 3366065637U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
