// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSWeaponMeleeParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSWeaponMeleeParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponMeleeParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSSWeaponMeleeParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSWeaponMeleeParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSWeaponMeleeParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSWeaponMeleeParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSWeaponMeleeParam"), sizeof(FSSWeaponMeleeParam), Get_Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSWeaponMeleeParam>()
{
	return FSSWeaponMeleeParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSWeaponMeleeParam(FSSWeaponMeleeParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSWeaponMeleeParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSWeaponMeleeParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSWeaponMeleeParam()
	{
		UScriptStruct::DeferCppStructOps<FSSWeaponMeleeParam>(FName(TEXT("SSWeaponMeleeParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSWeaponMeleeParam;
	struct Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSWeaponMeleeParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSWeaponMeleeParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponMeleeParam" },
		{ "ModuleRelativePath", "Public/SSWeaponMeleeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponMeleeParam, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponMeleeParam" },
		{ "ModuleRelativePath", "Public/SSWeaponMeleeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponMeleeParam, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Statics::NewProp_SkeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Statics::NewProp_SkeletalMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSWeaponMeleeParam",
		sizeof(FSSWeaponMeleeParam),
		alignof(FSSWeaponMeleeParam),
		Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponMeleeParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSWeaponMeleeParam"), sizeof(FSSWeaponMeleeParam), Get_Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSWeaponMeleeParam_Hash() { return 470852140U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif