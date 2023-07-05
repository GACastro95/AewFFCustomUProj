// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSServerInfoBuild.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSServerInfoBuild() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSServerInfoBuild();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FELSSServerInfoBuild::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSServerInfoBuild_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSServerInfoBuild, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSServerInfoBuild"), sizeof(FELSSServerInfoBuild), Get_Z_Construct_UScriptStruct_FELSSServerInfoBuild_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSServerInfoBuild>()
{
	return FELSSServerInfoBuild::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSServerInfoBuild(FELSSServerInfoBuild::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSServerInfoBuild"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSServerInfoBuild
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSServerInfoBuild()
	{
		UScriptStruct::DeferCppStructOps<FELSSServerInfoBuild>(FName(TEXT("ELSSServerInfoBuild")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSServerInfoBuild;
	struct Z_Construct_UScriptStruct_FELSSServerInfoBuild_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssServerBuildVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ssServerBuildVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSServerInfoBuild_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSServerInfoBuild.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSServerInfoBuild_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSServerInfoBuild>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSServerInfoBuild_Statics::NewProp_ssServerBuildVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSServerInfoBuild" },
		{ "ModuleRelativePath", "Public/ELSSServerInfoBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSServerInfoBuild_Statics::NewProp_ssServerBuildVersion = { "ssServerBuildVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSServerInfoBuild, ssServerBuildVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSServerInfoBuild_Statics::NewProp_ssServerBuildVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSServerInfoBuild_Statics::NewProp_ssServerBuildVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSServerInfoBuild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSServerInfoBuild_Statics::NewProp_ssServerBuildVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSServerInfoBuild_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELSSServerInfoBuild",
		sizeof(FELSSServerInfoBuild),
		alignof(FELSSServerInfoBuild),
		Z_Construct_UScriptStruct_FELSSServerInfoBuild_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSServerInfoBuild_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSServerInfoBuild_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSServerInfoBuild_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSServerInfoBuild()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSServerInfoBuild_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSServerInfoBuild"), sizeof(FELSSServerInfoBuild), Get_Z_Construct_UScriptStruct_FELSSServerInfoBuild_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSServerInfoBuild_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSServerInfoBuild_Hash() { return 1369278221U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
