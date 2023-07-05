// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEntranceChangeMaterialSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEntranceChangeMaterialSet() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FELEntranceChangeMaterialSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELEntranceChangeMaterialSet"), sizeof(FELEntranceChangeMaterialSet), Get_Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELEntranceChangeMaterialSet>()
{
	return FELEntranceChangeMaterialSet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELEntranceChangeMaterialSet(FELEntranceChangeMaterialSet::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELEntranceChangeMaterialSet"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceChangeMaterialSet
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceChangeMaterialSet()
	{
		UScriptStruct::DeferCppStructOps<FELEntranceChangeMaterialSet>(FName(TEXT("ELEntranceChangeMaterialSet")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceChangeMaterialSet;
	struct Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnToMaterial_MetaData[];
#endif
		static void NewProp_ReturnToMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnToMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELEntranceChangeMaterialSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELEntranceChangeMaterialSet>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics::NewProp_Material_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceChangeMaterialSet" },
		{ "ModuleRelativePath", "Public/ELEntranceChangeMaterialSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceChangeMaterialSet, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics::NewProp_ReturnToMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceChangeMaterialSet" },
		{ "ModuleRelativePath", "Public/ELEntranceChangeMaterialSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics::NewProp_ReturnToMaterial_SetBit(void* Obj)
	{
		((FELEntranceChangeMaterialSet*)Obj)->ReturnToMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics::NewProp_ReturnToMaterial = { "ReturnToMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELEntranceChangeMaterialSet), &Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics::NewProp_ReturnToMaterial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics::NewProp_ReturnToMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics::NewProp_ReturnToMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics::NewProp_ReturnToMaterial,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELEntranceChangeMaterialSet",
		sizeof(FELEntranceChangeMaterialSet),
		alignof(FELEntranceChangeMaterialSet),
		Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELEntranceChangeMaterialSet"), sizeof(FELEntranceChangeMaterialSet), Get_Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELEntranceChangeMaterialSet_Hash() { return 3238182628U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
