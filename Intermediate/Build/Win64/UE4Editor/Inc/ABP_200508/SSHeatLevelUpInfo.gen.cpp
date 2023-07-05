// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSHeatLevelUpInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSHeatLevelUpInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatLevelUpInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove();
// End Cross Module References
class UScriptStruct* FSSHeatLevelUpInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSHeatLevelUpInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSHeatLevelUpInfo"), sizeof(FSSHeatLevelUpInfo), Get_Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSHeatLevelUpInfo>()
{
	return FSSHeatLevelUpInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSHeatLevelUpInfo(FSSHeatLevelUpInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSHeatLevelUpInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatLevelUpInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatLevelUpInfo()
	{
		UScriptStruct::DeferCppStructOps<FSSHeatLevelUpInfo>(FName(TEXT("SSHeatLevelUpInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatLevelUpInfo;
	struct Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeatLevel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChangedMove_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangedMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChangedMove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSHeatLevelUpInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSHeatLevelUpInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics::NewProp_HeatLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatLevelUpInfo" },
		{ "ModuleRelativePath", "Public/SSHeatLevelUpInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics::NewProp_HeatLevel = { "HeatLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatLevelUpInfo, HeatLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics::NewProp_HeatLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics::NewProp_HeatLevel_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics::NewProp_ChangedMove_Inner = { "ChangedMove", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics::NewProp_ChangedMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatLevelUpInfo" },
		{ "ModuleRelativePath", "Public/SSHeatLevelUpInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics::NewProp_ChangedMove = { "ChangedMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatLevelUpInfo, ChangedMove), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics::NewProp_ChangedMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics::NewProp_ChangedMove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics::NewProp_HeatLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics::NewProp_ChangedMove_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics::NewProp_ChangedMove,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSHeatLevelUpInfo",
		sizeof(FSSHeatLevelUpInfo),
		alignof(FSSHeatLevelUpInfo),
		Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSHeatLevelUpInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSHeatLevelUpInfo"), sizeof(FSSHeatLevelUpInfo), Get_Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSHeatLevelUpInfo_Hash() { return 1171178771U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
