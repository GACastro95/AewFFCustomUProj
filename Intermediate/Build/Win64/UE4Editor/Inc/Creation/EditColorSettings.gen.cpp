// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditColorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditColorSettings() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditColorSettings();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditColorTargetInfo();
// End Cross Module References
class UScriptStruct* FEditColorSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditColorSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditColorSettings, Z_Construct_UPackage__Script_Creation(), TEXT("EditColorSettings"), sizeof(FEditColorSettings), Get_Z_Construct_UScriptStruct_FEditColorSettings_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditColorSettings>()
{
	return FEditColorSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditColorSettings(FEditColorSettings::StaticStruct, TEXT("/Script/Creation"), TEXT("EditColorSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditColorSettings
{
	FScriptStruct_Creation_StaticRegisterNativesFEditColorSettings()
	{
		UScriptStruct::DeferCppStructOps<FEditColorSettings>(FName(TEXT("EditColorSettings")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditColorSettings;
	struct Z_Construct_UScriptStruct_FEditColorSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSlotNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColorSlotNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultColorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultColorID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEffectAllMaterials_MetaData[];
#endif
		static void NewProp_bEffectAllMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEffectAllMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetMaterials;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditColorSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditColorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditColorSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_ColorSlotNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditColorSettings" },
		{ "ModuleRelativePath", "Public/EditColorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_ColorSlotNo = { "ColorSlotNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditColorSettings, ColorSlotNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_ColorSlotNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_ColorSlotNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_DefaultColorID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditColorSettings" },
		{ "ModuleRelativePath", "Public/EditColorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_DefaultColorID = { "DefaultColorID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditColorSettings, DefaultColorID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_DefaultColorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_DefaultColorID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_bEffectAllMaterials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditColorSettings" },
		{ "ModuleRelativePath", "Public/EditColorSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_bEffectAllMaterials_SetBit(void* Obj)
	{
		((FEditColorSettings*)Obj)->bEffectAllMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_bEffectAllMaterials = { "bEffectAllMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEditColorSettings), &Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_bEffectAllMaterials_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_bEffectAllMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_bEffectAllMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_ParameterName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditColorSettings" },
		{ "ModuleRelativePath", "Public/EditColorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditColorSettings, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_ParameterName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_TargetMaterials_Inner = { "TargetMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditColorTargetInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_TargetMaterials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditColorSettings" },
		{ "ModuleRelativePath", "Public/EditColorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_TargetMaterials = { "TargetMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditColorSettings, TargetMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_TargetMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_TargetMaterials_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditColorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_ColorSlotNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_DefaultColorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_bEffectAllMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_TargetMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditColorSettings_Statics::NewProp_TargetMaterials,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditColorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"EditColorSettings",
		sizeof(FEditColorSettings),
		alignof(FEditColorSettings),
		Z_Construct_UScriptStruct_FEditColorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditColorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditColorSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditColorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditColorSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditColorSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditColorSettings"), sizeof(FEditColorSettings), Get_Z_Construct_UScriptStruct_FEditColorSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditColorSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditColorSettings_Hash() { return 3002066094U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
