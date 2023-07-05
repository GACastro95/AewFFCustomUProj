// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSMapAreaVolumeInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSMapAreaVolumeInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSMapAreaVolumeInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSMapAreaVolumeInfo"), sizeof(FSSMapAreaVolumeInfo), Get_Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSMapAreaVolumeInfo>()
{
	return FSSMapAreaVolumeInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSMapAreaVolumeInfo(FSSMapAreaVolumeInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSMapAreaVolumeInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSMapAreaVolumeInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSMapAreaVolumeInfo()
	{
		UScriptStruct::DeferCppStructOps<FSSMapAreaVolumeInfo>(FName(TEXT("SSMapAreaVolumeInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSMapAreaVolumeInfo;
	struct Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapAreaId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapAreaId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniMapId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiniMapId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSMapAreaVolumeInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSMapAreaVolumeInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMapAreaVolumeInfo" },
		{ "ModuleRelativePath", "Public/SSMapAreaVolumeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMapAreaVolumeInfo, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::NewProp_MapAreaId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMapAreaVolumeInfo" },
		{ "ModuleRelativePath", "Public/SSMapAreaVolumeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::NewProp_MapAreaId = { "MapAreaId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMapAreaVolumeInfo, MapAreaId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::NewProp_MapAreaId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::NewProp_MapAreaId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::NewProp_MiniMapId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMapAreaVolumeInfo" },
		{ "ModuleRelativePath", "Public/SSMapAreaVolumeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::NewProp_MiniMapId = { "MiniMapId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMapAreaVolumeInfo, MiniMapId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::NewProp_MiniMapId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::NewProp_MiniMapId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::NewProp_MapAreaId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::NewProp_MiniMapId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSMapAreaVolumeInfo",
		sizeof(FSSMapAreaVolumeInfo),
		alignof(FSSMapAreaVolumeInfo),
		Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSMapAreaVolumeInfo"), sizeof(FSSMapAreaVolumeInfo), Get_Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSMapAreaVolumeInfo_Hash() { return 3966015881U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
