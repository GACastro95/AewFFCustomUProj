// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditColorTargetInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditColorTargetInfo() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditColorTargetInfo();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
class UScriptStruct* FEditColorTargetInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditColorTargetInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditColorTargetInfo, Z_Construct_UPackage__Script_Creation(), TEXT("EditColorTargetInfo"), sizeof(FEditColorTargetInfo), Get_Z_Construct_UScriptStruct_FEditColorTargetInfo_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditColorTargetInfo>()
{
	return FEditColorTargetInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditColorTargetInfo(FEditColorTargetInfo::StaticStruct, TEXT("/Script/Creation"), TEXT("EditColorTargetInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditColorTargetInfo
{
	FScriptStruct_Creation_StaticRegisterNativesFEditColorTargetInfo()
	{
		UScriptStruct::DeferCppStructOps<FEditColorTargetInfo>(FName(TEXT("EditColorTargetInfo")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditColorTargetInfo;
	struct Z_Construct_UScriptStruct_FEditColorTargetInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditColorTargetInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditColorTargetInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditColorTargetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditColorTargetInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditColorTargetInfo_Statics::NewProp_SlotName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditColorTargetInfo" },
		{ "ModuleRelativePath", "Public/EditColorTargetInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEditColorTargetInfo_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditColorTargetInfo, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditColorTargetInfo_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditColorTargetInfo_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditColorTargetInfo_Statics::NewProp_ParameterName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditColorTargetInfo" },
		{ "ModuleRelativePath", "Public/EditColorTargetInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEditColorTargetInfo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditColorTargetInfo, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditColorTargetInfo_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditColorTargetInfo_Statics::NewProp_ParameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditColorTargetInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditColorTargetInfo_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditColorTargetInfo_Statics::NewProp_ParameterName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditColorTargetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"EditColorTargetInfo",
		sizeof(FEditColorTargetInfo),
		alignof(FEditColorTargetInfo),
		Z_Construct_UScriptStruct_FEditColorTargetInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditColorTargetInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditColorTargetInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditColorTargetInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditColorTargetInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditColorTargetInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditColorTargetInfo"), sizeof(FEditColorTargetInfo), Get_Z_Construct_UScriptStruct_FEditColorTargetInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditColorTargetInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditColorTargetInfo_Hash() { return 3751043806U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
