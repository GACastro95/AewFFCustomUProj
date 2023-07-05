// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEntranceCutsceneParticleAssetsReplaceData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEntranceCutsceneParticleAssetsReplaceData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FELEntranceCutsceneParticleAssetsReplaceData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELEntranceCutsceneParticleAssetsReplaceData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELEntranceCutsceneParticleAssetsReplaceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELEntranceCutsceneParticleAssetsReplaceData"), sizeof(FELEntranceCutsceneParticleAssetsReplaceData), Get_Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELEntranceCutsceneParticleAssetsReplaceData>()
{
	return FELEntranceCutsceneParticleAssetsReplaceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData(FELEntranceCutsceneParticleAssetsReplaceData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELEntranceCutsceneParticleAssetsReplaceData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneParticleAssetsReplaceData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneParticleAssetsReplaceData()
	{
		UScriptStruct::DeferCppStructOps<FELEntranceCutsceneParticleAssetsReplaceData>(FName(TEXT("ELEntranceCutsceneParticleAssetsReplaceData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneParticleAssetsReplaceData;
	struct Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Particle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneParticleAssetsReplaceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELEntranceCutsceneParticleAssetsReplaceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData_Statics::NewProp_Particle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneParticleAssetsReplaceData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneParticleAssetsReplaceData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneParticleAssetsReplaceData, Particle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData_Statics::NewProp_Particle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData_Statics::NewProp_Particle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData_Statics::NewProp_Particle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELEntranceCutsceneParticleAssetsReplaceData",
		sizeof(FELEntranceCutsceneParticleAssetsReplaceData),
		alignof(FELEntranceCutsceneParticleAssetsReplaceData),
		Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELEntranceCutsceneParticleAssetsReplaceData"), sizeof(FELEntranceCutsceneParticleAssetsReplaceData), Get_Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneParticleAssetsReplaceData_Hash() { return 1502074578U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
