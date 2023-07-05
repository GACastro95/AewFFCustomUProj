// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEntranceCutsceneFingerSignData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEntranceCutsceneFingerSignData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FELEntranceCutsceneFingerSignData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELEntranceCutsceneFingerSignData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELEntranceCutsceneFingerSignData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELEntranceCutsceneFingerSignData"), sizeof(FELEntranceCutsceneFingerSignData), Get_Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELEntranceCutsceneFingerSignData>()
{
	return FELEntranceCutsceneFingerSignData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELEntranceCutsceneFingerSignData(FELEntranceCutsceneFingerSignData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELEntranceCutsceneFingerSignData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneFingerSignData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneFingerSignData()
	{
		UScriptStruct::DeferCppStructOps<FELEntranceCutsceneFingerSignData>(FName(TEXT("ELEntranceCutsceneFingerSignData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneFingerSignData;
	struct Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimeAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AnimeAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneFingerSignData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELEntranceCutsceneFingerSignData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Statics::NewProp_AnimeAssetPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneFingerSignData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneFingerSignData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Statics::NewProp_AnimeAssetPath = { "AnimeAssetPath", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneFingerSignData, AnimeAssetPath), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Statics::NewProp_AnimeAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Statics::NewProp_AnimeAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Statics::NewProp_UnlockItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneFingerSignData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneFingerSignData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Statics::NewProp_UnlockItemId = { "UnlockItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneFingerSignData, UnlockItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Statics::NewProp_UnlockItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Statics::NewProp_UnlockItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Statics::NewProp_AnimeAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Statics::NewProp_UnlockItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELEntranceCutsceneFingerSignData",
		sizeof(FELEntranceCutsceneFingerSignData),
		alignof(FELEntranceCutsceneFingerSignData),
		Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELEntranceCutsceneFingerSignData"), sizeof(FELEntranceCutsceneFingerSignData), Get_Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneFingerSignData_Hash() { return 1357095478U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
