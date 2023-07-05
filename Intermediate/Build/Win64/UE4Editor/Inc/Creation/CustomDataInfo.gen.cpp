// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/CustomDataInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomDataInfo() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FCustomDataInfo();
	UPackage* Z_Construct_UPackage__Script_Creation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FCustomDataInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FCustomDataInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomDataInfo, Z_Construct_UPackage__Script_Creation(), TEXT("CustomDataInfo"), sizeof(FCustomDataInfo), Get_Z_Construct_UScriptStruct_FCustomDataInfo_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FCustomDataInfo>()
{
	return FCustomDataInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomDataInfo(FCustomDataInfo::StaticStruct, TEXT("/Script/Creation"), TEXT("CustomDataInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFCustomDataInfo
{
	FScriptStruct_Creation_StaticRegisterNativesFCustomDataInfo()
	{
		UScriptStruct::DeferCppStructOps<FCustomDataInfo>(FName(TEXT("CustomDataInfo")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFCustomDataInfo;
	struct Z_Construct_UScriptStruct_FCustomDataInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SaveSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstSavedDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirstSavedDate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomDataInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomDataInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomDataInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomDataInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomDataInfo_Statics::NewProp_SaveSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomDataInfo" },
		{ "ModuleRelativePath", "Public/CustomDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomDataInfo_Statics::NewProp_SaveSlot = { "SaveSlot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomDataInfo, SaveSlot), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomDataInfo_Statics::NewProp_SaveSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDataInfo_Statics::NewProp_SaveSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomDataInfo_Statics::NewProp_FirstSavedDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomDataInfo" },
		{ "ModuleRelativePath", "Public/CustomDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomDataInfo_Statics::NewProp_FirstSavedDate = { "FirstSavedDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomDataInfo, FirstSavedDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomDataInfo_Statics::NewProp_FirstSavedDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDataInfo_Statics::NewProp_FirstSavedDate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomDataInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomDataInfo_Statics::NewProp_SaveSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomDataInfo_Statics::NewProp_FirstSavedDate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomDataInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"CustomDataInfo",
		sizeof(FCustomDataInfo),
		alignof(FCustomDataInfo),
		Z_Construct_UScriptStruct_FCustomDataInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDataInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomDataInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDataInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomDataInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomDataInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomDataInfo"), sizeof(FCustomDataInfo), Get_Z_Construct_UScriptStruct_FCustomDataInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomDataInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomDataInfo_Hash() { return 4067638144U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
