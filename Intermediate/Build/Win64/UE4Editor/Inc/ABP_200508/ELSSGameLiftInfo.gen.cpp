// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSGameLiftInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSGameLiftInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSGameLiftInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSServerInfoBuild();
// End Cross Module References
class UScriptStruct* FELSSGameLiftInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSGameLiftInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSGameLiftInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSGameLiftInfo"), sizeof(FELSSGameLiftInfo), Get_Z_Construct_UScriptStruct_FELSSGameLiftInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSGameLiftInfo>()
{
	return FELSSGameLiftInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSGameLiftInfo(FELSSGameLiftInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSGameLiftInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSGameLiftInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSGameLiftInfo()
	{
		UScriptStruct::DeferCppStructOps<FELSSGameLiftInfo>(FName(TEXT("ELSSGameLiftInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSGameLiftInfo;
	struct Z_Construct_UScriptStruct_FELSSGameLiftInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssBuild_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ssBuild;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSGameLiftInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSGameLiftInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSGameLiftInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSGameLiftInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSGameLiftInfo_Statics::NewProp_ssBuild_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameLiftInfo" },
		{ "ModuleRelativePath", "Public/ELSSGameLiftInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELSSGameLiftInfo_Statics::NewProp_ssBuild = { "ssBuild", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSGameLiftInfo, ssBuild), Z_Construct_UScriptStruct_FELSSServerInfoBuild, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSGameLiftInfo_Statics::NewProp_ssBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSGameLiftInfo_Statics::NewProp_ssBuild_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSGameLiftInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSGameLiftInfo_Statics::NewProp_ssBuild,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSGameLiftInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELSSGameLiftInfo",
		sizeof(FELSSGameLiftInfo),
		alignof(FELSSGameLiftInfo),
		Z_Construct_UScriptStruct_FELSSGameLiftInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSGameLiftInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSGameLiftInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSGameLiftInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSGameLiftInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSGameLiftInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSGameLiftInfo"), sizeof(FELSSGameLiftInfo), Get_Z_Construct_UScriptStruct_FELSSGameLiftInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSGameLiftInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSGameLiftInfo_Hash() { return 111335208U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
